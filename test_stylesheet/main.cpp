#include "top.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    top w;
    QFont myfont;
    myfont.setFamily("Arial");
    myfont.setPointSize(10);
    myfont.setStyleStrategy(QFont::NoAntialias);
    w.setFont(myfont);
//    a.setStyle("Windows");
    w.show();

    return a.exec();
}
