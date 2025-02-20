/********************************************************************************
** Form generated from reading UI file 'commande.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDE_H
#define UI_COMMANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Commande
{
public:
    QLabel *BackGround;
    QPushButton *Retour;
    QLabel *TitreManette;
    QLabel *TitreClavier;
    QLabel *ManetteB1;
    QLabel *ManetteB2;
    QLabel *ManetteB3;
    QLabel *ManetteB4;
    QLabel *ManetteBJoy;
    QLabel *ManetteJoy;
    QLabel *AccelX;
    QLabel *AccelY;
    QLabel *AccelZ;
    QLabel *ClavierW;
    QLabel *ClavierD;
    QLabel *ClavierS;
    QLabel *ClavierA;
    QLabel *ClavierH;

    void setupUi(QWidget *Commande)
    {
        if (Commande->objectName().isEmpty())
            Commande->setObjectName("Commande");
        Commande->resize(1280, 720);
        BackGround = new QLabel(Commande);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 721));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/MainMenu/Image_Qt/EcranAccueil/pixel-art-sky-background-with-clouds-cloudy-blue-sky-for-8bit-game-on-white-background-vector.jpg")));
        BackGround->setScaledContents(true);
        Retour = new QPushButton(Commande);
        Retour->setObjectName("Retour");
        Retour->setGeometry(QRect(565, 600, 150, 40));
        QPalette palette;
        QBrush brush(QColor(135, 135, 135, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        Retour->setPalette(palette);
        TitreManette = new QLabel(Commande);
        TitreManette->setObjectName("TitreManette");
        TitreManette->setGeometry(QRect(200, 50, 200, 40));
        QFont font;
        font.setPointSize(14);
        TitreManette->setFont(font);
        TitreManette->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TitreClavier = new QLabel(Commande);
        TitreClavier->setObjectName("TitreClavier");
        TitreClavier->setGeometry(QRect(830, 50, 200, 40));
        TitreClavier->setFont(font);
        TitreClavier->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteB1 = new QLabel(Commande);
        ManetteB1->setObjectName("ManetteB1");
        ManetteB1->setEnabled(true);
        ManetteB1->setGeometry(QRect(200, 150, 200, 40));
        QFont font1;
        font1.setPointSize(10);
        ManetteB1->setFont(font1);
        ManetteB1->setAutoFillBackground(true);
        ManetteB1->setScaledContents(false);
        ManetteB1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteB1->setWordWrap(false);
        ManetteB2 = new QLabel(Commande);
        ManetteB2->setObjectName("ManetteB2");
        ManetteB2->setGeometry(QRect(200, 200, 200, 40));
        ManetteB2->setFont(font1);
        ManetteB2->setAutoFillBackground(true);
        ManetteB2->setScaledContents(false);
        ManetteB2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteB2->setWordWrap(false);
        ManetteB3 = new QLabel(Commande);
        ManetteB3->setObjectName("ManetteB3");
        ManetteB3->setGeometry(QRect(200, 250, 200, 40));
        ManetteB3->setFont(font1);
        ManetteB3->setAutoFillBackground(true);
        ManetteB3->setScaledContents(false);
        ManetteB3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteB3->setWordWrap(false);
        ManetteB4 = new QLabel(Commande);
        ManetteB4->setObjectName("ManetteB4");
        ManetteB4->setGeometry(QRect(200, 300, 200, 40));
        ManetteB4->setFont(font1);
        ManetteB4->setAutoFillBackground(true);
        ManetteB4->setScaledContents(false);
        ManetteB4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteB4->setWordWrap(false);
        ManetteBJoy = new QLabel(Commande);
        ManetteBJoy->setObjectName("ManetteBJoy");
        ManetteBJoy->setGeometry(QRect(200, 350, 200, 40));
        ManetteBJoy->setFont(font1);
        ManetteBJoy->setAutoFillBackground(true);
        ManetteBJoy->setScaledContents(false);
        ManetteBJoy->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteBJoy->setWordWrap(false);
        ManetteJoy = new QLabel(Commande);
        ManetteJoy->setObjectName("ManetteJoy");
        ManetteJoy->setGeometry(QRect(200, 400, 200, 40));
        ManetteJoy->setFont(font1);
        ManetteJoy->setAutoFillBackground(true);
        ManetteJoy->setScaledContents(false);
        ManetteJoy->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ManetteJoy->setWordWrap(false);
        AccelX = new QLabel(Commande);
        AccelX->setObjectName("AccelX");
        AccelX->setGeometry(QRect(200, 450, 200, 40));
        AccelX->setFont(font1);
        AccelX->setAutoFillBackground(true);
        AccelX->setScaledContents(false);
        AccelX->setAlignment(Qt::AlignmentFlag::AlignCenter);
        AccelX->setWordWrap(false);
        AccelY = new QLabel(Commande);
        AccelY->setObjectName("AccelY");
        AccelY->setGeometry(QRect(200, 500, 200, 40));
        AccelY->setFont(font1);
        AccelY->setAutoFillBackground(true);
        AccelY->setScaledContents(false);
        AccelY->setAlignment(Qt::AlignmentFlag::AlignCenter);
        AccelY->setWordWrap(false);
        AccelZ = new QLabel(Commande);
        AccelZ->setObjectName("AccelZ");
        AccelZ->setGeometry(QRect(200, 550, 200, 40));
        AccelZ->setFont(font1);
        AccelZ->setAutoFillBackground(true);
        AccelZ->setScaledContents(false);
        AccelZ->setAlignment(Qt::AlignmentFlag::AlignCenter);
        AccelZ->setWordWrap(false);
        ClavierW = new QLabel(Commande);
        ClavierW->setObjectName("ClavierW");
        ClavierW->setEnabled(true);
        ClavierW->setGeometry(QRect(830, 150, 200, 40));
        ClavierW->setFont(font1);
        ClavierW->setAutoFillBackground(true);
        ClavierW->setScaledContents(false);
        ClavierW->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ClavierW->setWordWrap(false);
        ClavierD = new QLabel(Commande);
        ClavierD->setObjectName("ClavierD");
        ClavierD->setEnabled(true);
        ClavierD->setGeometry(QRect(830, 200, 200, 40));
        ClavierD->setFont(font1);
        ClavierD->setAutoFillBackground(true);
        ClavierD->setScaledContents(false);
        ClavierD->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ClavierD->setWordWrap(false);
        ClavierS = new QLabel(Commande);
        ClavierS->setObjectName("ClavierS");
        ClavierS->setEnabled(true);
        ClavierS->setGeometry(QRect(830, 250, 200, 40));
        ClavierS->setFont(font1);
        ClavierS->setAutoFillBackground(true);
        ClavierS->setScaledContents(false);
        ClavierS->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ClavierS->setWordWrap(false);
        ClavierA = new QLabel(Commande);
        ClavierA->setObjectName("ClavierA");
        ClavierA->setEnabled(true);
        ClavierA->setGeometry(QRect(830, 300, 200, 40));
        ClavierA->setFont(font1);
        ClavierA->setAutoFillBackground(true);
        ClavierA->setScaledContents(false);
        ClavierA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ClavierA->setWordWrap(false);
        ClavierH = new QLabel(Commande);
        ClavierH->setObjectName("ClavierH");
        ClavierH->setEnabled(true);
        ClavierH->setGeometry(QRect(830, 350, 200, 40));
        ClavierH->setFont(font1);
        ClavierH->setAutoFillBackground(true);
        ClavierH->setScaledContents(false);
        ClavierH->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ClavierH->setWordWrap(false);

        retranslateUi(Commande);

        QMetaObject::connectSlotsByName(Commande);
    } // setupUi

    void retranslateUi(QWidget *Commande)
    {
        Commande->setWindowTitle(QCoreApplication::translate("Commande", "Form", nullptr));
        BackGround->setText(QString());
        Retour->setText(QCoreApplication::translate("Commande", "Retour au menu", nullptr));
        TitreManette->setText(QCoreApplication::translate("Commande", "Controle Manette", nullptr));
        TitreClavier->setText(QCoreApplication::translate("Commande", "Equivalent Clavier", nullptr));
        ManetteB1->setText(QCoreApplication::translate("Commande", "Bouton1", nullptr));
        ManetteB2->setText(QCoreApplication::translate("Commande", "Bouton2", nullptr));
        ManetteB3->setText(QCoreApplication::translate("Commande", "Bouton3", nullptr));
        ManetteB4->setText(QCoreApplication::translate("Commande", "Bouton4", nullptr));
        ManetteBJoy->setText(QCoreApplication::translate("Commande", "BoutonJoystick", nullptr));
        ManetteJoy->setText(QCoreApplication::translate("Commande", "EtatJoystick :", nullptr));
        AccelX->setText(QCoreApplication::translate("Commande", "Accel_X :", nullptr));
        AccelY->setText(QCoreApplication::translate("Commande", "Accel_Y :", nullptr));
        AccelZ->setText(QCoreApplication::translate("Commande", "Accel_Z :", nullptr));
        ClavierW->setText(QCoreApplication::translate("Commande", "W", nullptr));
        ClavierD->setText(QCoreApplication::translate("Commande", "D", nullptr));
        ClavierS->setText(QCoreApplication::translate("Commande", "S", nullptr));
        ClavierA->setText(QCoreApplication::translate("Commande", "A", nullptr));
        ClavierH->setText(QCoreApplication::translate("Commande", "H", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Commande: public Ui_Commande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDE_H
