#include "lab4window.h"
#include <QInputDialog>
#include <QMessageBox>
#include "ui_lab4window.h"
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

Lab4Window::Lab4Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Lab4Window)
{
    ui->setupUi(this);
    this->setWindowTitle("Лабораторна робота №4"); // Заголовок українською

    // Ініціалізація генератора випадкових чисел
    srand(time(0));
}

Lab4Window::~Lab4Window()
{
    delete ui;
}

// Функція для красивого виведення масиву в рядок
QString arrayToString(const vector<double> &arr)
{
    QString list = "[ ";
    for (double num : arr) {
        list += QString::number(num, 'f', 1) + "; "; // 'f', 1 - один знак після коми
    }
    list += "]";
    return list;
}

void Lab4Window::on_btnRun_clicked()
{
    bool ok;
    // 1. Запитуємо розмір масиву (українською)
    int n = QInputDialog::getInt(this,
                                 "Введення даних",
                                 "Введіть розмір масиву (N):",
                                 10,
                                 2,
                                 100,
                                 1,
                                 &ok);

    if (!ok)
        return;

    // 2. Створення та заповнення масиву випадковими числами (від -50.0 до 50.0)
    vector<double> arr(n);
    for (int i = 0; i < n; ++i) {
        // Генеруємо дробові числа
        arr[i] = (rand() % 1000 - 500) / 10.0;
    }

    QString log = "--- ПОЧАТОК РОБОТИ ---\n";
    log += "Початковий масив:\n" + arrayToString(arr) + "\n\n";

    // --- ЗАВДАННЯ 1: Сума позитивних елементів ---
    double sumPositive = 0;
    for (double x : arr) {
        if (x > 0) {
            sumPositive += x;
        }
    }
    log += "1. Сума позитивних елементів: " + QString::number(sumPositive) + "\n";

    // --- ЗАВДАННЯ 2: Добуток між Макс і Мін за модулем ---
    int minModIdx = 0;
    int maxModIdx = 0;

    // Пошук індексів
    for (int i = 1; i < n; ++i) {
        if (abs(arr[i]) < abs(arr[minModIdx])) {
            minModIdx = i;
        }
        if (abs(arr[i]) > abs(arr[maxModIdx])) {
            maxModIdx = i;
        }
    }

    log += "Індекс мінімального за модулем: " + QString::number(minModIdx)
           + " (Значення: " + QString::number(arr[minModIdx]) + ")\n";
    log += "Індекс максимального за модулем: " + QString::number(maxModIdx)
           + " (Значення: " + QString::number(arr[maxModIdx]) + ")\n";

    // Визначаємо межі (хто лівіше, хто правіше)
    int start = std::min(minModIdx, maxModIdx);
    int end = std::max(minModIdx, maxModIdx);

    double product = 1.0;

    // Обчислення добутку
    if (end - start <= 1) {
        log += "2. Добуток: 0 (Немає елементів між min і max)\n";
    } else {
        for (int i = start + 1; i < end; ++i) {
            product *= arr[i];
        }
        log += "2. Добуток елементів між ними: " + QString::number(product) + "\n";
    }

    // --- ЗАВДАННЯ 3: Сортування за спаданням ---
    // Використовуємо лямбда-функцію для порівняння (a > b)
    std::sort(arr.begin(), arr.end(), [](double a, double b) { return a > b; });

    log += "\n3. Відсортований масив (за спаданням):\n" + arrayToString(arr);

    // Виведення у текстове поле
    ui->textEditLog->setText(log);
}
