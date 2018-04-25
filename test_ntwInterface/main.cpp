#include <QCoreApplication>
#include <QDebug>
#include <QNetworkInterface>

#define dbg qDebug().noquote()

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

//    foreach (QNetworkInterface interface, QNetworkInterface::allInterfaces())
//    {
//        foreach (QHostAddress addr, interface.allAddresses())
//        {
//            if (~addr.isLoopback())
//            if (addr.protocol()==QAbstractSocket::IPv4Protocol)
//                dbg << interface.humanReadableName() << "          " << addr.toString();
////            dbg << QString("%1 : %2").arg(interface.humanReadableName(),-30).arg(addr.ip().toString());
//        }
//    }

    QList<QHostAddress> list = QNetworkInterface::allAddresses();
     for(int nIter=0; nIter<list.count(); nIter++)
     {
          if(!list[nIter].isLoopback())
              if (list[nIter].protocol() == QAbstractSocket::IPv4Protocol )
            dbg << list[nIter].toString();
      }

    return 0;
}
