#include <QCoreApplication>
#include <QSysInfo>
#include <QDebug>

#define dbg qDebug().noquote()

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSysInfo si;
    QString str;
    int siz=-25;
    str = QString ("%1").arg("Host Name",siz)               + ":" + QString(" %1").arg(si.machineHostName()        ,-10); dbg << str;
    str = QString ("%1").arg("Build CPU Architecture",siz)  + ":" + QString(" %1").arg(si.buildCpuArchitecture()   ,-10); dbg << str;
    str = QString ("%1").arg("Kernel Type",siz)             + ":" + QString(" %1").arg(si.kernelType()             ,-10); dbg << str;
    str = QString ("%1").arg("Kernel Version",siz)          + ":" + QString(" %1").arg(si.kernelVersion()          ,-10); dbg << str;
    str = QString ("%1").arg("Product Name",siz)            + ":" + QString(" %1").arg(si.prettyProductName()      ,-10); dbg << str;
    str = QString ("%1").arg("Product Type",siz)            + ":" + QString(" %1").arg(si.productType()            ,-10); dbg << str;
    str = QString ("%1").arg("Produt Version",siz)          + ":" + QString(" %1").arg(si.productVersion()         ,-10); dbg << str;
    str = QString ("%1").arg("Windows Version",siz)         + ":" + QString(" %1").arg(si.windowsVersion()         ,-10); dbg << str;
    str = QString ("%1").arg("Build ABI",siz)               + ":" + QString(" %1").arg(si.buildAbi()               ,-10); dbg << str;
    str = QString ("%1").arg("CPU Architecture",siz)        + ":" + QString(" %1").arg(si.currentCpuArchitecture() ,-10); dbg << str;
    int num=10;
    dbg << QString ("%1").arg(num,20,16,QLatin1Char( '0' ));
    return 0;
}
