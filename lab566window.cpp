#include "lab566window.h"
#include "ui_lab566window.h"

lab5window::Lab5window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lab5window)
{
    ui->setupUi(this);
}

Lab5window::~Lab5window()
{
    delete ui;
}
