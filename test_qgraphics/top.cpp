#include "top.h"
#include "ui_top.h"

top::top(QWidget *parent):QMainWindow(parent),ui(new Ui::top)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(QColor(40,42,54));
    ui->graphicsView->setScene(scene);
}

top::~top()
{
    delete ui;
}

void top::on_pushButton_2_clicked()
{
    QApplication::exit();
}
