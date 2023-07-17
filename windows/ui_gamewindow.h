/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QLabel *moveLabel;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QLabel *label;

    void setupUi(QWidget *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QString::fromUtf8("gamewindow"));
        gamewindow->resize(679, 410);
        gamewindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(203, 255, 219);\n"
""));
        moveLabel = new QLabel(gamewindow);
        moveLabel->setObjectName(QString::fromUtf8("moveLabel"));
        moveLabel->setGeometry(QRect(250, 30, 121, 41));
        moveLabel->setStyleSheet(QString::fromUtf8("Qlabel{color: rgb(21, 0, 255);; font-size: 30px; font-weight: 300; line-height: 40px;}\n"
""));
        toolButton = new QToolButton(gamewindow);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(130, 10, 111, 51));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border-radius: 4px;\n"
"color: #fff;\n"
"width:100px;\n"
"text-align: center;\n"
"font-family: Arial, Helvetica, sans-serif;\n"
"font-size: 14px;\n"
"padding: 8px 16px;\n"
"margin:5px ;\n"
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
        toolButton_2 = new QToolButton(gamewindow);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(20, 10, 111, 51));
        toolButton_2->setMinimumSize(QSize(40, 40));
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
        label = new QLabel(gamewindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 10, 121, 21));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 153, 91);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QWidget *gamewindow)
    {
        gamewindow->setWindowTitle(QApplication::translate("gamewindow", "Form", nullptr));
        moveLabel->setText(QApplication::translate("gamewindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        toolButton->setText(QApplication::translate("gamewindow", "Main menu", nullptr));
        toolButton_2->setText(QApplication::translate("gamewindow", "New game", nullptr));
        label->setText(QApplication::translate("gamewindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Game status:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
