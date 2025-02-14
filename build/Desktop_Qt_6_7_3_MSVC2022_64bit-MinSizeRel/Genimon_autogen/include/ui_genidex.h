/********************************************************************************
** Form generated from reading UI file 'genidex.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENIDEX_H
#define UI_GENIDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Genidex
{
public:

    void setupUi(QWidget *Genidex)
    {
        if (Genidex->objectName().isEmpty())
            Genidex->setObjectName("Genidex");
        Genidex->resize(1280, 720);

        retranslateUi(Genidex);

        QMetaObject::connectSlotsByName(Genidex);
    } // setupUi

    void retranslateUi(QWidget *Genidex)
    {
        Genidex->setWindowTitle(QCoreApplication::translate("Genidex", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Genidex: public Ui_Genidex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENIDEX_H
