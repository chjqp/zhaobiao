/********************************************************************************
** Form generated from reading UI file 'ChatItemMsgFile.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATITEMMSGFILE_H
#define UI_CHATITEMMSGFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatItemMsgFile
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *fileWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lbFileIcon;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbFileInfo;
    QLabel *lbFileStatus;
    QWidget *btnWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *lbOpenFile;
    QLabel *lbOpenFolder;
    QLabel *lbForward;
    QPushButton *btnMoreOption;

    void setupUi(QWidget *ChatItemMsgFile)
    {
        if (ChatItemMsgFile->objectName().isEmpty())
            ChatItemMsgFile->setObjectName("ChatItemMsgFile");
        ChatItemMsgFile->resize(295, 100);
        ChatItemMsgFile->setMinimumSize(QSize(295, 100));
        verticalLayout = new QVBoxLayout(ChatItemMsgFile);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fileWidget = new QWidget(ChatItemMsgFile);
        fileWidget->setObjectName("fileWidget");
        fileWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(fileWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        topWidget = new QWidget(fileWidget);
        topWidget->setObjectName("topWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy);
        topWidget->setMinimumSize(QSize(295, 68));
        topWidget->setStyleSheet(QString::fromUtf8("#topWidget{	\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(207, 219, 226);\n"
"	border-width:1px;\n"
"	border-style:solid;	\n"
"	border-top-left-radius: 3;\n"
"	border-top-right-radius: 3;\n"
"}"));
        horizontalLayout = new QHBoxLayout(topWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 16);
        lbFileIcon = new QLabel(topWidget);
        lbFileIcon->setObjectName("lbFileIcon");
        sizePolicy.setHeightForWidth(lbFileIcon->sizePolicy().hasHeightForWidth());
        lbFileIcon->setSizePolicy(sizePolicy);
        lbFileIcon->setMinimumSize(QSize(42, 42));
        lbFileIcon->setStyleSheet(QString::fromUtf8("image: url(:/chatmessage/Resources/filetype/xls.png);"));

        horizontalLayout->addWidget(lbFileIcon);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 5, -1, 5);
        lbFileInfo = new QLabel(topWidget);
        lbFileInfo->setObjectName("lbFileInfo");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(9);
        lbFileInfo->setFont(font);

        verticalLayout_3->addWidget(lbFileInfo);

        lbFileStatus = new QLabel(topWidget);
        lbFileStatus->setObjectName("lbFileStatus");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font1.setPointSize(8);
        lbFileStatus->setFont(font1);
        lbFileStatus->setStyleSheet(QString::fromUtf8("color: rgb(136, 136, 136);"));

        verticalLayout_3->addWidget(lbFileStatus);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(topWidget);

        btnWidget = new QWidget(fileWidget);
        btnWidget->setObjectName("btnWidget");
        sizePolicy.setHeightForWidth(btnWidget->sizePolicy().hasHeightForWidth());
        btnWidget->setSizePolicy(sizePolicy);
        btnWidget->setMinimumSize(QSize(295, 32));
        btnWidget->setStyleSheet(QString::fromUtf8("#btnWidget{	\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(207, 219, 226);\n"
"	border-width:1px;\n"
"	border-top-width:0px;\n"
"	border-style:solid;\n"
"	border-bottom-left-radius: 3;\n"
"	border-bottom-right-radius: 3;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(btnWidget);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 9, 0);
        horizontalSpacer = new QSpacerItem(107, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lbOpenFile = new QLabel(btnWidget);
        lbOpenFile->setObjectName("lbOpenFile");
        lbOpenFile->setStyleSheet(QString::fromUtf8("QLable:hover{text-decoration: underline;}"));

        horizontalLayout_2->addWidget(lbOpenFile);

        lbOpenFolder = new QLabel(btnWidget);
        lbOpenFolder->setObjectName("lbOpenFolder");

        horizontalLayout_2->addWidget(lbOpenFolder);

        lbForward = new QLabel(btnWidget);
        lbForward->setObjectName("lbForward");
        lbForward->setStyleSheet(QString::fromUtf8("color: rgb(45, 173, 225);"));

        horizontalLayout_2->addWidget(lbForward);

        btnMoreOption = new QPushButton(btnWidget);
        btnMoreOption->setObjectName("btnMoreOption");

        horizontalLayout_2->addWidget(btnMoreOption);


        verticalLayout_2->addWidget(btnWidget);


        verticalLayout->addWidget(fileWidget);


        retranslateUi(ChatItemMsgFile);

        QMetaObject::connectSlotsByName(ChatItemMsgFile);
    } // setupUi

    void retranslateUi(QWidget *ChatItemMsgFile)
    {
        ChatItemMsgFile->setWindowTitle(QCoreApplication::translate("ChatItemMsgFile", "Form", nullptr));
        lbFileIcon->setText(QString());
        lbFileInfo->setText(QCoreApplication::translate("ChatItemMsgFile", "PC\344\277\256\346\224\271.txt (465.00B)", nullptr));
        lbFileStatus->setText(QCoreApplication::translate("ChatItemMsgFile", "\346\210\220\345\212\237\344\277\235\345\255\230\350\207\263D:\346\216\245\346\224\266\346\226\207\344\273\266\345\244\271PC\344\277\256\346\224\271.txt", nullptr));
        lbOpenFile->setText(QCoreApplication::translate("ChatItemMsgFile", "<style>a{text-decoration: none;}</style><a style='color: #16A4DE;' href=\"http://www.baidu.com\">\346\211\223\345\274\200</a>", nullptr));
        lbOpenFolder->setText(QCoreApplication::translate("ChatItemMsgFile", "<style>a{text-decoration: none;}</style><a style='color: #16A4DE;' href=\"http://www.baidu.com\">\346\211\223\345\274\200\346\226\207\344\273\266\345\244\271</a>", nullptr));
        lbForward->setText(QCoreApplication::translate("ChatItemMsgFile", "<style>a{text-decoration: none;}</style><a style='color: #16A4DE;' href=\"http://www.baidu.com\">\350\275\254\345\217\221</a>", nullptr));
        btnMoreOption->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatItemMsgFile: public Ui_ChatItemMsgFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATITEMMSGFILE_H
