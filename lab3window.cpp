#include "lab3window.h"
#include "ui_lab3window.h"
#include <QMessageBox>
#include <QInputDialog>

Lab3Window::Lab3Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lab3Window)
{
    ui->setupUi(this);


    this->setWindowTitle("Лабораторна робота №3");
}

Lab3Window::~Lab3Window()
{
    delete ui;
}


void Lab3Window::on_pushButton_clicked()
{
    bool ok;

    int n = QInputDialog::getInt(this, "Завдання 2", "Введіть ціле число:", 0, 0, 2147483647, 1, &ok);

    if (ok) {
        int original = n;
        int reversed = 0;


        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }


        if (original == reversed) {
            QMessageBox::information(this, "Результат",
                                     QString("Число %1 Є паліндромом.").arg(original));
        } else {
            QMessageBox::information(this, "Результат",
                                     QString("Число %1 НЕ Є паліндромом.\nПеревернуте значення: %2").arg(original).arg(reversed));
        }
    }
}

// --- ДОПОМІЖНІ ФУНКЦІЇ ДЛЯ ЗАВДАННЯ 16 ---

// Функція для знаходження НСД (Найбільший спільний дільник)
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

// Функція для знаходження НСК (Найменше спільне кратне)
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}


void Lab3Window::on_pushButton_2_clicked()
{
    bool ok;

    int n = QInputDialog::getInt(this, "Завдання 16", "Введіть число n (верхня межа):", 10, 1, 10000, 1, &ok);

    if (ok) {
        long long totalSum = 0;


        for (int i = 1; i <= n; ++i) {

            long long currentLCM = lcm(i, n);
            totalSum += currentLCM;
        }


        QMessageBox::information(this, "Результат",
                                 QString("Сума всіх НСК (Найменших Спільних Кратних)\n"
                                         "для чисел від 1 до %1 разом з числом %1 дорівнює:\n\n%2")
                                     .arg(n).arg(totalSum));
    }
}
