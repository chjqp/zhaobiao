#ifndef CHATMESSAGEWIDGET_H
#define CHATMESSAGEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTimer>
#include "UserWidget.h"

class QPaintEvent;
class QPainter;
class QLabel;
class QMovie;

class ChatMessageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChatMessageWidget(QWidget *parent = nullptr);

    enum User_Type{
        User_System,  // 系统
        User_Me,      // 自己
        User_She,     // 用户
        User_Time,    // 时间
    };

    void setTextSuccess();
    void setText(QString text, QString time, QSize allSize, User_Type userType);
    void setInfo(const QString &msg, User_Type userType, const QString &name = "", const QString &title = "");
    QSize getRealString(QString src);
    QSize fontRect(QString str);

    inline QString text() { return m_msg; }
    inline QString time() { return m_time; }
    inline User_Type userType() { return m_userType; }

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QString m_msg;
    QString m_time;
    QString m_curTime;
    QString m_userName;
    QString m_userTitle;
    QSize m_allSize;
    User_Type m_userType = User_System;

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

    UserWidget* m_userWidget;

    QTimer *m_stopLoadingTimer = nullptr;
    void stopLoading();
};

#endif // CHATMESSAGEWIDGET_H
