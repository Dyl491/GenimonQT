#include "choixjoueur.h"
#include "MainWindow.h"
#include "Map.h"
#include "ui_choixjoueur.h"
#include <QMessageBox>
#include <QWidget>
#include <QLabel>

ChoixJoueur::ChoixJoueur(Map* map, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChoixJoueur)
    , map(map)
{
    ui->setupUi(this);

    buttons << ui->Continuer << ui->Retour;

    // Créer un timer pour la boucle régulière
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ChoixJoueur::main);
    timer->start(100);  // Le timer s'exécute toutes les 100 ms

    buttons[0]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    buttons[1]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    ui->Description->setVisible(false);
}

ChoixJoueur::~ChoixJoueur()
{
    delete timer;
    delete ui;
}


void ChoixJoueur::keyPressEvent(QKeyEvent *event)
{
    if (ui->NomChoisi->hasFocus()) {
        qDebug() << "Ici";
        if (event->key() == Qt::Key_1) {
            nomJoueur = ui->NomChoisi->text();
            ui->Nom->setVisible(false);
            ui->NomChoisi->setVisible(false);
            etat++;

            event->accept();
        }else if (event->key() == Qt::Key_2) {
            retourMain();
            event->accept();
        }
    }
    else {
        qDebug() << "non!!!";
        if (event->key() == Qt::Key_1) {
            Clavier1 = 1;
        }
        if (event->key() == Qt::Key_2) {
            Clavier2 = 1;
        }
        if (event->key() == Qt::Key_3) {
            Clavier3 = 1;
        }
        if (event->key() == Qt::Key_4) {
            Clavier4 = 1;
        }
    }


}

void ChoixJoueur::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_1) {
        Clavier1 = 0;
    }
    if (event->key() == Qt::Key_2) {
        Clavier2 = 0;
    }
    if (event->key() == Qt::Key_3) {
        Clavier3 = 0;
    }
    if (event->key() == Qt::Key_4) {
        Clavier4 = 0;
    }
}

void ChoixJoueur::closeEvent(QCloseEvent *event)
{
    timer->stop();
    //qDebug() << "Le timer a été arrêté.";

    QWidget::closeEvent(event);
}

void ChoixJoueur::showEvent(QShowEvent *event)
{
    timer->start();
    //qDebug() << "Le timer a redémarré.";
    ui->NomChoisi->setVisible(true);  // Assurez-vous qu'il est visible
    ui->NomChoisi->setFocus();

    QWidget::showEvent(event);
}



void ChoixJoueur::retourMain()
{
    timer->stop();
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void ChoixJoueur::continuerMap()
{
    if (map != nullptr) {
        map->setNomJoueur(nomJoueur);
        map->showExtFaculte();
        map->show();
    }

    emit retourMainWindow();
    this->hide();
}

void ChoixJoueur::main()
{
    if (etat ==0)
    {
        ui->Titre->setText("Quel est ton nom ?");
        ui->NomChoisi->hasFocus();

    }else if (etat ==1)
    {
        ui->Titre->setText("Question de personalite");
        ui->Description->setVisible(true);
        ui->Description->setText("Il faut choisir ton type... Repond a ces questions pour le connaitre. "
        "Tu dois repondre par 1 (oui) ou par 2 (non) a chaque question.");
        if (Clavier1)
        {
            etat++;
        }else if (Clavier2)
        {
            retourMain();
        }
    }else if (etat ==2)
    {
        ui->Description->setText("Est ce que 80% est une mauvaise note?");
        if (Clavier1)
        {
            ui->Description->setText("Est que la physique c'est cool?");
            if (Clavier1)
            {
                ui->Description->setText("Tu es un genie robotique");
                typeChoisi = '3';
            }else if (Clavier2)
            {
                ui->Description->setText("Est ce que des trucs morts c'est cool??");
                if (Clavier1)
                {
                    ui->Description->setText("Tu es un genie biotech");
                    typeChoisi = '7';
                }else if (Clavier2)
                {
                    ui->Description->setText("Tu es un genie chimique");
                    typeChoisi = '8';
                }

            }


        }else if (Clavier2)
        {
            ui->Description->setText("Est ce que tu sais c'est quoi un Amplis-Op?");
            if (Clavier1)
            {
                ui->Description->setText("Est ce qu'il te font peur?");
                if (Clavier1)
                {
                    ui->Description->setText("Tu es un genie informatique");
                    typeChoisi = '1';

                }else if (Clavier2)
                {
                    ui->Description->setText("Tu es un genie electrique");
                    typeChoisi = '2';

                }
            }else if (Clavier2)
            {
                ui->Description->setText("Est ce qu t'es basic?");
                if (Clavier1)
                {
                    ui->Description->setText("Tu es un genie civil");
                    typeChoisi = '5';

                }else if (Clavier2)
                {
                    ui->Description->setText("Tu es un genie du batiment");
                    typeChoisi = '6';

                }
            }
        }else
        {
            typeChoisi = '0';
        }



    }
}



