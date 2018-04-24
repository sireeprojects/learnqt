#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QTcpSocket>
#include <QObject>
#include <QDebug>

class SocketTest : public QObject
{
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = nullptr);
    void connect();

signals:

public slots:
private:
    QTcpSocket *socket;
};

#endif // SOCKETTEST_H
