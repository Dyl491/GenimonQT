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
    QPushButton *pushButton;

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
        Start->setIconSize(QSize(20, 20));
        Quitter = new QPushButton(centralwidget);
        Quitter->setObjectName("Quitter");
        Quitter->setGeometry(QRect(565, 600, 150, 40));
        Continuer = new QPushButton(centralwidget);
        Continuer->setObjectName("Continuer");
        Continuer->setGeometry(QRect(565, 480, 150, 40));
        QFont font;
        font.setKerning(true);
        Continuer->setFont(font);
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(565, 540, 150, 40));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "R\303\250gle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
