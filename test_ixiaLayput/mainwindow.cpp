#include "mainwindow.h"
#include "ui_mainwindow.h"


mainWindow::mainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::mainWindow)
{
    ui->setupUi(this);

    QStringList cmb_type;
    cmb_type << "Inc Bytes"
             << "Inc Word"
             << "Dec Byte"
             << "Dec Word"
             << "Random"
             << "Repeating"
             << "Fixed";
    ui->combo_Type->addItems(cmb_type);

    QStringList cmb_data;
    cmb_data << "FF FF"
             << "00 00"
             << "AA AA"
             << "55 55"
             << "77 77"
             << "DD DD"
             << "FF 00 FF 00"
             << "FF FF FF FF"
             << "F0 F0";
    ui->combo_data->addItems(cmb_data);

    QStringList cmb_mode;
    cmb_mode << "Increment"
             << "Continuous Increment"
             << "Decrement"
             << "Continuous Decrement"
             << "Fixed"
             << "Random";
    ui->cmb_dest_mode->addItems(cmb_mode);
    ui->cmb_src_mode->addItems(cmb_mode);

}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_pushButton_2_clicked()
{
    QApplication::exit();
}
