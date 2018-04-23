#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainWindow)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_pushButton_clicked()
{
    QApplication::exit();
}

void mainWindow::on_pushButton_4_clicked()
{
    ui->plainTextEdit->appendPlainText("> simple text");
}
