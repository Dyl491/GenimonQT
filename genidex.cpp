#include "genidex.h"
#include "ui_genidex.h"

Genidex::Genidex(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Genidex)
{
    ui->setupUi(this);

    ui->Genimon->setPixmap(QPixmap("image.png"));//Mettre bon lien selon genimon
    ui->Nom->setText(QString("Nom : %1").arg("Dylan"));// a remplacer par nom classe genimon
    ui->Rarete->setText(QString("Rareté : %1").arg("Légendaire"));// a remplacer par nom classe genimon
    ui->Description->setText(QString("Description : %1").arg("Le meilleur en rien mais ok pour quoi"
                                                             " pas je sais pas quoi écrire mais c'est correct "
                                                             "parce que je sais maintenant comment écrire sur plusieurs "
                                                             "ligne et ça c'est bien"));// a remplacer par nom classe genimon
    ui->Type->setText(QString("Type : %1").arg("Grand mais pas tant"));// a remplacer par nom classe genimon
    ui->HP->setText(QString("HP : %1").arg(200000));// a remplacer par nom classe genimon
    ui->Attaque->setText(QString("Attaques :\n-Attaque 1: %1\n-Attaque 2: %2\n-Attaque 3:  %3\n-Attaque 4: %4\n").arg("Willy", "Tabar",
                                                                  "AHAHAHHA", "J'AI FAIM"));// a remplacer par nom classe genimon
}

Genidex::~Genidex()
{
    delete ui;
}
