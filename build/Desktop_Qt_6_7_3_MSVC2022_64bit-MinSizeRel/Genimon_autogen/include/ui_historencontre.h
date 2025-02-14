/********************************************************************************
** Form generated from reading UI file 'historencontre.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORENCONTRE_H
#define UI_HISTORENCONTRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoRencontre
{
public:

    void setupUi(QWidget *HistoRencontre)
    {
        if (HistoRencontre->objectName().isEmpty())
            HistoRencontre->setObjectName("HistoRencontre");
        HistoRencontre->resize(1280, 720);

        retranslateUi(HistoRencontre);

        QMetaObject::connectSlotsByName(HistoRencontre);
    } // setupUi

    void retranslateUi(QWidget *HistoRencontre)
    {
        HistoRencontre->setWindowTitle(QCoreApplication::translate("HistoRencontre", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoRencontre: public Ui_HistoRencontre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORENCONTRE_H
