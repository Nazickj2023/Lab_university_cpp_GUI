#ifndef LAB1WINDOW_H
#define LAB1WINDOW_H

#include <QWidget>

namespace Ui {
class Lab1Window;
}

class Lab1Window : public QWidget
{
    Q_OBJECT

public:
    explicit Lab1Window(QWidget *parent = nullptr);
    ~Lab1Window();

private slots:
    void on_btnCalc_clicked();

private:
    Ui::Lab1Window *ui;
};

#endif // LAB1WINDOW_H
