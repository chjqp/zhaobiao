#include "chatpage.h"
#include "ui_chatpage.h"
#include <QDateTime>
#include <QDebug>

// ChatPage构造函数
ChatPage::ChatPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatPage)
{
    ui->setupUi(this);  // 设置界面
    resize(600, 800);   // 设置窗口初始大小

}

// ChatPage析构函数
ChatPage::~ChatPage()
{
    delete ui;  // 清理界面资源
}

// 当点击发送按钮时，触发此槽函数
void ChatPage::on_sendButton_clicked()
{
    // 获取用户输入的消息
    QString msg = ui->textEdit->toPlainText();
    ui->textEdit->setText("");  // 清空输入框
    QString time = QString::number(QDateTime::currentDateTime().toSecsSinceEpoch());  // 获取当前时间戳

    bool isSending = true;  // 是否正在发送

    // 输出调试信息
    qDebug() << "addMessage" << msg << time << ui->listWidget->count();

    // 判断消息列表项的数量是奇数还是偶数
    if (ui->listWidget->count() % 2) {
        // 如果是发送的消息
        if (isSending) {
            dealMessageTime(time);  // 处理时间显示

            // 创建新的消息项并将其添加到聊天列表中
            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
            dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);  // 处理用户消息
        } else {
            bool isOver = true;  // 检查是否已经有相同消息的记录

            // 遍历消息列表，检查是否有相同的消息
            for (int i = ui->listWidget->count() - 1; i > 0; i--) {
                QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
                if (messageW->text() == msg) {
                    isOver = false;  // 找到相同消息，标记为不添加新消息
                    messageW->setTextSuccess();  // 设置消息发送成功
                }
            }

            // 如果没有重复的消息，添加新的消息项
            if (isOver) {
                dealMessageTime(time);  // 处理时间显示

                QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
                QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
                dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);
                messageW->setTextSuccess();  // 设置发送成功
            }
        }
    } else {
        // 如果是接收到的消息
        if (msg != "") {
            dealMessageTime(time);  // 处理时间显示

            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
            dealMessage(messageW, item, msg, time, QNChatMessage::User_She);  // 处理对方消息
        }
    }

    // 设置当前消息项为列表的最后一项，确保聊天框滚动到底部
    ui->listWidget->setCurrentRow(ui->listWidget->count() - 1);
}

// 处理消息的显示
void ChatPage::dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type)
{
    messageW->setFixedWidth(this->width());  // 设置消息窗口的宽度与主窗口宽度一致
    QSize size = messageW->fontRect(text);   // 获取消息文本的尺寸
    item->setSizeHint(size);  // 设置列表项的尺寸
    messageW->setText(text, time, size, type);  // 设置消息内容
    ui->listWidget->setItemWidget(item, messageW);  // 将消息窗口添加到列表项
}




// 处理时间显示
void ChatPage::dealMessageTime(QString curMsgTime)
{
    bool isShowTime = false;  // 是否显示时间标签

    // 如果聊天列表中有消息
    if (ui->listWidget->count() > 0) {
        QListWidgetItem* lastItem = ui->listWidget->item(ui->listWidget->count() - 1);  // 获取列表中的最后一项
        QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(lastItem);  // 获取该项对应的消息窗口
        int lastTime = messageW->time().toInt();  // 获取上一条消息的时间
        int curTime = curMsgTime.toInt();  // 获取当前消息的时间
        qDebug() << "curTime lastTime:" << curTime - lastTime;  // 打印时间差调试信息
        isShowTime = ((curTime - lastTime) > 60);  // 如果两条消息相差超过60秒，则显示时间
    } else {
        isShowTime = true;  // 如果没有消息，显示时间
    }

    // 如果需要显示时间
    if (isShowTime) {
        QNChatMessage* messageTime = new QNChatMessage(ui->listWidget->parentWidget());
        QListWidgetItem* itemTime = new QListWidgetItem(ui->listWidget);

        QSize size = QSize(this->width(), 40);  // 设置时间标签的尺寸
        messageTime->resize(size);  // 设置时间标签的窗口大小
        itemTime->setSizeHint(size);  // 设置列表项的尺寸
        messageTime->setText(curMsgTime, curMsgTime, size, QNChatMessage::User_Time);  // 设置时间内容
        ui->listWidget->setItemWidget(itemTime, messageTime);  // 将时间标签添加到列表项
    }
}

// 窗口大小改变时触发此事件
void ChatPage::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);  // 事件未使用




    // 调整所有消息项的尺寸和布局
    for (int i = 0; i < ui->listWidget->count(); i++) {
        QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));  // 获取消息窗口
        QListWidgetItem* item = ui->listWidget->item(i);  // 获取列表项

        // 重新处理消息的尺寸和显示
        dealMessage(messageW, item, messageW->text(), messageW->time(), messageW->userType());
    }
}

void ChatPage::on_toolButton_14_clicked()
{

}

