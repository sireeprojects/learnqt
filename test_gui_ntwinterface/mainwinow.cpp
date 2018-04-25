#include "mainwinow.h"
#include "ui_mainwinow.h"
#include <QStringList>

mainWinow::mainWinow(QWidget *parent):QMainWindow(parent),ui(new Ui::mainWinow)
{
    ui->setupUi(this);
}

mainWinow::~mainWinow()
{
    delete ui;
}

void mainWinow::on_pushButton_clicked()
{
    foreach (QNetworkInterface interface, QNetworkInterface::allInterfaces())
    {
        foreach (QNetworkAddressEntry addr, interface.addressEntries())
        {
            ui->listWidget->addItem(addr.ip().toString());
        }
    }
}
