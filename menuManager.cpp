#include "MenuManager.h"
#include <QKeyEvent>
#include <QDebug>

menuManager::menuManager(QWidget *parent)
    : QWidget(parent), stackedWidget(new QStackedWidget(this)),
    serialComm(new SerialCommunication(this)) {

    setupMenus();

    connect(serialComm, &SerialCommunication::dataReceived, this, &menuManager::handleArduinoInput);
    serialComm->startReading();
}

menuManager::~menuManager() {
    delete stackedWidget;
    serialComm->stopReading();
    delete serialComm;
}

void menuManager::setupMenus() {
    // Initialisation des menus
    mainWindow = new MainWindow();
    choixJoueur = new ChoixJoueur();
    map = new Map();
    commande = new Commande();
    regle = new Regle();
    capture = new Capture();
    combat = new Combat();
    genidex = new Genidex();
    historencontre = new HistoRencontre();

    // Ajout des menus dans le QStackedWidget
    stackedWidget->addWidget(mainWindow);
    stackedWidget->addWidget(choixJoueur);
    stackedWidget->addWidget(map);
    stackedWidget->addWidget(commande);
    stackedWidget->addWidget(regle);
    stackedWidget->addWidget(capture);
    stackedWidget->addWidget(combat);
    stackedWidget->addWidget(genidex);
    stackedWidget->addWidget(historencontre);

    // Définir la taille du widget de manière appropriée
    stackedWidget->setGeometry(0, 0, 1280, 720); // Ajuster la taille selon l'UI

    // Associer les signaux pour chaque menu, si nécessaire
    // Exemple : connect(mainWindow, SIGNAL(menuChanged(int)), this, SLOT(handleMenuChange(int)));

    setLayout(new QVBoxLayout());
    layout()->addWidget(stackedWidget);
}


void menuManager::switchToMenu(QWidget *menu) {
    stackedWidget->setCurrentWidget(menu);

    activeMenu = stackedWidget->currentWidget()->objectName();
    qDebug() << "Widget actif : " << activeMenu;
}



void menuManager::handleArduinoInput(const QJsonObject &jsonObject) {
    // Extraire les états des boutons à partir du JSON
    stateBouton1 = jsonObject["button1"].toBool();
    stateBouton2 = jsonObject["button2"].toBool();
    stateBouton3 = jsonObject["button3"].toBool();
    stateBouton4 = jsonObject["button4"].toBool();
    stateBoutonJoy = jsonObject["bouttonJoy"].toBool();
    stateJoy = jsonObject["JoyPosition"].toString();
    accX = jsonObject["AccX"].toInt();
    accY = jsonObject["AccY"].toInt();
    accZ = jsonObject["AccZ"].toInt();

    if (activeMenu == "mainWindow"){
        if (stateBouton1) {
            switchToMenu(mainWindow);
        } else if (stateBouton2) {
            switchToMenu(choixJoueur);
        } else if (stateBouton3) {
            switchToMenu(regle);
        } else if (stateBouton4) {
            QApplication::quit();
        }
    }else if (activeMenu == "choixJoueur"){

    }else if (activeMenu == "map"){

    }else if (activeMenu == "commande"){

    }else if (activeMenu == "regle"){

    }else if (activeMenu == "capture"){

    }else if (activeMenu == "combat"){

    }else if (activeMenu == "genidex"){

    }else if (activeMenu == "historencontre"){

    }
}



void menuManager::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_1:
        if (activeMenu == "mainWindow"){
            switchToMenu(mainWindow);
        }else if (activeMenu == "choixJoueur"){

        }else if (activeMenu == "map"){

        }else if (activeMenu == "commande"){

        }else if (activeMenu == "regle"){

        }else if (activeMenu == "capture"){

        }else if (activeMenu == "combat"){

        }else if (activeMenu == "genidex"){

        }else if (activeMenu == "historencontre"){

        }

        break;
    case Qt::Key_2:
        if (activeMenu == "mainWindow"){
            switchToMenu(choixJoueur);
        }else if (activeMenu == "choixJoueur"){

        }else if (activeMenu == "map"){

        }else if (activeMenu == "commande"){

        }else if (activeMenu == "regle"){

        }else if (activeMenu == "capture"){

        }else if (activeMenu == "combat"){

        }else if (activeMenu == "genidex"){

        }else if (activeMenu == "historencontre"){

        }
        break;
    case Qt::Key_3:
        if (activeMenu == "mainWindow"){
            switchToMenu(regle);
        }else if (activeMenu == "choixJoueur"){

        }else if (activeMenu == "map"){

        }else if (activeMenu == "commande"){

        }else if (activeMenu == "regle"){

        }else if (activeMenu == "capture"){

        }else if (activeMenu == "combat"){

        }else if (activeMenu == "genidex"){

        }else if (activeMenu == "historencontre"){

        }
        break;
    case Qt::Key_4:
        if (activeMenu == "mainWindow"){
            QApplication::quit();
        }else if (activeMenu == "choixJoueur"){

        }else if (activeMenu == "map"){

        }else if (activeMenu == "commande"){

        }else if (activeMenu == "regle"){

        }else if (activeMenu == "capture"){

        }else if (activeMenu == "combat"){

        }else if (activeMenu == "genidex"){

        }else if (activeMenu == "historencontre"){

        }
        break;
    case Qt::Key_Escape:
        if (activeMenu == "mainWindow"){

        }else if (activeMenu == "choixJoueur"){

        }else if (activeMenu == "map"){

        }else if (activeMenu == "commande"){

        }else if (activeMenu == "regle"){

        }else if (activeMenu == "capture"){

        }else if (activeMenu == "combat"){

        }else if (activeMenu == "genidex"){

        }else if (activeMenu == "historencontre"){

        }
        break;
    default:
        QWidget::keyPressEvent(event);
        break;
    }
}


