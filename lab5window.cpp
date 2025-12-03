#include "lab5window.h"
#include "ui_lab5window.h"
#include <vector>
#include <string>
#include <algorithm> // Для reverse

// --- ФУНКЦІЯ 1: Конвертація Арабських -> Римські ---
QString arabicToRoman(int num) {
    if (num <= 0 || num > 3999) return "Error";

    // Словник відповідностей (важливо йти від більшого до меншого)
    const struct { int val; const char* rom; } map[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
        {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
        {1, "I"}
    };

    std::string result = "";
    // Проходимо по словнику
    for (const auto& item : map) {
        // Поки наше число більше або дорівнює значенню зі словника
        while (num >= item.val) {
            result += item.rom; // Додаємо римську літеру
            num -= item.val;    // Віднімаємо значення
        }
    }
    return QString::fromStdString(result);
}

// --- ФУНКЦІЯ 2: Перевірка рядка на паліндром ---
bool checkPalindromeString(QString text) {
    // 1. Прибираємо зайве: пробіли і переводимо в нижній регістр
    QString cleanText;
    for (QChar c : text) {
        if (c.isLetterOrNumber()) {
            cleanText.append(c.toLower());
        }
    }

    // 2. Створюємо перевернуту копію
    QString reversedText = cleanText;
    std::reverse(reversedText.begin(), reversedText.end());

    // 3. Порівнюємо
    return cleanText == reversedText;
}

Lab5window::Lab5window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lab5window)
{
    ui->setupUi(this);
    this->setWindowTitle("Лабораторна робота №5");
}

Lab5window::~Lab5window()
{
    delete ui;
}

// Кнопка конвертації (Task 2)
void Lab5window::on_btnConvert_clicked() // Перевір назву кнопки (btnConvert)
{
    int val = ui->spinNum->value(); // Отримуємо число
    QString roman = arabicToRoman(val); // Викликаємо НАШУ функцію

    ui->lblRomanResult->setText("Roman Numeral: " + roman);
}

// Кнопка перевірки паліндрома (Task 9)

void Lab5window::on_btnCheck_clicked()
{
    QString text = ui->txtPalindrome->text(); // Отримуємо текст

    if (text.isEmpty()) {
        ui->lblPalinResult->setText("Result: Please enter text.");
        return;
    }

    bool isPalin = checkPalindromeString(text); // Викликаємо НАШУ функцію

    if (isPalin) {
        ui->lblPalinResult->setText("Result: YES, it is a palindrome!");
    } else {
        ui->lblPalinResult->setText("Result: NO, it is not.");
    }

}

