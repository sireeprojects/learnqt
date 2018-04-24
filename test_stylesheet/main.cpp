#include "top.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("Fusion");

    QFont myfont;
    myfont.setFamily("Segoe UI");
    myfont.setPointSize(9);

    top mainWindow;
    mainWindow.setFont(myfont);
    mainWindow.show();

    return app.exec();
}
