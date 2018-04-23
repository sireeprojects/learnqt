#include "top.h"
#include "ui_top.h"
#include <QFile>

top::top(QWidget *parent):QMainWindow(parent),ui(new Ui::top)
{


    myfont.setFamily("Arial");
    myfont.setPointSize(10);
    myfont.setStyleStrategy(QFont::NoAntialias);
    ui->setupUi(this);
    ui->menuFile->setFont(myfont);
    ui->menuEdit->setFont(myfont);
    ui->menuHelp->setFont(myfont);
    ui->menuBar->setFont(myfont);

    QFile file(":/ss.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    ui->menuBar->setStyleSheet(styleSheet);

    ui->toolBar->setStyleSheet(styleSheet);
    setCentralWidget(ui->plainTextEdit);
}

top::~top()
{
    delete ui;
}
