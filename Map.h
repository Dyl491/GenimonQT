#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include <QJsonObject>
#include <QKeyEvent>
#include <QTimer>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLayout>

#include "serialcommunication.h"
#include "combat.h"
#include "genidex.h"
#include "historencontre.h"

namespace Ui {
class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

    QWidget *pauseMenu;
    QWidget *darkBackground;

    void setNomJoueur(const QString &joueur);
    void showExtFaculte();
    void showIntFaculte();

private:
    Ui::Map *ui;
    SerialCommunication *serialComm;    //Communication Arduino
    QTimer *timer;

    Combat *combat = nullptr;
    Genidex *genidex = nullptr;
    HistoRencontre *historencontre = nullptr;
    QString nomJoueur = "default";

    void createPauseMenu();
    void showPause();
    void showCombat();
    void highlight();

    bool isPaused = false;
    int selectedButtonIndex = 0; // 0 = reprendre, ...
    QList<QPushButton*> buttons;
    QPushButton *btnResume;  // Bouton pour reprendre la partie
    QPushButton *btnGenidex;  // Bouton pour ouvrir le Genidex
    QPushButton *btnHistory;  // Bouton pour ouvrir l'historique des rencontres
    QPushButton *btnSave;  // Bouton pour sauvegarder le jeu
    QPushButton *btnQuit;  // Bouton pour quitter le jeu


    //state bouton arduino
    bool stateBouton1 = false;
    bool stateBouton2 = false;
    bool stateBouton3 = false;
    bool stateBouton4 = false;
    bool stateBoutonJoy = false;
    QString stateJoy = "default";
    QString lastStateJoy = "default";

    //state bouton clavier
    bool ClavierW = false;
    bool ClavierD = false;
    bool ClavierS = false;
    bool ClavierA = false;
    bool ClavierG = false;
    bool ClavierH = false;
    bool ClavierEnter = false;
    bool ClavierEsc = false;

private slots:
    void onDataReceived(QJsonObject data);
    void main();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

    void resumeGame();
    void openGenidex();
    void openHistory();
    void saveGame();
    void quitGame();
};

#endif // MAP_H
