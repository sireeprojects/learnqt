#include <QCoreApplication>
#include <QTcpSocket>
#include <QObject>
#include <QDebug>
#include "sockettest.h"

#define dbg qDebug().noquote()

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    dbg << "TCP Socket Exercise";


    return 0;
}
