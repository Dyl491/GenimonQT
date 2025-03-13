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
    timer->start(200);  // Le timer s'exécute toutes les 200 ms

    buttons[0]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    buttons[1]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    ui->Description->setVisible(false);
    ui->Continuer->setText("Continuer (esc)");
    ui->Retour->setVisible(false);
}

ChoixJoueur::~ChoixJoueur()
{
    delete timer;
    delete ui;
}


void ChoixJoueur::keyPressEvent(QKeyEvent *event)
{
    if (ui->NomChoisi->hasFocus()) {

        if (event->key() == Qt::Key_Escape)
        {
            nomJoueur = ui->NomChoisi->text();
            ui->Nom->setVisible(false);
            ui->NomChoisi->setVisible(false);
            etat++;
            ui->NomChoisi->clearFocus();
            setFocus();
            event->accept();
        }
    }
    else {
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
    clearFocus();
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void ChoixJoueur::continuerMap()
{
    clearFocus();
    if (map != nullptr) {
        map->setNomJoueur(nomJoueur);
        map->showExtFaculte();
        map->show();
        joueur = new Joueur(5, 5, this); //position initiale sur la carte
    }

    emit retourMainWindow();
    this->hide();
}



void ChoixJoueur::main()
{
    switch (etat) {
    case 0:
        ui->Titre->setText("Quel est ton nom ?");
        ui->NomChoisi->setFocus();
        break;

    case 1:
        ui->Titre->setText("Question de personnalité");
        ui->Description->setVisible(true);
        ui->Retour->setVisible(true);
        ui->Description->setText("Il faut choisir ton type... Réponds à ces questions pour le connaitre. "
                                 "Tu dois répondre par 1 (oui) ou par 2 (non) à chaque question.");
        ui->Continuer->setText("Oui (1)");
        ui->Retour->setText("Non (2)");

        if (Clavier1) {
            Clavier1 =0;
            etat = 2;
        } else if (Clavier2) {
            Clavier2 =0;
            retourMain();
        }
        break;

    case 2: // Question 1 : Est-ce que 80% est une mauvaise note ?
        ui->Description->setText("Est-ce que 80% est une mauvaise note ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Est-ce que la physique c'est cool ?");
            etat = 3;
        } else if (Clavier2) {
            Clavier2 =0;
            ui->Description->setText("Est-ce que tu penses que les ordinateurs fonctionnent avec de l'essence ?");
            etat = 5;
        }
        break;

    case 3: // Question 2 : Est-ce que la physique c'est cool ?
        ui->Description->setText("Est-ce que la physique c'est cool ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Tu es un génie robotique");
            typeChoisi = '3'; // Type robotique
            etat = 9;
        } else if (Clavier2) {
            Clavier2 =0;
            ui->Description->setText("Est-ce que des trucs morts c'est cool ?");
            etat = 4;
        }
        break;

    case 4: // Question 3 : Est-ce que des trucs morts c'est cool ?
        ui->Description->setText("Est-ce que des trucs morts c'est cool ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Tu es un génie biotech");
            typeChoisi = '7'; // Type biotech
            etat = 9;
        } else if (Clavier2) {
            Clavier2 =0;
            ui->Description->setText("Tu es un génie chimique");
            typeChoisi = '8'; // Type chimique
            etat = 9;
        }
        break;

    case 5: // Question 4 : Est-ce que tu penses que les ordinateurs fonctionnent avec de l'essence ?
        ui->Description->setText("Est-ce que tu penses que les ordinateurs fonctionnent avec de l'essence ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Hmmm, intéressant... Tu es un génie mécanique");
            typeChoisi = '4'; // Type mécanique
            etat = 9;
        } else if (Clavier2) {
            Clavier2 =0;
            ui->Description->setText("Est-ce que tu sais ce que c'est un Amplis-Op ?");
            etat = 6;
        }
        break;

    case 6: // Question 5 : Est-ce que tu sais ce que c'est un Amplis-Op ?
        ui->Description->setText("Est-ce que tu sais ce que c'est un Amplis-Op ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Est-ce qu'il te font peur ?");
            etat = 7;
        } else if (Clavier2) {
            Clavier2 =0;
            ui->Description->setText("Est-ce que tu es basique ?");
            etat = 8;
        }
        break;

    case 7: // Question 6 : Est-ce qu'il te font peur ?
        ui->Description->setText("Est-ce qu'il te font peur ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Tu es un génie informatique");
            typeChoisi = '1'; // Type informatique
            etat = 9;
        } else if (Clavier2) {
            Clavier2 =0;
            ui->Description->setText("Tu es un génie électrique");
            typeChoisi = '2'; // Type électrique
            etat = 9;
        }
        break;

    case 8: // Question 7 : Est-ce que tu es basique ?
        ui->Description->setText("Est-ce que tu es basique ?");
        if (Clavier1) {
            Clavier1 =0;
            ui->Description->setText("Tu es un génie civil");
            typeChoisi = '5'; // Type civil
            etat = 9;
        } else if (Clavier2) { // Réponse "Non" (Clavier2)
            Clavier2 =0;
            ui->Description->setText("Tu es un génie du bâtiment");
            typeChoisi = '6'; // Type bâtiment
            etat = 9;
        }
        break;

    case 9: // Fin du quiz : Choix du type terminé
        ui->Description->setText("Félicitations ! Tu as terminé le quiz.");
        ui->Continuer->setText("Débuter de la partie (1)");
        ui->Retour->setText("Recommencer le quiz (2)");

        if (Clavier1)
        {
            Clavier1 =0;
            continuerMap();

        }

        if (Clavier2)
        {
            Clavier2 =0;
            etat = 1;
            typeChoisi = '0';
        }
        break;

    default:
        break;
    }
}



