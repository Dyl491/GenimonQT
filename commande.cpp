#include "commande.h"
#include <QTimer>
#include <QVBoxLayout>
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
    serialComm->stopReading();
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
    stateBoutonJoy = data["bouttonJoy"].toBool();
    stateJoy = data["JoyPosition"].toString();
    accX = data["AccX"].toInt();
    accY = data["AccY"].toInt();
    accZ = data["AccZ"].toInt();

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
        ui->AccelX->setText(QString("ÉtatJoystick : %1").arg(stateJoy));
    }

    ui->AccelX->setText(QString("Accel_X : %1").arg(accX));
    ui->AccelY->setText(QString("Accel_Y : %1").arg(accY));
    ui->AccelZ->setText(QString("Accel_Z : %1").arg(accZ));

}

void Commande::keyPressEvent(QKeyEvent *event)
{
    // Lorsqu'une touche est pressée, changer la couleur en vert
    if (event->key() == Qt::Key_W) {
        ui->ClavierW->setStyleSheet("background-color: green;");
        serialComm->sendJsonToArduino("Touche W pressée", 1);
    }

    if (event->key() == Qt::Key_A) {
        ui->ClavierA->setStyleSheet("background-color: green;");
        serialComm->sendJsonToArduino("Touche A pressée", 2);
    }

    if (event->key() == Qt::Key_D) {
        ui->ClavierD->setStyleSheet("background-color: green;");
        serialComm->sendJsonToArduino("Touche D pressée", 3);
    }

    if (event->key() == Qt::Key_S) {
        ui->ClavierS->setStyleSheet("background-color: green;");
        serialComm->sendJsonToArduino("Touche S pressée", 4);
    }

    if (event->key() == Qt::Key_H) {
        ui->ClavierH->setStyleSheet("background-color: green;");
        serialComm->sendJsonToArduino("Touche H pressée", 5);
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
    serialComm->sendJsonToArduino("Rien ne se passe", 0);
}
