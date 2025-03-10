#include "genidex.h"
#include "ui_genidex.h"
#include <qdebug.h>

Genidex::Genidex(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Genidex)
    , serialComm(new SerialCommunication(this))
{
    ui->setupUi(this);

    setFocusPolicy(Qt::StrongFocus);

    connect(serialComm, &SerialCommunication::dataReceived, this, &Genidex::onDataReceived);

    // Démarrer la lecture des données
    serialComm->startReading();

    // Créer un timer pour la boucle régulière
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Genidex::main);
    timer->start(250);  // Le timer s'exécute toutes les 250 ms

    showListGenimon();
    highlight();
}

Genidex::~Genidex()
{
    serialComm->stopReading();
    delete serialComm;
    delete timer;
    delete ui;
}

//****************************************************************************
//Gestion entree clavier et arduino
void Genidex::onDataReceived(QJsonObject data){

    // Traitement des données reçues depuis Arduino
    stateBouton1 = data["button1"].toBool();
    stateBouton2 = data["button2"].toBool();
    stateBouton3 = data["button3"].toBool();
    stateBouton4 = data["button4"].toBool();
    stateBoutonJoy = data["bouttonJoy"].toBool();
}

void Genidex::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W) {
        ClavierW = 1;
    }

    if (event->key() == Qt::Key_A) {
        ClavierA = 1;
    }

    if (event->key() == Qt::Key_D) {
        ClavierD = 1;
    }

    if (event->key() == Qt::Key_S) {
        ClavierS = 1;
    }

    if (event->key() == Qt::Key_F) {
        ClavierF = 1;
    }

    if (event->key() == Qt::Key_Enter) {
        ClavierEnter = 1;
    }

    if (event->key() == Qt::Key_Escape) {
        ClavierEsc = 1;
    }
}

void Genidex::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W) {
        ClavierW = 0;
    }

    if (event->key() == Qt::Key_A) {
        ClavierA = 0;
    }

    if (event->key() == Qt::Key_D) {
        ClavierD = 0;
    }

    if (event->key() == Qt::Key_S) {
        ClavierS = 0;
    }

    if (event->key() == Qt::Key_F) {
        ClavierF = 0;
    }

    if (event->key() == Qt::Key_Enter) {
        ClavierEnter = 0;
    }

    if (event->key() == Qt::Key_Escape) {
        ClavierEsc = 0;
    }
}
//****************************************************************************
//Fonction

void Genidex::showGenimon()
{
    ui->Genimon1->setVisible(false);
    ui->Genimon2->setVisible(false);
    ui->Genimon5->setVisible(false);
    ui->Genimon6->setVisible(false);
    ui->Genimon3->setVisible(false);
    ui->Genimon4->setVisible(false);
    ui->Genimon7->setVisible(false);
    ui->Genimon8->setVisible(false);
    ui->Nom1->setVisible(false);
    ui->Nom2->setVisible(false);
    ui->Nom3->setVisible(false);
    ui->Nom4->setVisible(false);
    ui->Nom5->setVisible(false);
    ui->Nom6->setVisible(false);
    ui->Nom7->setVisible(false);
    ui->Nom8->setVisible(false);
    ui->Filtre->setVisible(false);

    ui->Attaque->setVisible(true);
    ui->Description->setVisible(true);
    ui->Genimon->setVisible(true);
    ui->Nom->setVisible(true);
    ui->Rarete->setVisible(true);
    ui->Type->setVisible(true);
    ui->HP->setVisible(true);
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



void Genidex::showListGenimon()
{
    ui->Attaque->setVisible(false);
    ui->Description->setVisible(false);
    ui->Genimon->setVisible(false);
    ui->Nom->setVisible(false);
    ui->Rarete->setVisible(false);
    ui->Type->setVisible(false);
    ui->HP->setVisible(false);

    ui->Genimon1->setVisible(true);
    ui->Genimon2->setVisible(true);
    ui->Genimon5->setVisible(true);
    ui->Genimon6->setVisible(true);
    ui->Genimon3->setVisible(true);
    ui->Genimon4->setVisible(true);
    ui->Genimon7->setVisible(true);
    ui->Genimon8->setVisible(true);
    ui->Nom1->setVisible(true);
    ui->Nom2->setVisible(true);
    ui->Nom3->setVisible(true);
    ui->Nom4->setVisible(true);
    ui->Nom5->setVisible(true);
    ui->Nom6->setVisible(true);
    ui->Nom7->setVisible(true);
    ui->Nom8->setVisible(true);
    ui->Filtre->setVisible(true);

    ui->Filtre->setText(QString("Filtre Genimon : %1").arg(etatFiltre));
}



void Genidex::highlight()
{
    // Réinitialiser l'état de tous les Genimons (enlever le highlight)
    for (int i = 1; i <= 8; ++i) {
        QLabel* genimonLabel = this->findChild<QLabel*>(QString("Genimon%1").arg(i));
        if (genimonLabel) {
            genimonLabel->setStyleSheet("");  // Réinitialiser le style
        }
    }

    // Appliquer un style de highlight (bordure rouge) au Genimon sélectionné
    QLabel* selectedGenimonLabel = this->findChild<QLabel*>(QString("Genimon%1").arg(selectionGenimon + 1));  // +1 car Genimon1 est le premier
    if (selectedGenimonLabel) {
        selectedGenimonLabel->setStyleSheet("QFrame {"
                                            "   border: 10px solid red;" // Bordure rouge avec le même width que l'état par défaut
                                            "   border-style: solid;"    // Assurez-vous que le style de la bordure est solide
                                            "   border-radius: 0px;"     // Pas d'arrondi pour garder l'effet de bordure rectangulaire
                                            "}");  // Mettre la bordure rouge pour le highlight
    }
}

//****************************************************************************
//Main

void Genidex::main()
{

    if ((ClavierF || stateBoutonJoy) && etat ==0) // Si la touche F est enfoncée
    {
        if (etatFiltre == "aucun") {
            etatFiltre = "batiment";
        } else if (etatFiltre == "batiment") {
            etatFiltre = "bio";
        } else if (etatFiltre == "bio") {
            etatFiltre = "chimie";
        } else if (etatFiltre == "chimie") {
            etatFiltre = "civil";
        } else if (etatFiltre == "civil") {
            etatFiltre = "elec";
        } else if (etatFiltre == "elec") {
            etatFiltre = "info";
        } else if (etatFiltre == "info") {
            etatFiltre = "mec";
        } else if (etatFiltre == "mec") {
            etatFiltre = "robot";
        } else if (etatFiltre == "robot") {
            etatFiltre = "aucun"; // Retour à "aucune"
        }
        showListGenimon();
    }


    if ((stateBouton2 || ClavierEsc) && etat ==0 && selectionGenimon ==0)
    {
        this->hide();
    }else if ((stateBouton1 || ClavierW) && selectionGenimon > 3)
    {
        selectionGenimon = selectionGenimon -4;
        highlight();
    }else if ((stateBouton3 || ClavierS) && selectionGenimon <4)
    {
        selectionGenimon = selectionGenimon +4;
        highlight();
    }else if ((stateBouton4 || ClavierA) && selectionGenimon > 0 && selectionGenimon <= 7)
    {
        selectionGenimon--;
        highlight();
    }else if ((stateBouton2 || ClavierD) && selectionGenimon >= 0 && selectionGenimon < 7)
    {
        selectionGenimon++;
        highlight();
    }else if ((stateBoutonJoy || ClavierEnter) && etat ==0)
    {
        etat =1;
        showGenimon();
    }else if ((stateBouton2 || ClavierEsc) && etat ==1)
    {
        etat =0;
        showListGenimon();
    }


}











