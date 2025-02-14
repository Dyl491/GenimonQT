/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *BackGround;
    QPushButton *Start;
    QPushButton *Quitter;
    QPushButton *Continuer;
    QLabel *TitreJeu;
    QLabel *SousTitre;
    QPushButton *Regle;

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
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(565, 420, 150, 40));
        QPalette palette;
        QBrush brush(QColor(135, 135, 135, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(189, 189, 189, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        Start->setPalette(palette);
        Start->setMouseTracking(false);
        Start->setAutoFillBackground(false);
        Start->setIconSize(QSize(20, 20));
        Start->setCheckable(false);
        Quitter = new QPushButton(centralwidget);
        Quitter->setObjectName("Quitter");
        Quitter->setGeometry(QRect(565, 600, 150, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Quitter->setPalette(palette1);
        Continuer = new QPushButton(centralwidget);
        Continuer->setObjectName("Continuer");
        Continuer->setGeometry(QRect(565, 480, 150, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        Continuer->setPalette(palette2);
        QFont font;
        font.setKerning(true);
        Continuer->setFont(font);
        TitreJeu = new QLabel(centralwidget);
        TitreJeu->setObjectName("TitreJeu");
        TitreJeu->setGeometry(QRect(390, 20, 500, 100));
        QPalette palette3;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        TitreJeu->setPalette(palette3);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FZShuTi")});
        font1.setPointSize(60);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        TitreJeu->setFont(font1);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FZShuTi")});
        font2.setPointSize(20);
        SousTitre->setFont(font2);
        SousTitre->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Regle = new QPushButton(centralwidget);
        Regle->setObjectName("Regle");
        Regle->setGeometry(QRect(565, 540, 150, 40));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        Regle->setPalette(palette4);
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
        Start->setText(QCoreApplication::translate("MainWindow", "Nouvelle partie", nullptr));
        Quitter->setText(QCoreApplication::translate("MainWindow", "Quitter le jeu", nullptr));
        Continuer->setText(QCoreApplication::translate("MainWindow", "Continuer une partie", nullptr));
        TitreJeu->setText(QCoreApplication::translate("MainWindow", "Genimon", nullptr));
        SousTitre->setText(QCoreApplication::translate("MainWindow", "Vert & or", nullptr));
        Regle->setText(QCoreApplication::translate("MainWindow", "R\303\250gle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
