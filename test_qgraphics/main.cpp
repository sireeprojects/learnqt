#include "top.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Windows");

    top w;
    w.setWindowFlags(Qt::Dialog |
                     Qt::CustomizeWindowHint |
                     Qt::WindowCloseButtonHint |
                     Qt::WindowTitleHint);
    w.show();
    return a.exec();
}
