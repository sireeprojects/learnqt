#include <QCoreApplication>
#include <QDebug>

#define dbg qDebug().noquote()

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    dbg << "Testing QString";
    return 0;
}
