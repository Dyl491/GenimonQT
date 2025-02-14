/********************************************************************************
** Form generated from reading UI file 'choixjoueur.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXJOUEUR_H
#define UI_CHOIXJOUEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoixJoueur
{
public:
    QLabel *BackGround;
    QLabel *TitreJeu;
    QLabel *Nom;
    QLineEdit *NomChoisi;
    QPushButton *Continuer;
    QPushButton *Retour;

    void setupUi(QWidget *ChoixJoueur)
    {
        if (ChoixJoueur->objectName().isEmpty())
            ChoixJoueur->setObjectName("ChoixJoueur");
        ChoixJoueur->resize(1280, 720);
        BackGround = new QLabel(ChoixJoueur);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/MainMenu/Image_Qt/EcranAccueil/pixel-art-sky-background-with-clouds-cloudy-blue-sky-for-8bit-game-on-white-background-vector.jpg")));
        BackGround->setScaledContents(true);
        TitreJeu = new QLabel(ChoixJoueur);
        TitreJeu->setObjectName("TitreJeu");
        TitreJeu->setGeometry(QRect(240, 20, 800, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        TitreJeu->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("FZShuTi")});
        font.setPointSize(60);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        TitreJeu->setFont(font);
        TitreJeu->setMouseTracking(false);
        TitreJeu->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        TitreJeu->setAutoFillBackground(false);
        TitreJeu->setTextFormat(Qt::TextFormat::PlainText);
        TitreJeu->setScaledContents(false);
        TitreJeu->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TitreJeu->setWordWrap(false);
        Nom = new QLabel(ChoixJoueur);
        Nom->setObjectName("Nom");
        Nom->setGeometry(QRect(310, 270, 100, 40));
        QFont font1;
        font1.setPointSize(16);
        Nom->setFont(font1);
        Nom->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NomChoisi = new QLineEdit(ChoixJoueur);
        NomChoisi->setObjectName("NomChoisi");
        NomChoisi->setGeometry(QRect(410, 260, 400, 60));
        NomChoisi->setFont(font1);
        NomChoisi->setMaxLength(20);
        Continuer = new QPushButton(ChoixJoueur);
        Continuer->setObjectName("Continuer");
        Continuer->setGeometry(QRect(565, 540, 150, 40));
        QPalette palette1;
        QBrush brush1(QColor(135, 135, 135, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(189, 189, 189, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        Continuer->setPalette(palette1);
        QFont font2;
        font2.setKerning(true);
        Continuer->setFont(font2);
        Retour = new QPushButton(ChoixJoueur);
        Retour->setObjectName("Retour");
        Retour->setGeometry(QRect(565, 600, 150, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        Retour->setPalette(palette2);
        Retour->setFont(font2);

        retranslateUi(ChoixJoueur);

        QMetaObject::connectSlotsByName(ChoixJoueur);
    } // setupUi

    void retranslateUi(QWidget *ChoixJoueur)
    {
        ChoixJoueur->setWindowTitle(QCoreApplication::translate("ChoixJoueur", "Form", nullptr));
        BackGround->setText(QString());
        TitreJeu->setText(QCoreApplication::translate("ChoixJoueur", "Choix du joueur", nullptr));
        Nom->setText(QCoreApplication::translate("ChoixJoueur", "Nom :", nullptr));
        Continuer->setText(QCoreApplication::translate("ChoixJoueur", "Continuer", nullptr));
        Retour->setText(QCoreApplication::translate("ChoixJoueur", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoixJoueur: public Ui_ChoixJoueur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXJOUEUR_H
