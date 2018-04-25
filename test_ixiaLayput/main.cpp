#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mainWindow w;

    w.setWindowTitle("Stream Properties");
//    w.setWindowFlags(Qt::Dialog                 |
//                     Qt::CustomizeWindowHint    |
//                     Qt::WindowTitleHint        |
//                     Qt::WindowCloseButtonHint);

//    QFile file(":/stylesheet.qss");
//    file.open(QFile::ReadOnly);
//    QString styleSheet = QLatin1String(file.readAll());
//    w.setStyleSheet(styleSheet);

    w.show();
    return app.exec();
}
