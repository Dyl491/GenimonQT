#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include <QWidget>
#include <QStackedWidget>
#include "serialcommunication.h"

#include "MainWindow.h"
#include "choixjoueur.h"
#include "Map.h"
#include "commande.h"
#include "regle.h"
#include "capture.h"
#include "combat.h"
#include "genidex.h"
#include "historencontre.h"

class menuManager : public QWidget {
    Q_OBJECT
public:
    explicit menuManager(QWidget *parent = nullptr);
    ~menuManager();
private:
    void setupMenus();
    void switchToMenu(QWidget *menu);
    void handleArduinoInput(const QJsonObject &jsonObject);
    void keyPressEvent(QKeyEvent *event);

    // Gestion des menus
    QStackedWidget *stackedWidget;

    // Menus spécifiques
    MainWindow *mainWindow;
    ChoixJoueur *choixJoueur;
    Map *map;
    Commande *commande;
    Regle *regle;
    Capture *capture;
    Combat *combat;
    Genidex *genidex;
    HistoRencontre *historencontre;

    SerialCommunication *serialComm;

    // Variables pour les boutons de la manette
    bool stateBouton1 = false;
    bool stateBouton2 = false;
    bool stateBouton3 = false;
    bool stateBouton4 = false;
    bool stateBoutonJoy = false;
    QString stateJoy = "default";
    QString lastStateJoy = "default";
    int accX = 0;
    int accY = 0;
    int accZ = 0;

    // Variable autres
    QString activeMenu;


};

#endif // MENUMANAGER_H
