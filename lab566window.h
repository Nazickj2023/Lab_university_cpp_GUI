#ifndef LAB5WINDOW_H
#define LAB5WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Lab5Window; }
QT_END_NAMESPACE

class Lab5Window : public QWidget
{
    Q_OBJECT

public:
    Lab5Window(QWidget *parent = nullptr);
    ~Lab5Window();

private slots:

    void on_btnConvert_clicked();
    void on_btnCheck_clicked();

private:

    Ui::Lab5Window *ui;
};
#endif
