#ifndef TOP_H
#define TOP_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QTreeWidgetItem>

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
//    void on_pushButton_clicked();

private:
    Ui::top *ui;
    QFont myfont;
    void addTreeRoot(QString name, QString description);
    void addTreeChild(QTreeWidgetItem *parent, QString name, QString description);
};

#endif // TOP_H
