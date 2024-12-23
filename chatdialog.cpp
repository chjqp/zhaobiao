#include "chatdialog.h"
#include "ui_chatdialog.h"
#include "global.h"
#include "chatuserwid.h"
#include <QRandomGenerator>
#include <QFileDialog>
#include <QUrl>
#include <QFileInfo>
#include <QDesktopServices>
#include <QCoreApplication>

ChatDialog::ChatDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChatDialog)
{
    ui->setupUi(this);
    ChatDialog::addChatUserList();

    // 设置不同的字体
    QFont font("Arial", 10);
    ui->textBrowser->setFont(font);

    // 禁用 DirectWrite
    QCoreApplication::setAttribute(Qt::AA_UseSoftwareOpenGL);

    // 可选：初始化 textBrowser 的设置
    ui->textBrowser->setOpenLinks(false); // 禁止 textBrowser 自动打开链接
    ui->textBrowser->setOpenExternalLinks(false);

    // 连接上传按钮的点击信号到槽函数
    connect(ui->pushButtonUpload, &QPushButton::clicked, this, &ChatDialog::on_pushButtonUpload_clicked);

    // 连接 textBrowser 的 anchorClicked 信号到槽函数
    connect(ui->textBrowser, &QTextBrowser::anchorClicked, this, &ChatDialog::handleLinkClicked);
}

ChatDialog::~ChatDialog()
{
    delete ui;
}

void ChatDialog::addChatUserList()
{
    // 创建QListWidgetItem，并设置自定义的widget
    for(int i = 0; i < 13; i++){
        int randomValue = QRandomGenerator::global()->bounded(100); // 生成0到99之间的随机整数
        int str_i = randomValue % strs.size();
        int head_i = randomValue % heads.size();
        int name_i = randomValue % names.size();

        auto *chat_user_wid = new ChatUserWid();
        chat_user_wid->SetInfo(names[name_i], heads[head_i], strs[str_i]);
        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(chat_user_wid->sizeHint());
        ui->chat_user_list->addItem(item);
        ui->chat_user_list->setItemWidget(item, chat_user_wid);
    }
}

void ChatDialog::addClickableFile(const QString &filePath, const QString &displayName)
{
    // 构建文件的超链接
    QString fileUrl = QUrl::fromLocalFile(filePath).toString();
    QString fileLink = QString("<a href=\"%1\">%2</a>").arg(fileUrl, displayName);

    // 更新 textBrowser 的内容，使用 append 方法追加内容
    ui->textBrowser->append(fileLink);
}

void ChatDialog::on_pushButtonUpload_clicked()
{
    // 打开文件选择对话框
    QString filePath = QFileDialog::getOpenFileName(this, "选择文件");
    if (!filePath.isEmpty()) {
        // 获取文件名
        QString fileName = QFileInfo(filePath).fileName();
        // 添加可点击的文件链接到 textBrowser
        addClickableFile(filePath, fileName);
    }
}

void ChatDialog::handleLinkClicked(const QUrl &url)
{
    // 打开链接
    QDesktopServices::openUrl(url);

    // 关闭对话框

}
