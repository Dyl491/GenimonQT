#include "choixjoueur.h"
#include "ui_choixjoueur.h"
#include <QMessageBox>

ChoixJoueur::ChoixJoueur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChoixJoueur)
{
    ui->setupUi(this);
}

ChoixJoueur::~ChoixJoueur()
{
    delete ui;
}

void ChoixJoueur::on_Continuer_clicked(bool checked)
{
    QString nomJoueur = ui->NomChoisi->text();
    //QMessageBox::information(this, "Texte Saisi", "Vous avez saisi : " + nomJoueur);

    extFaculte = new ExtFaculte(this);
    extFaculte->show();

}


void ChoixJoueur::on_Retour_clicked(bool checked)
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

