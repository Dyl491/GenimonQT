/********************************************************************************
** Form generated from reading UI file 'combat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBAT_H
#define UI_COMBAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Combat
{
public:
    QLabel *BackGround;
    QLabel *Transition;

    void setupUi(QWidget *Combat)
    {
        if (Combat->objectName().isEmpty())
            Combat->setObjectName("Combat");
        Combat->resize(1280, 720);
        BackGround = new QLabel(Combat);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8("Image_Qt/Decor/AreneCombat.webp")));
        BackGround->setScaledContents(true);
        Transition = new QLabel(Combat);
        Transition->setObjectName("Transition");
        Transition->setGeometry(QRect(0, 0, 1280, 720));
        Transition->setAutoFillBackground(false);
        Transition->setPixmap(QPixmap(QString::fromUtf8("Image_Qt/Decor/Transition combat.png")));
        Transition->setScaledContents(true);
        Transition->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Transition->raise();
        BackGround->raise();

        retranslateUi(Combat);

        QMetaObject::connectSlotsByName(Combat);
    } // setupUi

    void retranslateUi(QWidget *Combat)
    {
        Combat->setWindowTitle(QCoreApplication::translate("Combat", "Form", nullptr));
        BackGround->setText(QString());
        Transition->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Combat: public Ui_Combat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBAT_H
