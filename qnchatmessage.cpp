#include "qnchatmessage.h"
#include <QFontMetrics>
#include <QPaintEvent>
#include <QDateTime>
#include <QPainter>
#include <QMovie>
#include <QLabel>
#include <QDebug>
#include <QTimer>
#include <QRandomGenerator>
#include "global.h"

QNChatMessage::QNChatMessage(QWidget *parent) : QWidget(parent)
{
    // 设置字体
    QFont te_font = this->font();
    te_font.setFamily("MicrosoftYaHei");
    te_font.setPointSize(12);
    this->setFont(te_font);

    // 初始化 QLabel
    m_nameLabel = new QLabel(this);
    m_titleLabel = new QLabel(this);

    m_nameLabel->setStyleSheet("color: #696969; font-weight: bold; font-size: 12px;");
    m_titleLabel->setStyleSheet("color: #696969; font-weight: bold; font-size: 12px;");

    // 加载动画
    m_loadingMovie = new QMovie(this);
    m_loadingMovie->setFileName(":/img/loading4.gif");
    m_loading = new QLabel(this);
    m_loading->setMovie(m_loadingMovie);
    m_loading->resize(16, 16);
    m_loading->setAttribute(Qt::WA_TranslucentBackground, true);
    m_loading->setAutoFillBackground(false);

    // 定时器，用于在随机时间后停止加载动画
    m_stopLoadingTimer = new QTimer(this);
    connect(m_stopLoadingTimer, &QTimer::timeout, this, &QNChatMessage::stopLoading);
}

void QNChatMessage::setTextSuccess()
{
    m_loading->hide();
    m_loadingMovie->stop();
    m_isSending = true;
}

void QNChatMessage::stopLoading()
{
    m_loading->hide();  // 停止显示加载动画
    m_loadingMovie->stop();  // 停止动画
    m_isSending = true;  // 标记为已发送
}

void QNChatMessage::setText(QString text, QString time, QSize allSize, QNChatMessage::User_Type userType)
{
    m_msg = text;
    m_userType = userType;
    m_time = time;
    m_curTime = QDateTime::fromSecsSinceEpoch(time.toInt()).toString("hh:mm");
    m_allSize = allSize;

    // 随机生成头像索引
    int randomValue = QRandomGenerator::global()->bounded(100); // 生成0到99之间的随机整数
    int head_i = randomValue % heads.size(); // 从头像数组中随机选择头像
    QString headPath = heads[head_i];  // 获取随机选择的头像路径

    // 设置左侧和右侧用户头像
    m_leftPixmap = QPixmap(headPath);  // 左侧用户头像
    m_rightPixmap = QPixmap(":/img/CustomerService.png");

    // 随机选择职称和名字
    m_userTitle = QString::fromUtf8(strs[QRandomGenerator::global()->bounded(strs.size())].toUtf8());
    m_userName = QString::fromUtf8(names[QRandomGenerator::global()->bounded(names.size())].toUtf8());
    m_nameLabel->setText(m_userName);
    m_titleLabel->setText(m_userTitle);

    // 调试输出
    qDebug() << "随机选择的职称:" << m_userTitle << "随机选择的名字:" << m_userName;

    // 不管是自己发的还是别人发的，都要显示加载动画
    if (!m_isSending) {
        if (m_userType == User_Type::User_She) {
            // 左边的用户消息时，加载动画在消息框右侧
            m_loading->move(m_kuangLeftRect.x() + m_kuangLeftRect.width() + 10, m_kuangLeftRect.y() + m_kuangLeftRect.height() / 2 - m_loading->height() / 2);
        }
        else if (m_userType == User_Type::User_Me) {
            // 右边的用户消息时，加载动画在消息框的左侧
            m_loading->move(m_kuangRightRect.x() - m_loading->width() - 10, m_kuangRightRect.y() + m_kuangRightRect.height() / 2 - m_loading->height() / 2);
        }

        m_loading->show();
        m_loadingMovie->start();

        // 生成一个随机的延迟时间，范围是 0.1s 到 1s 之间
        int randomDelay = QRandomGenerator::global()->bounded(100, 1000);  // 随机生成 100ms 到 1000ms 之间的延迟
        m_stopLoadingTimer->start(randomDelay);  // 启动定时器
    } else {
        m_loading->hide();  // 如果已经发送成功，则不显示加载动画
    }

    this->update();
}

QSize QNChatMessage::fontRect(QString str)
{
    m_msg = str;
    int minHei = 30;
    int iconWH = 40;
    int iconSpaceW = 20;
    int iconRectW = 5;
    int iconTMPH = 10;
    int sanJiaoW = 6;
    int kuangTMP = 20;
    int textSpaceRect = 12;

    m_kuangWidth = this->width() - kuangTMP - 2 * (iconWH + iconSpaceW + iconRectW);
    m_textWidth = m_kuangWidth - 2 * textSpaceRect;
    m_spaceWid = this->width() - m_textWidth;

    m_iconLeftRect = QRect(iconSpaceW, iconTMPH, iconWH, iconWH);
    m_iconRightRect = QRect(this->width() - iconSpaceW - iconWH, iconTMPH, iconWH, iconWH);

    QSize size = getRealString(m_msg); // 获取文本尺寸

    int hei = size.height() < minHei ? minHei : size.height();

    m_sanjiaoLeftRect = QRect(iconWH + iconSpaceW + iconRectW, m_lineHeight / 2, sanJiaoW, hei - m_lineHeight);
    m_sanjiaoRightRect = QRect(this->width() - iconRectW - iconWH - iconSpaceW - sanJiaoW, m_lineHeight / 2, sanJiaoW, hei - m_lineHeight);

    if (size.width() < (m_textWidth + m_spaceWid)) {
        m_kuangLeftRect.setRect(m_sanjiaoLeftRect.x() + m_sanjiaoLeftRect.width(), m_lineHeight / 4 * 3, size.width() - m_spaceWid + 2 * textSpaceRect, hei - m_lineHeight);
        m_kuangRightRect.setRect(this->width() - size.width() + m_spaceWid - 2 * textSpaceRect - iconWH - iconSpaceW - iconRectW - sanJiaoW,
                                 m_lineHeight / 4 * 3, size.width() - m_spaceWid + 2 * textSpaceRect, hei - m_lineHeight);
    } else {
        m_kuangLeftRect.setRect(m_sanjiaoLeftRect.x() + m_sanjiaoLeftRect.width(), m_lineHeight / 4 * 3, m_kuangWidth, hei - m_lineHeight);
        m_kuangRightRect.setRect(iconWH + kuangTMP + iconSpaceW + iconRectW - sanJiaoW, m_lineHeight / 4 * 3, m_kuangWidth, hei - m_lineHeight);
    }

    m_textLeftRect.setRect(m_kuangLeftRect.x() + textSpaceRect, m_kuangLeftRect.y() + iconTMPH,
                           m_kuangLeftRect.width() - 2 * textSpaceRect, m_kuangLeftRect.height() - 2 * iconTMPH);
    m_textRightRect.setRect(m_kuangRightRect.x() + textSpaceRect, m_kuangRightRect.y() + iconTMPH,
                            m_kuangRightRect.width() - 2 * textSpaceRect, m_kuangRightRect.height() - 2 * iconTMPH);

    // 设置名字和职称的 QLabel 位置
    if (m_userType == User_Type::User_She) {
        m_nameLabel->setGeometry(m_iconLeftRect.x(), m_iconLeftRect.bottom() + 5, m_iconLeftRect.width(), 12);
        m_titleLabel->setGeometry(m_iconLeftRect.x(), m_nameLabel->geometry().bottom() + 2, m_iconLeftRect.width(), 12);
    } else if (m_userType == User_Type::User_Me) {
        m_nameLabel->setGeometry(m_iconRightRect.x(), m_iconRightRect.bottom() + 5, m_iconRightRect.width(), 12);
        m_titleLabel->setGeometry(m_iconRightRect.x(), m_nameLabel->geometry().bottom() + 2, m_iconRightRect.width(), 12);
    }

    return QSize(size.width(), hei);
}

QSize QNChatMessage::getRealString(QString src)
{
    QFontMetricsF fm(this->font());
    m_lineHeight = fm.lineSpacing();
    int nCount = src.count("\n");
    int nMaxWidth = 0;

    if (nCount == 0) {
        nMaxWidth = fm.horizontalAdvance(src);
        if (nMaxWidth > m_textWidth) {
            nMaxWidth = m_textWidth;
            int size = m_textWidth / fm.horizontalAdvance(" ");
            int num = fm.horizontalAdvance(src) / m_textWidth;
            QString temp = "";
            for (int i = 0; i <= num; i++) {
                temp += src.mid(i * size, size) + "\n";
            }
            src = temp.trimmed();
        }
    } else {
        QStringList lines = src.split("\n");
        for (int i = 0; i < lines.size(); i++) {
            QString value = lines.at(i);
            int lineWidth = fm.horizontalAdvance(value);
            nMaxWidth = qMax(nMaxWidth, lineWidth);
            if (lineWidth > m_textWidth) {
                int size = m_textWidth / fm.horizontalAdvance(" ");
                int num = lineWidth / m_textWidth;
                QString temp = "";
                for (int j = 0; j <= num; j++) {
                    temp += value.mid(j * size, size) + "\n";
                }
                lines[i] = temp.trimmed();
            }
        }
        src = lines.join("\n");
    }
    return QSize(nMaxWidth + m_spaceWid, (nCount + 1) * m_lineHeight + 2 * m_lineHeight);
}

void QNChatMessage::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform); // 消除锯齿
    painter.setPen(Qt::NoPen);
    painter.setBrush(QBrush(Qt::gray));

    if (m_userType == User_Type::User_She) {  // 其他用户
        // 头像
        painter.drawPixmap(m_iconLeftRect, m_leftPixmap);

        // 消息框加边框
        QColor col_KuangB(234, 234, 234);
        painter.setBrush(QBrush(col_KuangB));
        painter.drawRoundedRect(m_kuangLeftRect.x() - 1, m_kuangLeftRect.y() - 1, m_kuangLeftRect.width() + 2, m_kuangLeftRect.height() + 2, 4, 4);

        // 消息框
        QColor col_Kuang(255, 255, 255);
        painter.setBrush(QBrush(col_Kuang));
        painter.drawRoundedRect(m_kuangLeftRect, 4, 4);

        // 消息三角
        QPointF points[3] = {
            QPointF(m_sanjiaoLeftRect.x(), 30),
            QPointF(m_sanjiaoLeftRect.x() + m_sanjiaoLeftRect.width(), 25),
            QPointF(m_sanjiaoLeftRect.x() + m_sanjiaoLeftRect.width(), 35),
        };
        QPen pen;
        pen.setColor(col_Kuang);
        painter.setPen(pen);
        painter.drawPolygon(points, 3);

        // 三角加边
        QPen penSanJiaoBian;
        penSanJiaoBian.setColor(col_KuangB);
        painter.setPen(penSanJiaoBian);
        painter.drawLine(QPointF(m_sanjiaoLeftRect.x() - 1, 30), QPointF(m_sanjiaoLeftRect.x() + m_sanjiaoLeftRect.width(), 24));
        painter.drawLine(QPointF(m_sanjiaoLeftRect.x() - 1, 30), QPointF(m_sanjiaoLeftRect.x() + m_sanjiaoLeftRect.width(), 36));

        // 绘制消息内容
        QPen penText;
        penText.setColor(QColor(51, 51, 51));
        painter.setPen(penText);
        QTextOption option(Qt::AlignLeft | Qt::AlignVCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        QFont font = this->font(); // 获取当前字体
        font.setPointSize(12); // 恢复气泡里的文字字体大小为12
        painter.setFont(font);
        painter.drawText(m_textLeftRect, m_msg, option);
    } else if (m_userType == User_Type::User_Me) {  // 自己
        // 头像
        painter.drawPixmap(m_iconRightRect, m_rightPixmap);

        // 消息框
        QColor col_Kuang(75, 164, 242);
        painter.setBrush(QBrush(col_Kuang));
        painter.drawRoundedRect(m_kuangRightRect, 4, 4);

        // 消息三角
        QPointF points[3] = {
            QPointF(m_sanjiaoRightRect.x() + m_sanjiaoRightRect.width(), 30),
            QPointF(m_sanjiaoRightRect.x(), 25),
            QPointF(m_sanjiaoRightRect.x(), 35),
        };
        QPen pen;
        pen.setColor(col_Kuang);
        painter.setPen(pen);
        painter.drawPolygon(points, 3);

        // 绘制消息内容
        QPen penText;
        penText.setColor(Qt::white);
        painter.setPen(penText);
        QTextOption option(Qt::AlignLeft | Qt::AlignVCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        QFont font = this->font(); // 获取当前字体
        font.setPointSize(12); // 恢复气泡里的文字字体大小为12
        painter.setFont(font);
        painter.drawText(m_textRightRect, m_msg, option);
    } else if (m_userType == User_Type::User_Time) {  // 时间
        QPen penText;
        penText.setColor(QColor(153, 153, 153));
        painter.setPen(penText);
        QTextOption option(Qt::AlignCenter);
        option.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        QFont te_font = this->font(); // 获取当前字体
        te_font.setFamily("MicrosoftYaHei");
        te_font.setPointSize(10);
        painter.setFont(te_font);
        painter.drawText(this->rect(), m_curTime, option);
    }
}
