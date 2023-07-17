/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(292, 145);
        verticalLayout = new QVBoxLayout(settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(settings);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        spinBox = new QSpinBox(settings);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox->setMinimum(5);
        spinBox->setMaximum(10);

        verticalLayout->addWidget(spinBox);

        buttonBox = new QDialogButtonBox(settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Dialog", nullptr));
        label->setText(QApplication::translate("settings", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Choose map size:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
