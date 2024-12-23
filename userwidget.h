#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>
#include <QLabel>

class UserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserWidget(QWidget *parent = nullptr);
    void setInfo(const QString &name, const QString &title, const QPixmap &avatar);

private:
    QLabel *m_nameLabel;
    QLabel *m_titleLabel;
    QLabel *m_avatarLabel;
};

#endif // USERWIDGET_H
