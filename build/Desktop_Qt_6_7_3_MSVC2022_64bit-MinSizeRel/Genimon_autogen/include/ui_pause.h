/********************************************************************************
** Form generated from reading UI file 'pause.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSE_H
#define UI_PAUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pause
{
public:

    void setupUi(QWidget *Pause)
    {
        if (Pause->objectName().isEmpty())
            Pause->setObjectName("Pause");
        Pause->resize(1280, 720);

        retranslateUi(Pause);

        QMetaObject::connectSlotsByName(Pause);
    } // setupUi

    void retranslateUi(QWidget *Pause)
    {
        Pause->setWindowTitle(QCoreApplication::translate("Pause", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pause: public Ui_Pause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSE_H
