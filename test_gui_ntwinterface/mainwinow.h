#ifndef MAINWINOW_H
#define MAINWINOW_H

#include <QMainWindow>
#include <QNetworkInterface>

namespace Ui {
class mainWinow;
}

class mainWinow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWinow(QWidget *parent = 0);
    ~mainWinow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mainWinow *ui;
    QNetworkInterface intf;
};

#endif // MAINWINOW_H
