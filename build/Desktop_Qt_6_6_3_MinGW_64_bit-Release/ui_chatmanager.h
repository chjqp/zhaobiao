/********************************************************************************
** Form generated from reading UI file 'chatmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATMANAGER_H
#define UI_CHATMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatManager
{
public:

    void setupUi(QWidget *ChatManager)
    {
        if (ChatManager->objectName().isEmpty())
            ChatManager->setObjectName("ChatManager");
        ChatManager->resize(400, 300);

        retranslateUi(ChatManager);

        QMetaObject::connectSlotsByName(ChatManager);
    } // setupUi

    void retranslateUi(QWidget *ChatManager)
    {
        ChatManager->setWindowTitle(QCoreApplication::translate("ChatManager", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatManager: public Ui_ChatManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMANAGER_H
