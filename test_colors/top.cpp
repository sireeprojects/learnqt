#include "top.h"
#include "ui_top.h"
#include <QPalette>

top::top(QWidget *parent):QMainWindow(parent),ui(new Ui::top)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);

    QPalette pal;
    QColor bgcolor;
    bgcolor.setRgb(40,42,54);
    pal.setColor(QPalette::Base, bgcolor);
    pal.setColor(QPalette::Text, Qt::white);
    ui->plainTextEdit->setPalette(pal);
}

top::~top()
{
    delete ui;
}
