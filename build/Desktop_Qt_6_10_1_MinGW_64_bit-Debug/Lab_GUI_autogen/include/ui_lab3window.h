/********************************************************************************
** Form generated from reading UI file 'lab3window.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB3WINDOW_H
#define UI_LAB3WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab3Window
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Lab3Window)
    {
        if (Lab3Window->objectName().isEmpty())
            Lab3Window->setObjectName("Lab3Window");
        Lab3Window->resize(400, 300);
        Lab3Window->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #2b2b2b;\n"
"    color: white;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #b388ff; /* \320\244\321\226\320\276\320\273\320\265\321\202\320\276\320\262\320\270\320\271 \320\260\320\272\321\206\320\265\320\275\321\202 \320\264\320\273\321\217 3-\321\227 \320\273\320\260\320\261\320\270 */\n"
"    padding: 10px;\n"
"    border-bottom: 2px solid #b388ff;\n"
"    margin-bottom: 20px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #6200ea; /* \320\242\320\265\320\274\320\275\320\276-\321\204\321\226\320\276\320\273\320\265\321\202\320\276\320\262\321\226 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    border: 1px solid #7c43bd;\n"
"    min-width: 150px;\n"
"    min-height: 30px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #7c43bd;\n"
"}\n"
"QPu"
                        "shButton:pressed {\n"
"    background-color: #311b92;\n"
"    padding-top: 8px;\n"
"    padding-left: 8px;\n"
"}"));
        widget = new QWidget(Lab3Window);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 381, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Lab3Window);

        QMetaObject::connectSlotsByName(Lab3Window);
    } // setupUi

    void retranslateUi(QWidget *Lab3Window)
    {
        Lab3Window->setWindowTitle(QCoreApplication::translate("Lab3Window", "Form", nullptr));
        label->setText(QCoreApplication::translate("Lab3Window", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \342\204\2263", nullptr));
        pushButton->setText(QCoreApplication::translate("Lab3Window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 2: \320\277\320\265\321\200\320\265\320\262\321\226\321\200\320\272\320\260 \320\277\320\260\320\273\321\226\320\275\320\264\321\200\320\276\320\274\321\203.", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Lab3Window", "\320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 16: \321\201\321\203\320\274\320\260 \320\235\320\241\320\232 \320\264\320\273\321\217 \321\207\320\270\321\201\320\265\320\273 \320\262\321\226\320\264 1 \320\264\320\276 n.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab3Window: public Ui_Lab3Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB3WINDOW_H
