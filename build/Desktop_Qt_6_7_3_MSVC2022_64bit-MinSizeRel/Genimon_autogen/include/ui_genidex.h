/********************************************************************************
** Form generated from reading UI file 'genidex.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENIDEX_H
#define UI_GENIDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Genidex
{
public:
    QLabel *BackGround;
    QLabel *Genimon;
    QLabel *Nom;
    QLabel *Rarete;
    QLabel *Description;
    QLabel *Type;
    QLabel *HP;
    QLabel *Attaque;

    void setupUi(QWidget *Genidex)
    {
        if (Genidex->objectName().isEmpty())
            Genidex->setObjectName("Genidex");
        Genidex->resize(1280, 720);
        Genidex->setAutoFillBackground(false);
        BackGround = new QLabel(Genidex);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(-5, -35, 1300, 800));
        BackGround->setAutoFillBackground(true);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/Decor/Image_Qt/Decor/Livre2D_V2.png")));
        BackGround->setScaledContents(true);
        Genimon = new QLabel(Genidex);
        Genimon->setObjectName("Genimon");
        Genimon->setGeometry(QRect(210, 100, 301, 491));
        Genimon->setFrameShape(QFrame::Shape::Box);
        Genimon->setFrameShadow(QFrame::Shadow::Raised);
        Genimon->setLineWidth(10);
        Genimon->setMidLineWidth(0);
        Nom = new QLabel(Genidex);
        Nom->setObjectName("Nom");
        Nom->setGeometry(QRect(680, 90, 500, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        Nom->setFont(font);
        Rarete = new QLabel(Genidex);
        Rarete->setObjectName("Rarete");
        Rarete->setGeometry(QRect(680, 140, 500, 41));
        Rarete->setFont(font);
        Description = new QLabel(Genidex);
        Description->setObjectName("Description");
        Description->setGeometry(QRect(680, 190, 500, 150));
        Description->setFont(font);
        Description->setAutoFillBackground(false);
        Description->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        Description->setWordWrap(true);
        Type = new QLabel(Genidex);
        Type->setObjectName("Type");
        Type->setGeometry(QRect(680, 360, 500, 41));
        Type->setFont(font);
        HP = new QLabel(Genidex);
        HP->setObjectName("HP");
        HP->setGeometry(QRect(680, 410, 500, 41));
        HP->setFont(font);
        Attaque = new QLabel(Genidex);
        Attaque->setObjectName("Attaque");
        Attaque->setGeometry(QRect(680, 460, 500, 150));
        Attaque->setFont(font);
        Attaque->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        retranslateUi(Genidex);

        QMetaObject::connectSlotsByName(Genidex);
    } // setupUi

    void retranslateUi(QWidget *Genidex)
    {
        Genidex->setWindowTitle(QCoreApplication::translate("Genidex", "Form", nullptr));
        BackGround->setText(QString());
        Genimon->setText(QString());
        Nom->setText(QCoreApplication::translate("Genidex", "Nom :", nullptr));
        Rarete->setText(QCoreApplication::translate("Genidex", "Raret\303\251 :", nullptr));
        Description->setText(QCoreApplication::translate("Genidex", "Description : ", nullptr));
        Type->setText(QCoreApplication::translate("Genidex", "Type :", nullptr));
        HP->setText(QCoreApplication::translate("Genidex", "HP :", nullptr));
        Attaque->setText(QCoreApplication::translate("Genidex", "Attaques :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Genidex: public Ui_Genidex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENIDEX_H
