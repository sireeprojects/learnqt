#include <QCoreApplication>
#include <QDebug>

#define dbg qDebug().noquote()

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString str;
    quint32 num = 100;
    dbg << num;
    str = QString ("%1").arg("The number is :",-20) + QString("%1").arg(num,10);
    dbg << str;
    return 0;
}
