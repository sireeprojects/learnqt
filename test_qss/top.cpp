#include "top.h"
#include "ui_top.h"

top::top(QWidget *parent):QMainWindow(parent),ui(new Ui::top)
{
    ui->setupUi(this);
}

top::~top()
{
    delete ui;
}
