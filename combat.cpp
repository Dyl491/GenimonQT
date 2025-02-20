#include "combat.h"
#include "ui_combat.h"
#include <QTimer>
#include <QPixmap>

Combat::Combat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Combat), TransTimer(new QTimer(this))
{
    ui->setupUi(this);
    ui->BackGround->setPixmap(QPixmap(":/Decor/Image_Qt/Decor/Transition combat.png"));
    ui->Genimon1->move(570,130);
    ui->Genimon2->move(570,460);
    ui->Nom1->setVisible(false);
    ui->Nom2->setVisible(false);
    ui->HP1->setVisible(false);
    ui->HP2->setVisible(false);
    ui->OutlineAt1->setVisible(false);
    ui->OutlineAt2->setVisible(false);
    ui->OutlineAt3->setVisible(false);
    ui->OutlineAt4->setVisible(false);
    ui->Attaque1->setVisible(false);
    ui->Attaque2->setVisible(false);
    ui->Attaque3->setVisible(false);
    ui->Attaque4->setVisible(false);
    ui->HP_V1->setVisible(false);
    ui->HP_V2->setVisible(false);
    ui->TableauInfo->setVisible(false);
    ui->Nom1->setText(QString("Nom: %1").arg("Dylan"));// a remplacer par nom classe genimon
    ui->Nom2->setText(QString("Nom: %1").arg("Moi"));// a remplacer par nom classe genimon
    ui->Attaque1->setText(QString("%1").arg("Mechant"));// a remplacer par nom classe genimon
    ui->Attaque2->setText(QString("%1").arg("Manger"));// a remplacer par nom classe genimon
    ui->Attaque3->setText(QString("%1").arg("WTF"));// a remplacer par nom classe genimon
    ui->Attaque4->setText(QString("%1").arg("Why not"));// a remplacer par nom classe genimon
    ui->HP_V1->setValue(100);
    ui->HP_V2->setValue(100);

    // Configuration du timer pour 3 secondes
    TransTimer->setSingleShot(true); // Le timer ne se déclenche qu'une fois
    connect(TransTimer, &QTimer::timeout, this, &Combat::onTimeout);
    TransTimer->start(3000); // Délai de 3 secondes
}

Combat::~Combat()
{
    delete TransTimer;
    delete ui;
}

void Combat::onTimeout()
{
    ui->BackGround->setPixmap(QPixmap(":/Decor/Image_Qt/Decor/AreneCombat.png"));
    ui->Genimon1->move(280,280);
    ui->Genimon2->move(900,140);
    ui->Nom1->setVisible(true);
    ui->Nom2->setVisible(true);
    ui->HP1->setVisible(true);
    ui->HP2->setVisible(true);
    ui->OutlineAt1->setVisible(true);
    ui->OutlineAt2->setVisible(true);
    ui->OutlineAt3->setVisible(true);
    ui->OutlineAt4->setVisible(true);
    ui->Attaque1->setVisible(true);
    ui->Attaque2->setVisible(true);
    ui->Attaque3->setVisible(true);
    ui->Attaque4->setVisible(true);
    ui->HP_V1->setVisible(true);
    ui->HP_V2->setVisible(true);
    ui->TableauInfo->setVisible(true);
}

void Combat::on_Attaque1_clicked(bool checked)
{

}


void Combat::on_Attaque2_clicked(bool checked)
{

}


void Combat::on_Attaque3_clicked(bool checked)
{

}


void Combat::on_Attaque4_clicked(bool checked)
{

}

