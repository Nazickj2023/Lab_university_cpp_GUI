/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #212121; /* \320\224\321\203\320\266\320\265 \321\202\320\265\320\274\320\275\320\270\320\271 \321\204\320\276\320\275 */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #00e5ff; /* \320\235\320\265\320\276\320\275\320\276\320\262\320\276-\320\261\320\273\320\260\320\272\320\270\321\202\320\275\320\270\320\271 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 */\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    padding: 20px;\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #37474f; /* \320\242\320\265\320\274\320\275\320\276-\321\201\320\270\320\275\321\226 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 15px;\n"
"    margin: 5px;\n"
"    border: 2px solid #37474f;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #546e7a; /* \320\241\320\262\321\226\321\202\320\273\321\226\321\210\320\260\321"
                        "\224 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\275\321\226 */\n"
"    border: 2px solid #00e5ff; /* \320\227'\321\217\320\262\320\273\321\217\321\224\321\202\321\214\321\201\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #00e5ff; /* \320\241\321\202\320\260\321\224 \321\217\321\201\320\272\321\200\320\260\320\262\320\270\320\274 \320\277\321\200\320\270 \320\272\320\273\321\226\320\272\321\203 */\n"
"    color: black;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 40, 332, 429));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_2->addWidget(pushButton_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\321\226 \321\200\320\276\320\261\320\276\321\202\320\270 \320\267 C++", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \342\204\2261", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \342\204\2262", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \342\204\2263", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \342\204\2264", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260 \342\204\2265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
