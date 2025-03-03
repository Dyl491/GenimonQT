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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Combat
{
public:
    QLabel *Genimon1;
    QLabel *Genimon2;
    QLabel *BackGround;
    QLabel *Nom1;
    QLabel *Nom2;
    QLabel *HP1;
    QLabel *HP2;
    QLabel *OutlineAt1;
    QLabel *OutlineAt2;
    QLabel *OutlineAt3;
    QLabel *OutlineAt4;
    QProgressBar *HP_V1;
    QProgressBar *HP_V2;
    QLabel *TableauInfo;
    QPushButton *Attaque1;
    QPushButton *Attaque2;
    QPushButton *Attaque3;
    QPushButton *Attaque4;

    void setupUi(QWidget *Combat)
    {
        if (Combat->objectName().isEmpty())
            Combat->setObjectName("Combat");
        Combat->resize(1280, 720);
        Genimon1 = new QLabel(Combat);
        Genimon1->setObjectName("Genimon1");
        Genimon1->setGeometry(QRect(280, 280, 150, 150));
        Genimon1->setAutoFillBackground(true);
        Genimon2 = new QLabel(Combat);
        Genimon2->setObjectName("Genimon2");
        Genimon2->setGeometry(QRect(900, 140, 150, 150));
        Genimon2->setAutoFillBackground(true);
        BackGround = new QLabel(Combat);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setAutoFillBackground(true);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/Decor/Image_Qt/Decor/AreneCombat.png")));
        BackGround->setScaledContents(true);
        Nom1 = new QLabel(Combat);
        Nom1->setObjectName("Nom1");
        Nom1->setGeometry(QRect(280, 245, 150, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Nom1->setFont(font);
        Nom2 = new QLabel(Combat);
        Nom2->setObjectName("Nom2");
        Nom2->setGeometry(QRect(900, 105, 150, 40));
        Nom2->setFont(font);
        HP1 = new QLabel(Combat);
        HP1->setObjectName("HP1");
        HP1->setGeometry(QRect(280, 425, 150, 40));
        HP1->setFont(font);
        HP2 = new QLabel(Combat);
        HP2->setObjectName("HP2");
        HP2->setGeometry(QRect(900, 285, 150, 40));
        HP2->setFont(font);
        OutlineAt1 = new QLabel(Combat);
        OutlineAt1->setObjectName("OutlineAt1");
        OutlineAt1->setGeometry(QRect(280, 570, 250, 75));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        OutlineAt1->setFont(font1);
        OutlineAt1->setAutoFillBackground(true);
        OutlineAt1->setFrameShape(QFrame::Shape::Box);
        OutlineAt1->setLineWidth(5);
        OutlineAt1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        OutlineAt2 = new QLabel(Combat);
        OutlineAt2->setObjectName("OutlineAt2");
        OutlineAt2->setGeometry(QRect(280, 645, 250, 75));
        OutlineAt2->setFont(font1);
        OutlineAt2->setAutoFillBackground(true);
        OutlineAt2->setFrameShape(QFrame::Shape::Box);
        OutlineAt2->setLineWidth(5);
        OutlineAt2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        OutlineAt3 = new QLabel(Combat);
        OutlineAt3->setObjectName("OutlineAt3");
        OutlineAt3->setGeometry(QRect(530, 570, 250, 75));
        OutlineAt3->setFont(font1);
        OutlineAt3->setAutoFillBackground(true);
        OutlineAt3->setFrameShape(QFrame::Shape::Box);
        OutlineAt3->setLineWidth(5);
        OutlineAt3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        OutlineAt4 = new QLabel(Combat);
        OutlineAt4->setObjectName("OutlineAt4");
        OutlineAt4->setGeometry(QRect(530, 645, 250, 75));
        OutlineAt4->setFont(font1);
        OutlineAt4->setAutoFillBackground(true);
        OutlineAt4->setFrameShape(QFrame::Shape::Box);
        OutlineAt4->setLineWidth(5);
        OutlineAt4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        HP_V1 = new QProgressBar(Combat);
        HP_V1->setObjectName("HP_V1");
        HP_V1->setGeometry(QRect(320, 435, 110, 25));
        HP_V1->setValue(24);
        HP_V2 = new QProgressBar(Combat);
        HP_V2->setObjectName("HP_V2");
        HP_V2->setGeometry(QRect(940, 295, 110, 25));
        HP_V2->setValue(24);
        TableauInfo = new QLabel(Combat);
        TableauInfo->setObjectName("TableauInfo");
        TableauInfo->setGeometry(QRect(890, 420, 391, 301));
        TableauInfo->setFont(font);
        TableauInfo->setAutoFillBackground(true);
        TableauInfo->setFrameShape(QFrame::Shape::Box);
        TableauInfo->setLineWidth(5);
        TableauInfo->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        Attaque1 = new QPushButton(Combat);
        Attaque1->setObjectName("Attaque1");
        Attaque1->setGeometry(QRect(285, 575, 240, 65));
        Attaque1->setFont(font1);
        Attaque1->setCheckable(false);
        Attaque2 = new QPushButton(Combat);
        Attaque2->setObjectName("Attaque2");
        Attaque2->setGeometry(QRect(285, 650, 240, 65));
        Attaque2->setFont(font1);
        Attaque2->setCheckable(false);
        Attaque3 = new QPushButton(Combat);
        Attaque3->setObjectName("Attaque3");
        Attaque3->setGeometry(QRect(535, 575, 240, 65));
        Attaque3->setFont(font1);
        Attaque3->setCheckable(false);
        Attaque4 = new QPushButton(Combat);
        Attaque4->setObjectName("Attaque4");
        Attaque4->setGeometry(QRect(535, 650, 240, 65));
        Attaque4->setFont(font1);
        Attaque4->setCheckable(false);
        BackGround->raise();
        Genimon2->raise();
        Genimon1->raise();
        Nom1->raise();
        Nom2->raise();
        HP1->raise();
        HP2->raise();
        OutlineAt1->raise();
        OutlineAt2->raise();
        OutlineAt3->raise();
        OutlineAt4->raise();
        HP_V1->raise();
        HP_V2->raise();
        TableauInfo->raise();
        Attaque1->raise();
        Attaque2->raise();
        Attaque3->raise();
        Attaque4->raise();

        retranslateUi(Combat);

        QMetaObject::connectSlotsByName(Combat);
    } // setupUi

    void retranslateUi(QWidget *Combat)
    {
        Combat->setWindowTitle(QCoreApplication::translate("Combat", "Form", nullptr));
        Genimon1->setText(QCoreApplication::translate("Combat", "TextLabel", nullptr));
        Genimon2->setText(QCoreApplication::translate("Combat", "TextLabel", nullptr));
        BackGround->setText(QString());
        Nom1->setText(QCoreApplication::translate("Combat", "Nom :", nullptr));
        Nom2->setText(QCoreApplication::translate("Combat", "Nom :", nullptr));
        HP1->setText(QCoreApplication::translate("Combat", "HP :", nullptr));
        HP2->setText(QCoreApplication::translate("Combat", "HP :", nullptr));
        OutlineAt1->setText(QString());
        OutlineAt2->setText(QString());
        OutlineAt3->setText(QString());
        OutlineAt4->setText(QString());
        TableauInfo->setText(QCoreApplication::translate("Combat", "Info du combat :", nullptr));
        Attaque1->setText(QCoreApplication::translate("Combat", "Attaque 1", nullptr));
        Attaque2->setText(QCoreApplication::translate("Combat", "Attaque 2", nullptr));
        Attaque3->setText(QCoreApplication::translate("Combat", "Attaque 3", nullptr));
        Attaque4->setText(QCoreApplication::translate("Combat", "Attaque 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Combat: public Ui_Combat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBAT_H
