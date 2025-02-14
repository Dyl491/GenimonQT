/********************************************************************************
** Form generated from reading UI file 'choixgenimon.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXGENIMON_H
#define UI_CHOIXGENIMON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoixGenimon
{
public:

    void setupUi(QWidget *ChoixGenimon)
    {
        if (ChoixGenimon->objectName().isEmpty())
            ChoixGenimon->setObjectName("ChoixGenimon");
        ChoixGenimon->resize(1280, 720);

        retranslateUi(ChoixGenimon);

        QMetaObject::connectSlotsByName(ChoixGenimon);
    } // setupUi

    void retranslateUi(QWidget *ChoixGenimon)
    {
        ChoixGenimon->setWindowTitle(QCoreApplication::translate("ChoixGenimon", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoixGenimon: public Ui_ChoixGenimon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXGENIMON_H
