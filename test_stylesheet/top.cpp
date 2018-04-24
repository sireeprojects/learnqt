#include "top.h"
#include "ui_top.h"
#include <QFile>

top::top(QWidget *parent):QMainWindow(parent),ui(new Ui::top)
{
    ui->setupUi(this);

    myfont.setFamily("Segoe UI");
    myfont.setPointSize(9);

    this->setFont(myfont);
    ui->menuFile->setFont(myfont);
    ui->menuEdit->setFont(myfont);
    ui->menuHelp->setFont(myfont);
    ui->menuBar->setFont(myfont);

    QFile file(":/ss.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    this->setStyleSheet(styleSheet);

}

top::~top()
{
    delete ui;
}

//void top::on_pushButton_clicked()
//{
//    addTreeRoot("A", "Root_first");
//    addTreeRoot("B", "Root_second");
//    addTreeRoot("C", "Root_third");
//}

//void top::addTreeRoot(QString name, QString description)
//{
//    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget);
//    treeItem->setText(0, name);
//    treeItem->setText(1, description);
//    addTreeChild(treeItem, name + "A", "Child_first");
//    addTreeChild(treeItem, name + "B", "Child_second");
//}

//void top::addTreeChild(QTreeWidgetItem *parent, QString name, QString description)
//{
//    QTreeWidgetItem *treeItem = new QTreeWidgetItem();
//    treeItem->setText(0, name);
//    treeItem->setText(1, description);
//    parent->addChild(treeItem);
//}
