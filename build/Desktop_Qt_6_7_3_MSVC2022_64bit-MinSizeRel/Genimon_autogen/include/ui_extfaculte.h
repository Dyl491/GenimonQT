/********************************************************************************
** Form generated from reading UI file 'extfaculte.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTFACULTE_H
#define UI_EXTFACULTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtFaculte
{
public:
    QLabel *BackGround;

    void setupUi(QWidget *ExtFaculte)
    {
        if (ExtFaculte->objectName().isEmpty())
            ExtFaculte->setObjectName("ExtFaculte");
        ExtFaculte->resize(1280, 720);
        BackGround = new QLabel(ExtFaculte);
        BackGround->setObjectName("BackGround");
        BackGround->setGeometry(QRect(0, 0, 1280, 720));
        BackGround->setBaseSize(QSize(100, 100));
        BackGround->setAutoFillBackground(true);
        BackGround->setFrameShape(QFrame::Shape::Box);
        BackGround->setTextFormat(Qt::TextFormat::PlainText);
        BackGround->setPixmap(QPixmap(QString::fromUtf8(":/Decor/Image_Qt/Decor/5a8.png")));
        BackGround->setScaledContents(true);

        retranslateUi(ExtFaculte);

        QMetaObject::connectSlotsByName(ExtFaculte);
    } // setupUi

    void retranslateUi(QWidget *ExtFaculte)
    {
        ExtFaculte->setWindowTitle(QCoreApplication::translate("ExtFaculte", "Form", nullptr));
        BackGround->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExtFaculte: public Ui_ExtFaculte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTFACULTE_H
