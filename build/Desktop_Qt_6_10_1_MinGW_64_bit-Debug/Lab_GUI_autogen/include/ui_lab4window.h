/********************************************************************************
** Form generated from reading UI file 'lab4window.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB4WINDOW_H
#define UI_LAB4WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab4Window
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEditLog;
    QPushButton *btnRun;

    void setupUi(QWidget *Lab4Window)
    {
        if (Lab4Window->objectName().isEmpty())
            Lab4Window->setObjectName("Lab4Window");
        Lab4Window->resize(451, 357);
        Lab4Window->setStyleSheet(QString::fromUtf8("/* --- \320\227\320\220\320\223\320\220\320\233\320\254\320\235\320\230\320\231 \320\244\320\236\320\235 \320\222\320\206\320\232\320\235\320\220 --- */\n"
"QWidget {\n"
"    background-color: #1b1b1b; /* \320\234\320\260\320\271\320\266\320\265 \321\207\320\276\321\200\320\275\320\270\320\271 \321\204\320\276\320\275 */\n"
"    color: #e0e0e0;            /* \320\241\320\262\321\226\321\202\320\273\320\276-\321\201\321\226\321\200\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    font-family: \"Consolas\", \"Courier New\", monospace; /* \320\250\321\200\320\270\321\204\321\202 \321\217\320\272 \321\203 \320\272\320\276\320\264\321\226 */\n"
"}\n"
"\n"
"/* --- \320\241\320\242\320\230\320\233\320\254 \320\227\320\220\320\223\320\236\320\233\320\236\320\222\320\232\320\220 (Label) --- */\n"
"QLabel {\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #00e676; /* \320\257\321\201\320\272\321\200\320\260\320\262\320\276-\320\267\320\265\320\273\320\265\320\275\320\270\320\271 \320"
                        "\275\320\265\320\276\320\275 */\n"
"    padding: 10px;\n"
"    border-bottom: 2px solid #00e676;\n"
"    margin-bottom: 10px;\n"
"}\n"
"\n"
"/* --- \320\237\320\236\320\233\320\225 \320\222\320\230\320\222\320\225\320\224\320\225\320\235\320\235\320\257 \320\240\320\225\320\227\320\243\320\233\320\254\320\242\320\220\320\242\320\206\320\222 (TextEdit) --- */\n"
"QTextEdit {\n"
"    background-color: #263238; /* \320\242\320\265\320\274\320\275\320\276-\321\201\321\226\321\200\320\276-\320\267\320\265\320\273\320\265\320\275\320\270\320\271 \321\204\320\276\320\275 */\n"
"    color: #ffffff;            /* \320\221\321\226\320\273\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border: 2px solid #00e676; /* \320\227\320\265\320\273\320\265\320\275\320\260 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* --- \320\223\320\236\320\233\320\236\320\222\320\235\320\220 \320\232\320\235\320\236\320\237\320\232\320"
                        "\220 (Run) --- */\n"
"QPushButton#btnRun {   /* \320\241\321\202\320\270\320\273\321\214 \321\201\320\260\320\274\320\265 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 \320\267\320\260\320\277\321\203\321\201\320\272\321\203 */\n"
"    background-color: #2e7d32; /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\320\270\320\271 */\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    border-radius: 8px;\n"
"    padding: 12px;\n"
"    border: 1px solid #66bb6a;\n"
"    min-width: 200px;\n"
"}\n"
"\n"
"QPushButton#btnRun:hover {\n"
"    background-color: #43a047; /* \320\241\320\262\321\226\321\202\320\273\321\226\321\210\320\270\320\271 \320\267\320\265\320\273\320\265\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\275\321\226 */\n"
"    border: 2px solid #b9f6ca; /* \320\241\320\262\321\226\321\202\320\270\321\202\321\214\321\201\321\217 \321\200\320\260\320\274"
                        "\320\272\320\260 */\n"
"}\n"
"\n"
"QPushButton#btnRun:pressed {\n"
"    background-color: #1b5e20; /* \320\224\321\203\320\266\320\265 \321\202\320\265\320\274\320\275\320\270\320\271 \320\277\321\200\320\270 \320\275\320\260\321\202\320\270\321\201\320\272\320\260\320\275\320\275\321\226 */\n"
"    padding-top: 14px;         /* \320\225\321\204\320\265\320\272\321\202 \320\262\320\264\320\260\320\262\320\273\321\216\320\262\320\260\320\275\320\275\321\217 */\n"
"    padding-left: 14px;\n"
"}"));
        widget = new QWidget(Lab4Window);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 40, 258, 268));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEditLog = new QTextEdit(widget);
        textEditLog->setObjectName("textEditLog");
        textEditLog->setReadOnly(true);

        verticalLayout->addWidget(textEditLog);

        btnRun = new QPushButton(widget);
        btnRun->setObjectName("btnRun");

        verticalLayout->addWidget(btnRun);


        retranslateUi(Lab4Window);

        QMetaObject::connectSlotsByName(Lab4Window);
    } // setupUi

    void retranslateUi(QWidget *Lab4Window)
    {
        Lab4Window->setWindowTitle(QCoreApplication::translate("Lab4Window", "Form", nullptr));
        label->setText(QCoreApplication::translate("Lab4Window", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \342\204\2264", nullptr));
        label_2->setText(QCoreApplication::translate("Lab4Window", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270:", nullptr));
        textEditLog->setHtml(QCoreApplication::translate("Lab4Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        btnRun->setText(QCoreApplication::translate("Lab4Window", "\320\222\320\270\320\272\320\276\320\275\320\260\321\202\320\270 \320\267\320\260\320\262\320\264\320\260\320\275\320\275\321\217 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab4Window: public Ui_Lab4Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB4WINDOW_H
