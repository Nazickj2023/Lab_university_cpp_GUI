#ifndef LAB3WINDOW_H
#define LAB3WINDOW_H

#include <QWidget>

namespace Ui {
class Lab3Window;
}

class Lab3Window : public QWidget
{
    Q_OBJECT

public:
    explicit Lab3Window(QWidget *parent = nullptr);
    ~Lab3Window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Lab3Window *ui;
};

#endif // LAB3WINDOW_H
