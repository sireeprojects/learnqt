#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setStyle("Fusion");
    mainWindow w;
        QFile file(":/stylesheet.qss");
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        w.setStyleSheet(styleSheet);
    w.show();
    return a.exec();
}
