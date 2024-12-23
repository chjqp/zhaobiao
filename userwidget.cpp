#include "UserWidget.h"
#include <QVBoxLayout>
#include <QRandomGenerator>
#include <QStringList>
#include "global.h"
UserWidget::UserWidget(QWidget *parent) : QWidget(parent)
{
    m_nameLabel = new QLabel(this);
    m_titleLabel = new QLabel(this);
    m_avatarLabel = new QLabel(this);


    // 随机生成头像、姓名和职称

    QStringList names = {"张三", "李四", "王五", "赵六"};
    QStringList titles = {"工程师", "经理", "主管", "助理"};

    int randomValue = QRandomGenerator::global()->bounded(100); // 生成0到99之间的随机整数
    int head_i = randomValue % heads.size(); // 从头像数组中随机选择头像
    QString headPath = heads[head_i];  // 获取随机选择的头像路径
    QString userName = names[QRandomGenerator::global()->bounded(names.size())];
    QString userTitle = titles[QRandomGenerator::global()->bounded(titles.size())];


    setInfo(userName, userTitle, QPixmap(headPath));

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(m_avatarLabel);
    layout->addWidget(m_nameLabel);
    layout->addWidget(m_titleLabel);

    setLayout(layout);
}

void UserWidget::setInfo(const QString &name, const QString &title, const QPixmap &avatar)
{
    m_nameLabel->setText(name);
    m_titleLabel->setText(title);

    // 调整头像大小
    int avatarSize = 50; // 头像大小
    m_avatarLabel->setPixmap(avatar.scaled(avatarSize, avatarSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    m_avatarLabel->setFixedSize(avatarSize, avatarSize);
}
