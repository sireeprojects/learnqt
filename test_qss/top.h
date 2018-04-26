#ifndef TOP_H
#define TOP_H

#include <QMainWindow>

namespace Ui {
class top;
}

class top : public QMainWindow
{
    Q_OBJECT

public:
    explicit top(QWidget *parent = 0);
    ~top();

private:
    Ui::top *ui;
};

#endif // TOP_H
