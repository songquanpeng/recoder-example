#include "mainwidget.h"
#include "loginui.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleFile(":/style.qss");
    styleFile.open(QFile::ReadOnly);
    if(styleFile.isOpen())
    {
        QString qss;
        qss = QLatin1String(styleFile.readAll());
        qApp->setStyleSheet(qss);
        styleFile.close();
    }



    loginUI w;
    w.show();

    return a.exec();
}
