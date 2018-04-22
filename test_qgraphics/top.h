#ifndef TOP_H
#define TOP_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QGraphicsItem>

namespace Ui {
class top;
}

class top : public QMainWindow
{
    Q_OBJECT

public:
    explicit top(QWidget *parent = 0);
    ~top();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::top *ui;
    QGraphicsScene *scene;
};

#endif // TOP_H
