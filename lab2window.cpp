#include "lab2window.h"
#include "ui_lab2window.h"
#include <QMessageBox>
#include <QInputDialog>

Lab2Window::Lab2Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lab2Window)
{
    ui->setupUi(this);


    this->setWindowTitle("Laboratory Work No. 2");
}

Lab2Window::~Lab2Window()
{
    delete ui;
}

void Lab2Window::on_pushButton_clicked()
{
    {
        bool ok;
        double number = QInputDialog::getDouble(this, "Task 2", "Введіть число:", 0, -10000, 10000, 2, &ok);

        if (ok) {
            QString result;
            if (number > 0) result = "Число додатне (Positive).";
            else if (number < 0) result = "Число від'ємне (Negative).";
            else result = "Це нуль (Zero).";

            QMessageBox::information(this, "Результат", result);
        }
    }


}


void Lab2Window::on_pushButton_3_clicked()
{
    {
        QStringList items;
        items << "Цельсій -> Фаренгейт" << "Фаренгейт -> Цельсій";
        bool ok;
        QString item = QInputDialog::getItem(this, "Task 15", "Виберіть тип:", items, 0, false, &ok);

        if (ok && !item.isEmpty()) {
            double val = QInputDialog::getDouble(this, "Task 15", "Температура:", 0, -500, 500, 2, &ok);
            if (ok) {
                double res;
                if (item == "Цельсій -> Фаренгейт")
                    res = (val * 9.0 / 5.0) + 32;
                else
                    res = (val - 32) * 5.0 / 9.0;

                QMessageBox::information(this, "Результат", QString::number(res));
            }
        }
    }


}


void Lab2Window::on_pushButton_2_clicked()
{
    {
        bool ok;
        int h = QInputDialog::getInt(this, "Task 20", "Котра година (0-23):", 12, 0, 23, 1, &ok);

        if (ok) {
            QString msg;
            if (h < 6) msg = "Зараз ніч (Night).";
            else if (h < 12) msg = "Зараз ранок (Morning).";
            else if (h < 18) msg = "Зараз день (Day).";
            else msg = "Зараз вечір (Evening).";

            QMessageBox::information(this, "Результат", msg);
        }
    }


}

