/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "chatview.h"
#include "clickedlabel.h"

QT_BEGIN_NAMESPACE

class Ui_ChatPage
{
public:
    ChatView *chat_data_list;
    QWidget *widget_14;
    QWidget *widget_15;
    QWidget *widget_16;
    QTextEdit *title_edit_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QToolButton *toolButton_15;
    QWidget *widget_17;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    ClickedLabel *file_lb_2;
    ClickedLabel *emo_lb_2;
    ClickedLabel *pic_lb_2;
    QListWidget *listWidget;
    QToolButton *send_btn_2;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_3;

    void setupUi(QWidget *ChatPage)
    {
        if (ChatPage->objectName().isEmpty())
            ChatPage->setObjectName("ChatPage");
        ChatPage->resize(1241, 732);
        chat_data_list = new ChatView(ChatPage);
        chat_data_list->setObjectName("chat_data_list");
        chat_data_list->setGeometry(QRect(0, 0, 812, 722));
        chat_data_list->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widget_14 = new QWidget(chat_data_list);
        widget_14->setObjectName("widget_14");
        widget_14->setGeometry(QRect(-1, -1, 1091, 71));
        widget_15 = new QWidget(widget_14);
        widget_15->setObjectName("widget_15");
        widget_15->setGeometry(QRect(-1, 0, 1081, 71));
        widget_16 = new QWidget(widget_15);
        widget_16->setObjectName("widget_16");
        widget_16->setGeometry(QRect(0, 0, 1071, 71));
        title_edit_2 = new QTextEdit(widget_16);
        title_edit_2->setObjectName("title_edit_2");
        title_edit_2->setGeometry(QRect(0, 0, 1081, 71));
        layoutWidget_4 = new QWidget(chat_data_list);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(140, 680, 132, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        toolButton_13 = new QToolButton(layoutWidget_4);
        toolButton_13->setObjectName("toolButton_13");
        toolButton_13->setStyleSheet(QString::fromUtf8("border-image: url(:/res/filedir_hover.png);"));

        horizontalLayout_5->addWidget(toolButton_13);

        toolButton_14 = new QToolButton(layoutWidget_4);
        toolButton_14->setObjectName("toolButton_14");
        toolButton_14->setStyleSheet(QString::fromUtf8("border-image: url(:/res/chat_icon_press.png);"));

        horizontalLayout_5->addWidget(toolButton_14);

        toolButton_15 = new QToolButton(layoutWidget_4);
        toolButton_15->setObjectName("toolButton_15");
        toolButton_15->setStyleSheet(QString::fromUtf8("border-image: url(:/res/smile_press.png);"));

        horizontalLayout_5->addWidget(toolButton_15);

        widget_17 = new QWidget(layoutWidget_4);
        widget_17->setObjectName("widget_17");

        horizontalLayout_5->addWidget(widget_17);

        horizontalLayoutWidget_2 = new QWidget(chat_data_list);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 530, 101, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        file_lb_2 = new ClickedLabel(horizontalLayoutWidget_2);
        file_lb_2->setObjectName("file_lb_2");
        file_lb_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/filedir_hover.png);"));

        horizontalLayout_6->addWidget(file_lb_2);

        emo_lb_2 = new ClickedLabel(horizontalLayoutWidget_2);
        emo_lb_2->setObjectName("emo_lb_2");
        emo_lb_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/chat_icon.png);"));

        horizontalLayout_6->addWidget(emo_lb_2);

        pic_lb_2 = new ClickedLabel(horizontalLayoutWidget_2);
        pic_lb_2->setObjectName("pic_lb_2");
        pic_lb_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/smile_press.png);"));

        horizontalLayout_6->addWidget(pic_lb_2);

        listWidget = new QListWidget(chat_data_list);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 80, 791, 441));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{background-color: rgb(247, 247, 247); color:rgb(51,51,51); border: 1px solid  rgb(247, 247, 247);outline:0px;}\n"
"QListWidget::Item{background-color: rgb(247, 247, 247);}\n"
"QListWidget::Item:hover{background-color: rgb(247, 247, 247); }\n"
"QListWidget::item:selected{\n"
"	background-color: rgb(247, 247, 247);\n"
"	color:black; \n"
"    border: 1px solid  rgb(247, 247, 247);\n"
"}\n"
"QListWidget::item:selected:!active{border: 1px solid  rgb(247, 247, 247); background-color: rgb(247, 247, 247); color:rgb(51,51,51); } "));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        send_btn_2 = new QToolButton(chat_data_list);
        send_btn_2->setObjectName("send_btn_2");
        send_btn_2->setGeometry(QRect(620, 690, 20, 23));
        send_btn_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/right_tip.png);"));
        pushButton_3 = new QPushButton(chat_data_list);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(750, 540, 61, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/res/right_tip.png);\n"
"color: rgb(0, 255, 255);"));
        textEdit_3 = new QTextEdit(chat_data_list);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(110, 520, 651, 51));

        retranslateUi(ChatPage);

        QMetaObject::connectSlotsByName(ChatPage);
    } // setupUi

    void retranslateUi(QWidget *ChatPage)
    {
        ChatPage->setWindowTitle(QCoreApplication::translate("ChatPage", "Form", nullptr));
        title_edit_2->setHtml(QCoreApplication::translate("ChatPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\215\216\347\224\265\346\274\257\346\262\263\345\217\221\347\224\265\346\234\211\351\231\220\345\205\254\345\217\270\347\233\270\345\205\263\346\212\200\346\224\271\351\241\271\347\233\256\345\267\245\347\250\213\347\262\211\347\205\244\347\201\260\343\200\201\347\202\211\346\270\243\345\267\245\347\250\213\347\262\211\347\205\244\347\201\260\343\200\201\347\202\211\346\270\243\347\216\257"
                        "\344\277\235\345\220\210\350\247\204\346\270\205\350\277\220\345\217\212\347\273\274\345\220\210\345\210\251\347\224\250\351\241\271\347\233\256</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">\350\257\204\346\240\207\344\270\255</span></p></body></html>", nullptr));
        toolButton_13->setText(QString());
        toolButton_14->setText(QString());
        toolButton_15->setText(QString());
        file_lb_2->setText(QString());
        emo_lb_2->setText(QString());
        pic_lb_2->setText(QString());
        send_btn_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatPage: public Ui_ChatPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
