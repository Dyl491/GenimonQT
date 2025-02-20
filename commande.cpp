#include "commande.h"
#include <QTimer>
#include <QVBoxLayout>
#include "serialcommunication.h"
#include <QJsonObject>
#include <QKeyEvent>



Commande::Commande(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Commande), serialComm(new SerialCommunication(this))
{
    ui->setupUi(this);

    setFocusPolicy(Qt::StrongFocus);

    connect(serialComm, &SerialCommunication::dataReceived, this, &Commande::onDataReceived);

    // Démarrer la lecture des données
    serialComm->startReading();

    // Créer un timer pour la boucle régulière
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Commande::toggleState);
    timer->start(500);  // Le timer s'exécute toutes les 500 ms

    //Etat initial couleur case
    ui->ManetteB1->setStyleSheet("background-color: red;");
    ui->ManetteB2->setStyleSheet("background-color: red;");
    ui->ManetteB3->setStyleSheet("background-color: red;");
    ui->ManetteB4->setStyleSheet("background-color: red;");
    ui->ManetteBJoy->setStyleSheet("background-color: red;");
    ui->ClavierW->setStyleSheet("background-color: red;");
    ui->ClavierD->setStyleSheet("background-color: red;");
    ui->ClavierS->setStyleSheet("background-color: red;");
    ui->ClavierA->setStyleSheet("background-color: red;");
    ui->ClavierH->setStyleSheet("background-color: red;");

}

Commande::~Commande()
{
    delete serialComm;
    delete timer;
    delete ui;
}

void Commande::on_Retour_clicked(bool checked)
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void Commande::onDataReceived(QJsonObject data){

    // Traitement des données reçues depuis Arduino
    stateBouton1 = data["button1"].toBool();
    stateBouton2 = data["button2"].toBool();
    stateBouton3 = data["button3"].toBool();
    stateBouton4 = data["button4"].toBool();
    int stateJoy = data["joystick_position"].toInt();
    stateBoutonJoy = data["joystick_button"].toBool();
    accelX = data["acceleration_x"].toInt();
    accelY = data["acceleration_y"].toInt();
    accelZ = data["acceleration_z"].toInt();

}

void Commande::toggleState()
{
    if (stateBouton1) {
        ui->ManetteB1->setStyleSheet("background-color: green;");
    } else {
        ui->ManetteB1->setStyleSheet("background-color: red;");
    }

    if (stateBouton2) {
        ui->ManetteB2->setStyleSheet("background-color: green;");
    } else {
        ui->ManetteB2->setStyleSheet("background-color: red;");
    }

    if (stateBouton3) {
        ui->ManetteB3->setStyleSheet("background-color: green;");
    } else {
        ui->ManetteB3->setStyleSheet("background-color: red;");
    }

    if (stateBouton4) {
        ui->ManetteB4->setStyleSheet("background-color: green;");
    } else {
        ui->ManetteB4->setStyleSheet("background-color: red;");
    }

    if (stateBoutonJoy) {
        ui->ManetteBJoy->setStyleSheet("background-color: green;");
    } else {
        ui->ManetteBJoy->setStyleSheet("background-color: red;");
    }

    if (stateJoy != lastStateJoy){
        lastStateJoy = stateJoy;
        switch (stateJoy) {
        case 0:
            ui->ManetteJoy->setText("ÉtatJoystick : Centre");
            break;
        case 1:
            ui->ManetteJoy->setText("ÉtatJoystick : Est");
            break;
        case 2:
            ui->ManetteJoy->setText("ÉtatJoystick : Ouest");
            break;
        case 3:
            ui->ManetteJoy->setText("ÉtatJoystick : Nord");
            break;
        case 4:
            ui->ManetteJoy->setText("ÉtatJoystick : Sud");
            break;
        default:
            ui->ManetteJoy->setText("ÉtatJoystick : Inconnu");
            break;
        }
    }

    ui->AccelX->setText(QString("Accel_X : %1").arg(accelX));
    ui->AccelY->setText(QString("Accel_Y : %1").arg(accelY));
    ui->AccelZ->setText(QString("Accel_Z : %1").arg(accelZ));

}

void Commande::keyPressEvent(QKeyEvent *event)
{
    // Lorsqu'une touche est pressée, changer la couleur en vert
    if (event->key() == Qt::Key_W) {
        ui->ClavierW->setStyleSheet("background-color: green;");
    }

    if (event->key() == Qt::Key_A) {
        ui->ClavierA->setStyleSheet("background-color: green;");
    }

    if (event->key() == Qt::Key_D) {
        ui->ClavierD->setStyleSheet("background-color: green;");
    }

    if (event->key() == Qt::Key_S) {
        ui->ClavierS->setStyleSheet("background-color: green;");
    }

    if (event->key() == Qt::Key_H) {
        ui->ClavierH->setStyleSheet("background-color: green;");
    }
}

void Commande::keyReleaseEvent(QKeyEvent *event)
{
    // Lorsque la touche est relâchée, remettre la couleur à rouge
    if (event->key() == Qt::Key_W) {
        ui->ClavierW->setStyleSheet("background-color: red;");
    }

    if (event->key() == Qt::Key_A) {
        ui->ClavierA->setStyleSheet("background-color: red;");
    }

    if (event->key() == Qt::Key_D) {
        ui->ClavierD->setStyleSheet("background-color: red;");
    }

    if (event->key() == Qt::Key_S) {
        ui->ClavierS->setStyleSheet("background-color: red;");
    }

    if (event->key() == Qt::Key_H) {
        ui->ClavierH->setStyleSheet("background-color: red;");
    }
}
