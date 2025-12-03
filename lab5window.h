#ifndef LAB5WINDOW_H
#define LAB5WINDOW_H

#include <QWidget>

namespace Ui {
class Lab5window;
}

class Lab5window : public QWidget
{
    Q_OBJECT

public:
    explicit Lab5window(QWidget *parent = nullptr);
    ~Lab5window();

private slots:
    void on_btnConvert_clicked();

    void on_btnCheck_clicked();

private:
    Ui::Lab5window *ui;
};

#endif // LAB5WINDOW_H
