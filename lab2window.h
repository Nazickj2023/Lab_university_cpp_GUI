#ifndef LAB2WINDOW_H
#define LAB2WINDOW_H

#include <QWidget>

namespace Ui {
class Lab2Window;
}

class Lab2Window : public QWidget
{
    Q_OBJECT

public:
    explicit Lab2Window(QWidget *parent = nullptr);
    ~Lab2Window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Lab2Window *ui;
};

#endif // LAB2WINDOW_H
