/********************************************************************************
** Form generated from reading UI file 'intfaculte.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTFACULTE_H
#define UI_INTFACULTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntFaculte
{
public:

    void setupUi(QWidget *IntFaculte)
    {
        if (IntFaculte->objectName().isEmpty())
            IntFaculte->setObjectName("IntFaculte");
        IntFaculte->resize(1280, 720);

        retranslateUi(IntFaculte);

        QMetaObject::connectSlotsByName(IntFaculte);
    } // setupUi

    void retranslateUi(QWidget *IntFaculte)
    {
        IntFaculte->setWindowTitle(QCoreApplication::translate("IntFaculte", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntFaculte: public Ui_IntFaculte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTFACULTE_H
