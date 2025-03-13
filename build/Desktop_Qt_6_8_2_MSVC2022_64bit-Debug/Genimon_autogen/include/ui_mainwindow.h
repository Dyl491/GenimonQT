/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *BackGround;
    QLabel *TitreJeu;
    QLabel *SousTitre;
    QLabel *Start;
    QLabel *Commande;
    QLabel *Regle;
    QLabel *Quitter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        BackGround = new QLabel(centralwidget);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/MainMenu/Image_Qt/EcranAccueil/pixel-art-sky-background-with-clouds-cloudy-blue-sky-for-8bit-game-on-white-background-vector.jpg")));
        BackGround->setScaledContents(true);
        TitreJeu = new QLabel(centralwidget);
        TitreJeu->setObjectName("TitreJeu");
        TitreJeu->setGeometry(QRect(390, 20, 500, 100));
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
        SousTitre = new QLabel(centralwidget);
        SousTitre->setObjectName("SousTitre");
        SousTitre->setGeometry(QRect(565, 120, 150, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FZShuTi")});
        font1.setPointSize(20);
        SousTitre->setFont(font1);
        SousTitre->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Start = new QLabel(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(540, 420, 200, 40));
        Start->setAutoFillBackground(true);
        Start->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Commande = new QLabel(centralwidget);
        Commande->setObjectName("Commande");
        Commande->setGeometry(QRect(540, 480, 200, 40));
        Commande->setAutoFillBackground(true);
        Commande->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Regle = new QLabel(centralwidget);
        Regle->setObjectName("Regle");
        Regle->setGeometry(QRect(540, 540, 200, 40));
        Regle->setAutoFillBackground(true);
        Regle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Quitter = new QLabel(centralwidget);
        Quitter->setObjectName("Quitter");
        Quitter->setGeometry(QRect(540, 600, 200, 40));
        Quitter->setAutoFillBackground(true);
        Quitter->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        MainWindow->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        BackGround->setText(QString());
        TitreJeu->setText(QCoreApplication::translate("MainWindow", "Genimon", nullptr));
        SousTitre->setText(QCoreApplication::translate("MainWindow", "Vert & or", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Nouvelle partie (1)", nullptr));
        Commande->setText(QCoreApplication::translate("MainWindow", "Commandes (2)", nullptr));
        Regle->setText(QCoreApplication::translate("MainWindow", "D\303\251roulement du jeu (3)", nullptr));
        Quitter->setText(QCoreApplication::translate("MainWindow", "Quitter le jeu (4)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
