#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>

namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();

private slots:
    void on_pushButtonUpload_clicked();

private:
    Ui::ChatDialog *ui;

    void addChatUserList();
    void handleLinkClicked(const QUrl &url);
    void addClickableFile(const QString &filePath, const QString &displayName);
};

#endif // CHATDIALOG_H
