#include "top.h"
#include "ui_top.h"

top::top(QWidget *parent):QMainWindow(parent),ui(new Ui::top)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(QColor(40,42,54));
    scene->setSceneRect(0,0,ui->graphicsView->width(),ui->graphicsView->height());
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing,false);
    qDebug() << "Width : " << ui->graphicsView->width();
    qDebug() << "Height : " << ui->graphicsView->height();
}

top::~top()
{
    delete ui;
}

void top::on_pushButton_2_clicked()
{
    QApplication::exit();
}

void top::on_pushButton_clicked()
{
    QFont f;
    txt = new QGraphicsSimpleTextItem();
    f.setFamily("Arial");
    f.setPointSize(20);
    f.setStyleStrategy(QFont::NoAntialias );
    f.setStyleStrategy(QFont::NoSubpixelAntialias);
    f.setWeight(0);
    f.setFixedPitch(true);
    txt->setText("Hello");
    txt->setFont(f);
    txt->setFlag(QGraphicsItem::ItemIsMovable);
    txt->setFlag(QGraphicsItem::ItemIsSelectable);
//    txt->setPen(QPen(QColor(Qt::white)));
    txt->setBrush(QBrush(QColor(Qt::white)));
    scene->addItem(txt);
}
