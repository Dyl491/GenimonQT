#ifndef GENIDEX_H
#define GENIDEX_H

#include <QWidget>
#include "serialcommunication.h"
#include <QJsonObject>
#include <QKeyEvent>
#include <QTimer>

namespace Ui {
class Genidex;
}

class Genidex : public QWidget
{
    Q_OBJECT

public:
    explicit Genidex(QWidget *parent = nullptr);
    ~Genidex();
    void showGenimon();
    void showListGenimon();
    void highlight();


private:
    Ui::Genidex *ui;
    SerialCommunication *serialComm;    //Communication Arduino
    QTimer *timer;

    int etat = 0; // 0 = listGenimon, 1 = Genimon
    QString etatFiltre = "aucun";
    int selectionGenimon = 0; //0 a 7

    //state bouton arduino
    bool stateBouton1 = false;
    bool stateBouton2 = false;
    bool stateBouton3 = false;
    bool stateBouton4 = false;
    bool stateBoutonJoy = false;

    //state bouton clavier
    bool ClavierW = false;
    bool ClavierD = false;
    bool ClavierS = false;
    bool ClavierA = false;
    bool ClavierF = false;
    bool ClavierEnter = false;
    bool ClavierEsc = false;

private slots:
    void onDataReceived(QJsonObject data);
    void main();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
};

#endif // GENIDEX_H
