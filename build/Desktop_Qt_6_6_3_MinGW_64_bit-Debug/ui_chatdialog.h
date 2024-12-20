/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <chatpage.h>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QToolButton *toolButton_5;
    QWidget *chat_user_widget;
    QWidget *widget_2;
    QTextEdit *theme_text_edit_2;
    QListWidget *chat_user_list;
    QWidget *widget_3;
    QWidget *widget_6;
    QTextBrowser *textBrowser_3;
    QListWidget *listWidget_3;
    QTextBrowser *textBrowser_4;
    ChatPage *chat_data_widget;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName("ChatDialog");
        ChatDialog->resize(1284, 742);
        toolButton_5 = new QToolButton(ChatDialog);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setGeometry(QRect(1090, 10, 41, 41));
        toolButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/res/video_chat_hover.png);"));
        chat_user_widget = new QWidget(ChatDialog);
        chat_user_widget->setObjectName("chat_user_widget");
        chat_user_widget->setGeometry(QRect(0, 0, 231, 631));
        widget_2 = new QWidget(chat_user_widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 231, 51));
        theme_text_edit_2 = new QTextEdit(widget_2);
        theme_text_edit_2->setObjectName("theme_text_edit_2");
        theme_text_edit_2->setGeometry(QRect(0, 0, 231, 51));
        chat_user_list = new QListWidget(chat_user_widget);
        chat_user_list->setObjectName("chat_user_list");
        chat_user_list->setGeometry(QRect(0, 51, 230, 581));
        widget_3 = new QWidget(ChatDialog);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(1060, 70, 251, 561));
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(-1, -1, 251, 171));
        textBrowser_3 = new QTextBrowser(widget_6);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(0, 0, 241, 171));
        listWidget_3 = new QListWidget(widget_3);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(-5, 171, 251, 461));
        textBrowser_4 = new QTextBrowser(widget_3);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(0, 170, 256, 391));
        chat_data_widget = new ChatPage(ChatDialog);
        chat_data_widget->setObjectName("chat_data_widget");
        chat_data_widget->setGeometry(QRect(230, 0, 831, 631));
        chat_data_widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        retranslateUi(ChatDialog);

        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QCoreApplication::translate("ChatDialog", "Dialog", nullptr));
        toolButton_5->setText(QString());
        theme_text_edit_2->setHtml(QCoreApplication::translate("ChatDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:700;\">\350\257\204\346\240\207\345\247\224\345\221\230\344\274\232\344\272\244\346\265\201\347\263\273\347\273\237</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("ChatDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\254\345\221\212\345\214\272</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\350\257\204\346\240\207\347\272\252\345\276\213\345\274\272\350\260\203\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">1.\344\270\245\346\240\274\346\214\211\350\257\204\346\240\207\345\212\236\346\263\225\347\213\254\347\253\213\350\257\204\345\256\241!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">2.\344\270\245\350\260\250\344\275\277\347\224\250\344\273\273\344\275\225\351\200\232\350\256\257\345\267\245\345\205\267!</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("ChatDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#55ffff;\">\351\241\271\347\233\256\346\226\207\344\273\266\345\210\227\350\241\250</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
