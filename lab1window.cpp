#include "lab1window.h"
#include "ui_lab1window.h"
#include <cmath> // Для математичних функцій (якщо знадобляться)

Lab1Window::Lab1Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lab1Window)
{
    ui->setupUi(this);
    this->setWindowTitle("Laboratory Work No. 1");

    // Встановлюємо значення за замовчуванням для Варіанту 2
    ui->spinX->setValue(3.14);
    ui->spinY->setValue(-27);
    ui->spinZ->setValue(-23.2);
}

Lab1Window::~Lab1Window()
{
    delete ui;
}


void Lab1Window::on_btnCalc_clicked()
{
    // 1. Отримання вхідних даних
    double x = ui->spinX->value();
    int y = ui->spinY->value(); // Беремо як int для операції модуля
    double z = ui->spinZ->value();

    // 2. Розрахунок формули за частинами (щоб було зрозуміло)
    // Формула: 1.2x - 1.3x/y + (1.1%y + 1.2z/x - 12)/0.8

    // Частина А: 1.2 * x
    double partA = 1.2 * x;

    // Частина B: 1.3 * x / y
    // Увага: перевірка на ділення на нуль
    if (y == 0) {
        ui->textEditLog->setText("Error: Division by zero (Y cannot be 0).");
        return;
    }
    double partB = (1.3 * x) / y;

    // Частина C (Чисельник дробу): 1.1%y + 1.2z/x - 12
    // ПРОБЛЕМА: 1.1 - це double. Оператор % працює тільки з int.
    // РІШЕННЯ: Приводимо 1.1 до int (отримаємо 1).
    int modPart = (int)1.1 % y;

    // 1.2 * z / x
    if (x == 0) {
        ui->textEditLog->setText("Error: Division by zero (X cannot be 0).");
        return;
    }
    double divPart = (1.2 * z) / x;

    double numerator = modPart + divPart - 12.0;

    // Частина D (Весь дріб): Чисельник / 0.8
    double fraction = numerator / 0.8;

    // Фінальний результат
    double result = partA - partB + fraction;

    // 3. Формування звіту у вікні (Логування)
    QString report = "--- Calculation Report ---\n";
    report += "Inputs: X=" + QString::number(x) + ", Y=" + QString::number(y) + ", Z=" + QString::number(z) + "\n\n";

    report += "Step 1 (1.2 * x): " + QString::number(partA) + "\n";
    report += "Step 2 (1.3 * x / y): " + QString::number(partB) + "\n";
    report += "Step 3 (Modulus 1.1 % y): " + QString::number(modPart) + " (Casted 1.1 to int)\n";
    report += "Step 4 (1.2 * z / x): " + QString::number(divPart) + "\n";
    report += "Step 5 (Numerator): " + QString::number(numerator) + "\n";
    report += "Step 6 (Fraction / 0.8): " + QString::number(fraction) + "\n\n";

    report += "FINAL RESULT: " + QString::number(result);

    ui->textEditLog->setText(report);

}

