#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QApplication>
#include "chatdialog.h"
#include "userwidget.h"
#include "QVBoxLayout"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/style/stylesheet.qss");

    if( qss.open(QFile::ReadOnly))
    {
        qDebug("open success");
        QString style = QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }else{
        qDebug("Open failed");
    }






    // MainWindow w;
    // w.show();
    ChatDialog c;
    c.show();





    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);

    // 创建多个 UserWidget 实例进行测试
    for (int i = 0; i < 5; ++i) {
        UserWidget *userWidget = new UserWidget();
        layout->addWidget(userWidget);
    }

    window.setLayout(layout);
    window.show();
    return a.exec();
}
