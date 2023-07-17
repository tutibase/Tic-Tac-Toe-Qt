/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(254, 340);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(203, 255, 219);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(90, 40));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius: 4px;\n"
"color: #fff;\n"
"width:100px;\n"
"text-align: center;\n"
"font-family: Arial, Helvetica, sans-serif;\n"
"font-size: 14px;\n"
"padding: 8px 16px;\n"
"margin: 5px;\n"
"text-decoration: none;\n"
"}\n"
"QToolButton {\n"
"background-color: rgb( 43, 153, 91 );\n"
"border: 1px solid rgb( 33, 126, 74 );\n"
"}\n"
"        \n"
"QToolButton:pressed {\n"
"background-color: rgb( 75, 183, 141 );\n"
"}"));

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(90, 40));
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius: 4px;\n"
"color: #fff;\n"
"width:100px;\n"
"text-align: center;\n"
"font-family: Arial, Helvetica, sans-serif;\n"
"font-size: 14px;\n"
"padding: 8px 16px;\n"
"margin: 5px;\n"
"text-decoration: none;\n"
"}\n"
"QToolButton {\n"
"background-color: rgb( 43, 153, 91 );\n"
"border: 1px solid rgb( 33, 126, 74 );\n"
"}\n"
"        \n"
"QToolButton:pressed {\n"
"background-color: rgb( 75, 183, 141 );\n"
"}"));

        gridLayout->addWidget(toolButton_2, 1, 0, 1, 1);

        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(90, 40));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius: 4px;\n"
"color: #fff;\n"
"width:100px;\n"
"text-align: center;\n"
"font-family: Arial, Helvetica, sans-serif;\n"
"font-size: 14px;\n"
"padding: 8px 16px;\n"
"margin: 5px;\n"
"text-decoration: none;\n"
"}\n"
"QToolButton {\n"
"background-color: rgb( 43, 153, 91 );\n"
"border: 1px solid rgb( 33, 126, 74 );\n"
"}\n"
"        \n"
"QToolButton:pressed {\n"
"background-color: rgb( 75, 183, 141 );\n"
"}"));

        gridLayout->addWidget(toolButton_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton->setText(QApplication::translate("MainWindow", "Play", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        toolButton_3->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
