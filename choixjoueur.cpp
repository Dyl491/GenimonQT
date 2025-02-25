#include "choixjoueur.h"
#include "MainWindow.h"
#include "Map.h"
#include "ui_choixjoueur.h"
#include <QMessageBox>

ChoixJoueur::ChoixJoueur(Map* map, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChoixJoueur)
    , map(map)
{
    ui->setupUi(this);
}

ChoixJoueur::~ChoixJoueur()
{
    delete ui;
}

void ChoixJoueur::on_Continuer_clicked(bool checked)
{
    nomJoueur = ui->NomChoisi->text();
    //QMessageBox::information(this, "Texte Saisi", "Vous avez saisi : " + nomJoueur);

    if (map != nullptr) {
        map->setNomJoueur(nomJoueur);
        map->showExtFaculte();
        map->show();
    }

    emit retourMainWindow();
    this->hide();

}


void ChoixJoueur::on_Retour_clicked(bool checked)
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}



