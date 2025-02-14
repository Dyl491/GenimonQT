/********************************************************************************
** Form generated from reading UI file 'transcombat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCOMBAT_H
#define UI_TRANSCOMBAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransCombat
{
public:
    QLabel *Transition;

    void setupUi(QWidget *TransCombat)
    {
        if (TransCombat->objectName().isEmpty())
            TransCombat->setObjectName("TransCombat");
        TransCombat->resize(1280, 720);
        Transition = new QLabel(TransCombat);
        Transition->setObjectName("Transition");
        Transition->setGeometry(QRect(0, 0, 1280, 720));
        Transition->setAutoFillBackground(false);
        Transition->setPixmap(QPixmap(QString::fromUtf8("Image_Qt/Decor/Transition combat.png")));
        Transition->setScaledContents(true);
        Transition->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(TransCombat);

        QMetaObject::connectSlotsByName(TransCombat);
    } // setupUi

    void retranslateUi(QWidget *TransCombat)
    {
        TransCombat->setWindowTitle(QCoreApplication::translate("TransCombat", "Form", nullptr));
        Transition->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransCombat: public Ui_TransCombat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCOMBAT_H
