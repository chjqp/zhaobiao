#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QWidget>
#include <QListWidgetItem>
#include "qnchatmessage.h"

namespace Ui {
class ChatPage;
}

class ChatPage : public QWidget
{
    Q_OBJECT

public:
    explicit ChatPage(QWidget *parent = nullptr);
    ~ChatPage();

    void dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);

    void dealMessageTime(QString curMsgTime);

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void on_sendButton_clicked();

    void on_toolButton_14_clicked();

private:
    Ui::ChatPage *ui;
};

#endif // CHATPAGE_H
