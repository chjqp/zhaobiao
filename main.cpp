#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QApplication>
#include "chatdialog.h"
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
    return a.exec();
}
