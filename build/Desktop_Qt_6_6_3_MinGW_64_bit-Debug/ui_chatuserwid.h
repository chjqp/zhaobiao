/********************************************************************************
** Form generated from reading UI file 'chatuserwid.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATUSERWID_H
#define UI_CHATUSERWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatUserWid
{
public:
    QWidget *user_info_wid;
    QLabel *user_name_lb;
    QLabel *user_chat_lb;
    QWidget *icon_wid;
    QLabel *icon_lb;

    void setupUi(QWidget *ChatUserWid)
    {
        if (ChatUserWid->objectName().isEmpty())
            ChatUserWid->setObjectName("ChatUserWid");
        ChatUserWid->resize(244, 186);
        user_info_wid = new QWidget(ChatUserWid);
        user_info_wid->setObjectName("user_info_wid");
        user_info_wid->setGeometry(QRect(70, 20, 141, 141));
        user_name_lb = new QLabel(user_info_wid);
        user_name_lb->setObjectName("user_name_lb");
        user_name_lb->setGeometry(QRect(0, 0, 131, 41));
        user_chat_lb = new QLabel(user_info_wid);
        user_chat_lb->setObjectName("user_chat_lb");
        user_chat_lb->setGeometry(QRect(0, 40, 121, 31));
        icon_wid = new QWidget(ChatUserWid);
        icon_wid->setObjectName("icon_wid");
        icon_wid->setGeometry(QRect(-10, -40, 71, 131));
        icon_lb = new QLabel(icon_wid);
        icon_lb->setObjectName("icon_lb");
        icon_lb->setGeometry(QRect(8, 70, 71, 61));

        retranslateUi(ChatUserWid);

        QMetaObject::connectSlotsByName(ChatUserWid);
    } // setupUi

    void retranslateUi(QWidget *ChatUserWid)
    {
        ChatUserWid->setWindowTitle(QCoreApplication::translate("ChatUserWid", "Form", nullptr));
        user_name_lb->setText(QCoreApplication::translate("ChatUserWid", "TextLabel", nullptr));
        user_chat_lb->setText(QCoreApplication::translate("ChatUserWid", "TextLabel", nullptr));
        icon_lb->setText(QCoreApplication::translate("ChatUserWid", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatUserWid: public Ui_ChatUserWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATUSERWID_H
