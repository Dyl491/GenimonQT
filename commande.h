#ifndef COMMANDE_H
#define COMMANDE_H

#include <QWidget>
#include <QTimer>
#include "serialcommunication.h"
#include <QJsonObject>
#include "ui_commande.h"
#include <QKeyEvent>


namespace Ui {
class Commande;
}

class Commande : public QWidget
{
    Q_OBJECT

public:
    explicit Commande(QWidget *parent = nullptr);
    ~Commande();

private slots:
    void on_Retour_clicked(bool checked);
    void onDataReceived(QJsonObject data);  // Slot pour recevoir les données
    void toggleState();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::Commande *ui;
    QTimer *timer;     // Le timer pour faire tourner une boucle
    SerialCommunication *serialComm;    //Communication Arduino
    bool stateBouton1 = false;
    bool stateBouton2 = false;
    bool stateBouton3 = false;
    bool stateBouton4 = false;
    bool stateBoutonJoy = false;
    int stateJoy = 0;   //0 = centre, 1 = est, 2 = ouest, 3 = nord, 4 = sud
    int lastStateJoy = -1;
    int accelX = 0;
    int accelY = 0;
    int accelZ = 0;

};

#endif // COMMANDE_H
