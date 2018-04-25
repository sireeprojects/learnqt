#include <QCoreApplication>
#include <QDebug>
#include <QNetworkInterface>

#define dbg qDebug().noquote()

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QList<QNetworkInterface> interface = QNetworkInterface::allInterfaces();

    for  (int i=0; i<interface.size(); i++)
    {
        dbg << interface[i].humanReadableName();
    }

    return 0;
}
