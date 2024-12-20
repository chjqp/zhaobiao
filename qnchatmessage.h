#ifndef QNCHATMESSAGE_H
#define QNCHATMESSAGE_H

#include <QWidget>
#include <QTimer>  // 添加 QTimer 头文件

class QPaintEvent;
class QPainter;
class QLabel;
class QMovie;

class QNChatMessage : public QWidget
{
    Q_OBJECT

public:
    explicit QNChatMessage(QWidget *parent = nullptr);

    enum User_Type{
        User_System,  // 系统
        User_Me,      // 自己
        User_She,     // 用户
        User_Time,    // 时间
    };

    void setTextSuccess();
    void setText(QString text, QString time, QSize allSize, User_Type userType);
    // 设置消息内容、用户类型、昵称和职称
    void setInfo(const QString &msg, User_Type userType, const QString &name = "", const QString &title = "");
    QSize getRealString(QString src);
    QSize fontRect(QString str);

    inline QString text() { return m_msg; }
    inline QString time() { return m_time; }
    inline User_Type userType() { return m_userType; }


protected:
    void paintEvent(QPaintEvent *event) override;

private:
    // 添加成员变量
    QString m_msg;
    QString m_time;
    QString m_curTime;
    QString m_userName;      // 用户昵称
    QString m_userTitle;     // 用户职称
    QSize m_allSize;
    User_Type m_userType = User_System;
    // void drawAvatar(QPainter &painter, const QRect &iconRect, const QPixmap &pixmap);
    // void drawNameAndTitle(QPainter &painter, const QRect &nameRect, const QRect &titleRect);
    // void drawMessageBox(QPainter &painter, const QRect &boxRect, const QColor &color);
    // void drawTriangle(QPainter &painter, const QRect &triangleRect, const QColor &color);
    // void drawText(QPainter &painter, const QRect &textRect, const QString &text);
    // void drawTimeText(QPainter &painter); // 如果 drawTimeText 函数需要参数，这里也应该声明
    int m_kuangWidth;
    int m_textWidth;
    int m_spaceWid;
    int m_lineHeight;

    QRect m_iconLeftRect;
    QRect m_iconRightRect;
    QRect m_sanjiaoLeftRect;
    QRect m_sanjiaoRightRect;
    QRect m_kuangLeftRect;
    QRect m_kuangRightRect;
    QRect m_textLeftRect;
    QRect m_textRightRect;

    QPixmap m_leftPixmap;
    QPixmap m_rightPixmap;

    QLabel* m_loading = Q_NULLPTR;
    QMovie* m_loadingMovie = Q_NULLPTR;
    bool m_isSending = false;

    // 添加定时器和方法声明
    QTimer *m_stopLoadingTimer = nullptr;  // 定时器对象
    void stopLoading();  // 停止加载动画的方法

};

#endif // QNCHATMESSAGE_H
