#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QTcpSocket>
#include <QObject>
#include <QDebug>

#define dbg qDebug().noquote()

class SocketTest : public QObject
{
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = nullptr);
    void run();

signals:

public slots:
private:
    QTcpSocket *socket;
};

#endif // SOCKETTEST_H
