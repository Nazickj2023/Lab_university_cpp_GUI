#ifndef LAB4WINDOW_H
#define LAB4WINDOW_H

#include <QWidget>

namespace Ui {
class Lab4Window;
}

class Lab4Window : public QWidget
{
    Q_OBJECT

public:
    explicit Lab4Window(QWidget *parent = nullptr);
    ~Lab4Window();

private slots:
    void on_btnRun_clicked();

private:
    Ui::Lab4Window *ui;
};

#endif // LAB4WINDOW_H
