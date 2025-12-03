/********************************************************************************
** Form generated from reading UI file 'lab5window.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB5WINDOW_H
#define UI_LAB5WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab5window
{
public:
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *txtPalindrome;
    QPushButton *btnCheck;
    QLabel *lblPalinResult;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *spinNum;
    QPushButton *btnConvert;
    QLabel *lblRomanResult;
    QLabel *label;

    void setupUi(QWidget *Lab5window)
    {
        if (Lab5window->objectName().isEmpty())
            Lab5window->setObjectName("Lab5window");
        Lab5window->resize(400, 300);
        Lab5window->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #3e2723; /* \320\242\320\265\320\274\320\275\320\276-\320\272\320\276\321\200\320\270\321\207\320\275\320\265\320\262\320\270\320\271 */\n"
"    color: #ffecb3;            /* \320\241\320\262\321\226\321\202\320\273\320\276-\320\267\320\276\320\273\320\276\321\202\320\270\320\271 */\n"
"    font-family: \"Garamond\", serif; /* \320\250\321\200\320\270\321\204\321\202 \320\267 \320\267\320\260\321\201\321\226\321\207\320\272\320\260\320\274\320\270 (\321\201\321\205\320\276\320\266\320\270\320\271 \320\275\320\260 \321\201\321\202\320\260\321\200\320\270\320\275\320\275\320\270\320\271) */\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border: 2px solid #d7ccc8;\n"
"    border-radius: 5px;\n"
"    margin-top: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 5px;\n"
"    color: #ffca28; /* \320\227\320\276\320\273\320\276\321\202\320\270\320\271 \320\267\320\260\320\263\320"
                        "\276\320\273\320\276\320\262\320\276\320\272 */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #ff6f00; /* \320\257\320\275\321\202\320\260\321\200\320\275\320\270\320\271 */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    border: 1px solid #e65100;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ffa000;\n"
"}\n"
"\n"
"QSpinBox, QLineEdit {\n"
"    background-color: #5d4037;\n"
"    color: white;\n"
"    border: 1px solid #8d6e63;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLabel#lblRomanResult, QLabel#lblPalinResult {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: #69f0ae; /* \320\227\320\265\320\273\320\265\320\275\320\270\320\271 \320\264\320\273\321\217 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\203 */\n"
"}"));
        groupBox_2 = new QGroupBox(Lab5window);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(191, 110, 201, 150));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        txtPalindrome = new QLineEdit(groupBox_2);
        txtPalindrome->setObjectName("txtPalindrome");

        verticalLayout->addWidget(txtPalindrome);

        btnCheck = new QPushButton(groupBox_2);
        btnCheck->setObjectName("btnCheck");

        verticalLayout->addWidget(btnCheck);

        lblPalinResult = new QLabel(groupBox_2);
        lblPalinResult->setObjectName("lblPalinResult");

        verticalLayout->addWidget(lblPalinResult);


        verticalLayout_4->addLayout(verticalLayout);

        groupBox = new QGroupBox(Lab5window);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 110, 191, 150));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        spinNum = new QSpinBox(groupBox);
        spinNum->setObjectName("spinNum");
        spinNum->setMinimum(1);
        spinNum->setMaximum(3999);

        verticalLayout_2->addWidget(spinNum);

        btnConvert = new QPushButton(groupBox);
        btnConvert->setObjectName("btnConvert");

        verticalLayout_2->addWidget(btnConvert);

        lblRomanResult = new QLabel(groupBox);
        lblRomanResult->setObjectName("lblRomanResult");

        verticalLayout_2->addWidget(lblRomanResult);


        verticalLayout_3->addLayout(verticalLayout_2);

        label = new QLabel(Lab5window);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 40, 171, 16));

        retranslateUi(Lab5window);

        QMetaObject::connectSlotsByName(Lab5window);
    } // setupUi

    void retranslateUi(QWidget *Lab5window)
    {
        Lab5window->setWindowTitle(QCoreApplication::translate("Lab5window", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Lab5window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 9: \320\237\320\260\320\273\321\226\320\275\320\264\321\200\320\276\320\274 \321\200\321\217\320\264\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Lab5window", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        btnCheck->setText(QCoreApplication::translate("Lab5window", "\320\237\320\265\321\200\320\265\320\262\321\226\321\200\321\202\320\265", nullptr));
        lblPalinResult->setText(QCoreApplication::translate("Lab5window", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Lab5window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 2: \320\267 \320\260\321\200\320\260\320\261\321\201\321\214\320\272\320\276\321\227 \320\275\320\260 \321\200\320\270\320\274\321\201\321\214\320\272\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("Lab5window", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\275\320\276\320\274\320\265\321\200:", nullptr));
        btnConvert->setText(QCoreApplication::translate("Lab5window", "\320\272\320\276\320\275\320\262\320\265\321\200\321\202\321\203\320\262\320\260\321\202\320\270", nullptr));
        lblRomanResult->setText(QCoreApplication::translate("Lab5window", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label->setText(QCoreApplication::translate("Lab5window", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \342\204\2265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab5window: public Ui_Lab5window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB5WINDOW_H
