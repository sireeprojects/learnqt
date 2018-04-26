#include "top.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    top mainWindow;
    QFile file(":/stylesheet.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    mainWindow.setStyleSheet(styleSheet);
    mainWindow.show();

    return app.exec();
}
