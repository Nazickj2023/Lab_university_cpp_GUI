#include "mainwindow.h"
#include "ui_mainwindow.h"

// ПІДКЛЮЧАЄМО НАШІ ЛАБИ ТУТ
#include "lab1window.h"
#include "lab2window.h"
#include "lab3window.h"
#include "lab4window.h"
#include "lab5window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Lab1Window *lab1 = new Lab1Window();
    lab1->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    Lab2Window *lab2 = new Lab2Window();
    lab2->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    Lab3Window *lab3 = new Lab3Window();
    lab3->show();

}


void MainWindow::on_pushButton_4_clicked()
{
    Lab4Window *lab4 = new Lab4Window();
    lab4->show();
}
void MainWindow::on_pushButton_5_clicked() // Або як там називається кнопка
{
    Lab5window *lab5 = new Lab5window();
    lab5->show();
}
