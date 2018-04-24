#include "sockettest.h"

SocketTest::SocketTest(QObject *parent) : QObject(parent)
{
}

void SocketTest::run()
{
    socket = new QTcpSocket (this);
    socket->connectToHost("bogotobogo.com", 80);
    if (socket->waitForConnected())
    {
        dbg << "Connected";
        socket->write("hello server\r\n");
        socket->waitForBytesWritten();
        socket->waitForReadyRead();
        dbg << "Reading: " << socket->bytesAvailable();
        dbg << socket->readAll();
        socket->close();
    }
    else
    {
        dbg << "Not Connected";
    }
}
