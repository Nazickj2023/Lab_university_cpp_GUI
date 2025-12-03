#include "mainwindow.h" // Підключаємо наше нове меню
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w; // Створюємо головне меню
    w.show();     // Показуємо його

    return a.exec();
}
