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
    QPushButton *Retour;
    QLabel *Reglement;
    QLabel *RegleTitre;

    void setupUi(QWidget *Regle)
    {
        if (Regle->objectName().isEmpty())
            Regle->setObjectName("Regle");
        Regle->resize(1280, 720);
        QFont font;
        font.setPointSize(9);
        Regle->setFont(font);
        BackGround = new QLabel(Regle);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/MainMenu/Image_Qt/EcranAccueil/pixel-art-sky-background-with-clouds-cloudy-blue-sky-for-8bit-game-on-white-background-vector.jpg")));
        BackGround->setScaledContents(true);
        Retour = new QPushButton(Regle);
        Retour->setObjectName("Retour");
        Retour->setGeometry(QRect(565, 540, 150, 40));
        QPalette palette;
        QBrush brush(QColor(135, 135, 135, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        Retour->setPalette(palette);
        Reglement = new QLabel(Regle);
        Reglement->setObjectName("Reglement");
        Reglement->setEnabled(true);
        Reglement->setGeometry(QRect(400, 110, 471, 400));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        Reglement->setFont(font1);
        Reglement->setAcceptDrops(false);
        Reglement->setAlignment(Qt::AlignmentFlag::AlignCenter);
        RegleTitre = new QLabel(Regle);
        RegleTitre->setObjectName("RegleTitre");
        RegleTitre->setGeometry(QRect(480, 50, 321, 40));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        RegleTitre->setFont(font2);
        RegleTitre->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Regle);

        QMetaObject::connectSlotsByName(Regle);
    } // setupUi

    void retranslateUi(QWidget *Regle)
    {
        Regle->setWindowTitle(QCoreApplication::translate("Regle", "Form", nullptr));
        BackGround->setText(QString());
        Retour->setText(QCoreApplication::translate("Regle", "Retour au menu", nullptr));
        Reglement->setText(QCoreApplication::translate("Regle", "<html><head/><body><p align=\"center\">Bienvenue dans Genimon!</p><p align=\"center\">Promenez-vous dans la facult\303\251 de g\303\251nie et rencontrez des</p><p align=\"center\">Genimons. Attrapez-les avec des balles pour les ajouter \303\240 votre</p><p align=\"center\">Genidex ou combattez-les pour tentez de gagner plus de balles.</p><p align=\"center\">Une aventure passionnante vous attend.</p><p align=\"center\">Bonne chasse!</p></body></html>", nullptr));
        RegleTitre->setText(QCoreApplication::translate("Regle", "<html><head/><body><p><span style=\" font-size:22pt;\">D\303\251roulement du jeu</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regle: public Ui_Regle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLE_H
