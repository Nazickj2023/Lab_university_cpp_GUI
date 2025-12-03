/********************************************************************************
** Form generated from reading UI file 'lab1window.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB1WINDOW_H
#define UI_LAB1WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab1Window
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinX;
    QLabel *label_3;
    QSpinBox *spinY;
    QLabel *label_4;
    QDoubleSpinBox *spinZ;
    QPushButton *btnCalc;
    QTextEdit *textEditLog;

    void setupUi(QWidget *Lab1Window)
    {
        if (Lab1Window->objectName().isEmpty())
            Lab1Window->setObjectName("Lab1Window");
        Lab1Window->resize(400, 300);
        Lab1Window->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #212121;\n"
"    color: #eeeeee;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"QGroupBox {\n"
"    border: 1px solid #757575;\n"
"    border-radius: 5px;\n"
"    margin-top: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 5px;\n"
"    color: #ff9800; /* \320\237\320\276\320\274\320\260\321\200\320\260\320\275\321\207\320\265\320\262\320\270\320\271 \320\260\320\272\321\206\320\265\320\275\321\202 */\n"
"}\n"
"QPushButton {\n"
"    background-color: #ff5722; /* \320\257\321\201\320\272\321\200\320\260\320\262\320\276-\320\276\321\200\320\260\320\275\320\266\320\265\320\262\320\270\320\271 */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover { background-color: #e64a19; }\n"
"QDoubleSpinBox, QSpinBox, QTextEdit {\n"
"    background-color: #424242;\n"
"    color: white;\n"
"    border: 1px solid #616161;"
                        "\n"
"    padding: 5px;\n"
"}"));
        label = new QLabel(Lab1Window);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 30, 171, 16));
        groupBox = new QGroupBox(Lab1Window);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 70, 121, 180));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        spinX = new QDoubleSpinBox(groupBox);
        spinX->setObjectName("spinX");
        spinX->setMinimum(-1000.000000000000000);
        spinX->setMaximum(1000.000000000000000);
        spinX->setSingleStep(0.010000000000000);
        spinX->setValue(3.140000000000000);

        verticalLayout->addWidget(spinX);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        spinY = new QSpinBox(groupBox);
        spinY->setObjectName("spinY");
        spinY->setMinimum(-1000);
        spinY->setMaximum(1000);
        spinY->setValue(-27);

        verticalLayout->addWidget(spinY);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        spinZ = new QDoubleSpinBox(groupBox);
        spinZ->setObjectName("spinZ");
        spinZ->setMinimum(-1000.000000000000000);
        spinZ->setMaximum(1000.000000000000000);
        spinZ->setSingleStep(0.100000000000000);
        spinZ->setValue(-23.199999999999999);

        verticalLayout->addWidget(spinZ);

        btnCalc = new QPushButton(Lab1Window);
        btnCalc->setObjectName("btnCalc");
        btnCalc->setGeometry(QRect(74, 260, 241, 31));
        textEditLog = new QTextEdit(Lab1Window);
        textEditLog->setObjectName("textEditLog");
        textEditLog->setGeometry(QRect(143, 80, 201, 171));

        retranslateUi(Lab1Window);

        QMetaObject::connectSlotsByName(Lab1Window);
    } // setupUi

    void retranslateUi(QWidget *Lab1Window)
    {
        Lab1Window->setWindowTitle(QCoreApplication::translate("Lab1Window", "Form", nullptr));
        label->setText(QCoreApplication::translate("Lab1Window", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \342\204\2262", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Lab1Window", "Input Data", nullptr));
        label_2->setText(QCoreApplication::translate("Lab1Window", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("Lab1Window", "Y:", nullptr));
        label_4->setText(QCoreApplication::translate("Lab1Window", "Z:", nullptr));
        btnCalc->setText(QCoreApplication::translate("Lab1Window", "\320\236\320\261\321\207\320\270\321\201\320\273\320\270\321\202\320\270 \321\204\320\276\321\200\320\274\321\203\320\273\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab1Window: public Ui_Lab1Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1WINDOW_H
