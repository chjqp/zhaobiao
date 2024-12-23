#ifndef CHATMANAGER_H
#define CHATMANAGER_H

#include <QWidget>
#include <QVBoxLayout>
#include <QScrollArea>
#include "UserWidget.h"

class ChatManager : public QWidget
{
    Q_OBJECT

public:
    explicit ChatManager(QWidget *parent = nullptr);

    enum User_Type {
        User_Me,
        User_Other,
        User_Time
    };

    void addMessage(User_Type userType, const QString &message = QString(), const QPixmap &image = QPixmap(), const QString &fileName = QString());

private:
    QVBoxLayout *m_layout;
    QWidget *m_messageWidget;
    QVBoxLayout *m_messageLayout;
    QScrollArea *m_scrollArea;
};

#endif // CHATMANAGER_H
