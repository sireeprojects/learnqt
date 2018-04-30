#include "top.h"
#include "ui_top.h"

top::top(QWidget *parent) : QMainWindow(parent), ui(new Ui::top)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    addTreeRoot("A", "Root_first");
    addTreeRoot("B", "Root_second");
    addTreeRoot("C", "Root_third");

    // adding actions programmatically
    // QAction *myAction;
    // myAction = new QAction(tr("&My Action"), this);
    // myAction->setIcon(QIcon(":/aCool.png"));
    // myAction->setShortcut(tr("Ctrl+M"));
    // myAction->setStatusTip(tr("My action demo"));
    // connect(myAction, SIGNAL(triggered()), this, SLOT(mySlot()));

    // adding actions built from action editor
    ui->treeWidget->addAction(ui->actionContextMenutest);
}

top::~top()
{
    delete ui;
}


void top::addTreeRoot(QString name, QString description)
{
    // QTreeWidgetItem(QTreeWidget * parent, int type = Type)
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget);

    // QTreeWidgetItem::setText(int column, const QString & text)
    treeItem->setText(0, name);
    treeItem->setText(1, description);
    addTreeChild(treeItem, name + "A", "Child_first");
    addTreeChild(treeItem, name + "B", "Child_second");
}

void top::addTreeChild(QTreeWidgetItem *parent,
                  QString name, QString description)
{
    // QTreeWidgetItem(QTreeWidget * parent, int type = Type)
    QTreeWidgetItem *treeItem = new QTreeWidgetItem();

    // QTreeWidgetItem::setText(int column, const QString & text)
    treeItem->setText(0, name);
    treeItem->setText(1, description);

    // QTreeWidgetItem::addChild(QTreeWidgetItem * child)
    parent->addChild(treeItem);
}

void top::on_actionContextMenutest_triggered()
{

}
