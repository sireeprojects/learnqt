#include "top.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("Windows");

    QFont myfont;
    myfont.setFamily("Segoe UI");
    myfont.setPointSize(10);

    top mainWindow;
    mainWindow.setFont(myfont);
    mainWindow.show();

    return app.exec();
}
