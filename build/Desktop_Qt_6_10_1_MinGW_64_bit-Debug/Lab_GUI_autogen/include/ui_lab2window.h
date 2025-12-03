/********************************************************************************
** Form generated from reading UI file 'lab2window.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB2WINDOW_H
#define UI_LAB2WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab2Window
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Lab2Window)
    {
        if (Lab2Window->objectName().isEmpty())
            Lab2Window->setObjectName("Lab2Window");
        Lab2Window->resize(401, 305);
        Lab2Window->setStyleSheet(QString::fromUtf8("/* --- \320\227\320\220\320\223\320\220\320\233\320\254\320\235\320\230\320\231 \320\244\320\236\320\235 \320\222\320\206\320\232\320\235\320\220 --- */\n"
"QWidget {\n"
"    background-color: #2b2b2b; /* \320\242\320\265\320\274\320\275\320\276-\321\201\321\226\321\200\320\270\320\271 \321\204\320\276\320\275 */\n"
"    color: white;              /* \320\221\321\226\320\273\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"/* --- \320\241\320\242\320\230\320\233\320\254 \320\227\320\220\320\223\320\236\320\233\320\236\320\222\320\232\320\220 (Label) --- */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #4fc3f7; /* \320\241\320\262\321\226\321\202\320\273\320\276-\320\261\320\273\320\260\320\272\320\270\321\202\320\275\320\270\320\271 \320\272\320\276\320\273\321\226\321\200 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\260 */\n"
"    padding: 10px;\n"
"    border-bottom: 2px solid #4"
                        "fc3f7; /* \320\233\321\226\320\275\321\226\321\217 \320\277\321\226\320\264 \321\202\320\265\320\272\321\201\321\202\320\276\320\274 */\n"
"    margin-bottom: 20px;\n"
"}\n"
"\n"
"/* --- \320\241\320\242\320\230\320\233\320\254 \320\232\320\235\320\236\320\237\320\236\320\232 --- */\n"
"QPushButton {\n"
"    background-color: #1e88e5; /* \320\241\320\270\320\275\321\226\320\271 \320\272\320\276\320\273\321\226\321\200 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 8px;       /* \320\227\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\321\226 \320\272\321\203\321\202\320\270 */\n"
"    padding: 12px;            /* \320\222\321\226\320\264\321\201\321\202\321\203\320\277\320\270 \320\262\321\201\320\265\321\200\320\265\320\264\320\270\320\275\321\226 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 1px solid #1565c0;\n"
"    min-width: 200px;         /* \320\234\321\226"
                        "\320\275\321\226\320\274\320\260\320\273\321\214\320\275\320\260 \321\210\320\270\321\200\320\270\320\275\320\260 */\n"
"}\n"
"\n"
"/* --- \320\232\320\236\320\233\320\230 \320\235\320\220\320\222\320\236\320\224\320\230\320\250 \320\234\320\230\320\250\320\232\320\236\320\256 --- */\n"
"QPushButton:hover {\n"
"    background-color: #42a5f5; /* \320\241\321\202\320\260\321\224 \321\201\320\262\321\226\321\202\320\273\321\226\321\210\320\276\321\216 */\n"
"    border: 1px solid #64b5f6;\n"
"}\n"
"\n"
"/* --- \320\232\320\236\320\233\320\230 \320\235\320\220\320\242\320\230\320\241\320\232\320\220\320\204\320\250 --- */\n"
"QPushButton:pressed {\n"
"    background-color: #0d47a1; /* \320\241\321\202\320\260\321\224 \321\202\320\265\320\274\320\275\320\276\321\216 */\n"
"    padding-top: 14px;         /* \320\225\321\204\320\265\320\272\321\202 \320\262\320\264\320\260\320\262\320\273\321\216\320\262\320\260\320\275\320\275\321\217 */\n"
"    padding-left: 14px;\n"
"}"));
        layoutWidget = new QWidget(Lab2Window);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 341, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Lab2Window);

        QMetaObject::connectSlotsByName(Lab2Window);
    } // setupUi

    void retranslateUi(QWidget *Lab2Window)
    {
        Lab2Window->setWindowTitle(QCoreApplication::translate("Lab2Window", "Form", nullptr));
        label->setText(QCoreApplication::translate("Lab2Window", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \342\204\2262", nullptr));
        pushButton->setText(QCoreApplication::translate("Lab2Window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 2 (\320\247\320\270\321\201\320\273\320\276)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Lab2Window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 15 (\320\223\321\200\320\260\320\264\321\203\321\201\320\270)", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Lab2Window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 20 (\320\247\320\260\321\201 \320\264\320\276\320\261\320\270)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab2Window: public Ui_Lab2Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB2WINDOW_H
