/********************************************************************************
** Form generated from reading UI file 'regle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGLE_H
#define UI_REGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regle
{
public:
    QLabel *BackGround;
    QPushButton *pushButton;
    QLabel *Reglement;
    QLabel *RegleTitre;

    void setupUi(QWidget *Regle)
    {
        if (Regle->objectName().isEmpty())
            Regle->setObjectName("Regle");
        Regle->resize(1280, 720);
        BackGround = new QLabel(Regle);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/MainMenu/Image_Qt/EcranAccueil/pixel-art-sky-background-with-clouds-cloudy-blue-sky-for-8bit-game-on-white-background-vector.jpg")));
        BackGround->setScaledContents(true);
        pushButton = new QPushButton(Regle);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(565, 540, 150, 40));
        Reglement = new QLabel(Regle);
        Reglement->setObjectName("Reglement");
        Reglement->setGeometry(QRect(490, 60, 300, 400));
        Reglement->setAlignment(Qt::AlignmentFlag::AlignCenter);
        RegleTitre = new QLabel(Regle);
        RegleTitre->setObjectName("RegleTitre");
        RegleTitre->setGeometry(QRect(565, 40, 150, 40));
        RegleTitre->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Regle);

        QMetaObject::connectSlotsByName(Regle);
    } // setupUi

    void retranslateUi(QWidget *Regle)
    {
        Regle->setWindowTitle(QCoreApplication::translate("Regle", "Form", nullptr));
        BackGround->setText(QString());
        pushButton->setText(QCoreApplication::translate("Regle", "Retour au menu", nullptr));
        Reglement->setText(QCoreApplication::translate("Regle", "Rule1 ...", nullptr));
        RegleTitre->setText(QCoreApplication::translate("Regle", "R\303\250gle du jeu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regle: public Ui_Regle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLE_H
