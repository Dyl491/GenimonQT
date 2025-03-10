#include "Map.h"
#include "ui_Map.h"
#include <QDebug>
#include "mainwindow.h"

Map::Map(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Map)
    , serialComm(new SerialCommunication(this))
{
    ui->setupUi(this);
    setFocusPolicy(Qt::StrongFocus);

    connect(serialComm, &SerialCommunication::dataReceived, this, &Map::onDataReceived);

    // Démarrer la lecture des données
    serialComm->startReading();

    // Créer un timer pour la boucle régulière
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Map::main);
    timer->start(250);  // Le timer s'exécute toutes les 250 ms

    // Créer le menu de pause
    pauseMenu = new QWidget(this);
    darkBackground = new QWidget(this);
    createPauseMenu();

    showExtFaculte();
}

Map::~Map()
{
    serialComm->stopReading();
    delete serialComm;
    delete timer;

    if (genidex)
    {
        delete genidex;
    }
    if (historencontre)
    {
        delete historencontre;
    }
    if (combat)
    {
        delete combat;
    }

    delete ui;
}



//****************************************************************************
//Gestion entree clavier et arduino
void Map::onDataReceived(QJsonObject data){

    // Traitement des données reçues depuis Arduino
    stateBouton1 = data["button1"].toBool();
    stateBouton2 = data["button2"].toBool();
    stateBouton3 = data["button3"].toBool();
    stateBouton4 = data["button4"].toBool();
    stateBoutonJoy = data["bouttonJoy"].toBool();
    stateJoy = data["JoyPosition"].toString();
}

void Map::keyPressEvent(QKeyEvent *event)
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

    if (event->key() == Qt::Key_G) {
        ClavierG = 1;
    }

    if (event->key() == Qt::Key_H) {
        ClavierH = 1;
    }

    if (event->key() == Qt::Key_Enter) {
        ClavierEnter = 1;
    }

    if (event->key() == Qt::Key_Escape) {
        ClavierEsc = 1;
    }
}

void Map::keyReleaseEvent(QKeyEvent *event)
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

    if (event->key() == Qt::Key_G) {
        ClavierG = 0;
    }

    if (event->key() == Qt::Key_H) {
        ClavierH = 0;
    }

    if (event->key() == Qt::Key_Enter) {
        ClavierEnter = 0;
    }

    if (event->key() == Qt::Key_Escape) {
        ClavierEsc = 0;
    }
}

//****************************************************************************
//Creation menu pause

void Map::createPauseMenu()
{
    // Créer un widget de fond sombre pour toute la fenêtre (recouvre tout l'écran)
    darkBackground = new QWidget(this);
    darkBackground->setStyleSheet("background-color: rgba(0, 0, 0, 150);");  // Noir semi-transparent
    darkBackground->setGeometry(0, 0, width(), height());  // Recouvre toute la fenêtre
    darkBackground->hide();  // Masquer par défaut

    // Créer les boutons du menu de pause
    btnResume = new QPushButton("Reprendre", pauseMenu);
    btnGenidex = new QPushButton("Ouvrir le Genidex", pauseMenu);
    btnHistory = new QPushButton("Historique", pauseMenu);
    btnSave = new QPushButton("Sauvegarder", pauseMenu);
    btnQuit = new QPushButton("Quitter", pauseMenu);
    buttons << btnResume << btnGenidex << btnHistory << btnSave << btnQuit;

    //Definir la taille des boutons
    btnResume->setFixedSize(200, 40);
    btnGenidex->setFixedSize(200, 40);
    btnHistory->setFixedSize(200, 40);
    btnSave->setFixedSize(200, 40);
    btnQuit->setFixedSize(200, 40);

    // Appliquer la couleur de fond blanche
    btnResume->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    btnGenidex->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    btnHistory->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    btnSave->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    btnQuit->setStyleSheet("background-color: white; color: black; font-size: 14px;");

    // Espacement entre les boutons (60px en Y)
    QVBoxLayout *layout = new QVBoxLayout;
    layout->setSpacing(60);

    layout->addWidget(btnResume);
    layout->addWidget(btnGenidex);
    layout->addWidget(btnHistory);
    layout->addWidget(btnSave);
    layout->addWidget(btnQuit);

    // Connecter les boutons aux actions correspondantes
    connect(btnResume, &QPushButton::clicked, this, &Map::resumeGame);
    connect(btnGenidex, &QPushButton::clicked, this, &Map::openGenidex);
    connect(btnHistory, &QPushButton::clicked, this, &Map::openHistory);
    connect(btnSave, &QPushButton::clicked, this, &Map::saveGame);
    connect(btnQuit, &QPushButton::clicked, this, &Map::quitGame);

    // Créer un widget de fond opaque en gris foncé
    QWidget *pauseBackground = new QWidget(this);
    pauseBackground->setStyleSheet("background-color: rgba(70, 70, 70, 230);");  // Gris foncé opaque
    pauseBackground->setLayout(layout);
    pauseBackground->setFixedSize(220, 450);  // Largeur et hauteur de l'ensemble du menu (avec les boutons et l'espacement)

    // Centrer le menu de pause au centre de la fenêtre
    pauseBackground->move((width() - pauseBackground->width()) / 2, (height() - pauseBackground->height()) / 2);

    pauseMenu = pauseBackground;

    highlight();
    pauseMenu->hide();  // Masquer le menu de pause au départ
}

void Map::showPause()
{
    if (pauseMenu->isVisible()) {
        darkBackground->hide();  // Masquer le fond sombre
        pauseMenu->hide();  // Si le menu de pause est visible, on le cache
        isPaused = false;
    } else {
        darkBackground->show();  // Afficher le fond sombre
        pauseMenu->show();  // Sinon, on l'affiche
        isPaused = true;
    }
}

void Map::highlight() {
    for (int i = 0; i < buttons.size(); ++i) {
        if (i == selectedButtonIndex) {
            buttons[i]->setStyleSheet("background-color: red; color: white; font-size: 14px;");
        } else {
            buttons[i]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
        }
    }
}



//****************************************************************************
//Fonction

void Map::showExtFaculte()
{
    ui->BackGround->setPixmap(QPixmap(":/Decor/Image_Qt/Decor/5a8.png"));
    ui->NomPerso->setVisible(true);
    ui->NomPerso->setText(QString("%1").arg(nomJoueur));
}



void Map::showIntFaculte()
{
    ui->BackGround->setPixmap(QPixmap(":/Decor/Image_Qt/Decor/5a8.png"));   //Mettre bonne image
}



void Map::showCombat()
{
    if (combat) {
        combat->close();
        delete combat;
        combat = nullptr;
    }
    combat = new Combat(this);
    combat->show();
    showPause();
}



void Map::resumeGame()
{
    showPause();

}

void Map::openGenidex()
{
    // Code pour ouvrir le Genidex
    if (genidex) {
        genidex->close();
        delete genidex;
        genidex = nullptr;
    }
    genidex = new Genidex(this);
    genidex->show();
    showPause();
}

void Map::openHistory()
{
    // Code pour afficher l'historique des rencontres
    if (!historencontre) {
        historencontre = new HistoRencontre(this);
    }

    historencontre->show();
}

void Map::saveGame()
{
    // Code pour sauvegarder le jeu
}

void Map::quitGame()
{
    // Code pour quitter le jeu
    this->close();

    MainWindow* mainWindow = qobject_cast<MainWindow*>(parentWidget());
    if (mainWindow) {
        mainWindow->show();
    }
}


void Map::setNomJoueur(const QString &joueur)
{
    this->nomJoueur = joueur;
}

//****************************************************************************
//Main


void Map::main()
{
    if (ClavierEsc || stateBouton4)
    {
        showPause();
    }

    if (isPaused && selectedButtonIndex >= 0 && selectedButtonIndex <4 && (ClavierS || stateBouton3))
    {
        selectedButtonIndex++;
        highlight();
    }else if (isPaused && selectedButtonIndex > 0 && selectedButtonIndex <=4 && (ClavierW || stateBouton1))
    {
        selectedButtonIndex--;
        highlight();
    }else if (isPaused && (ClavierEnter || stateBoutonJoy))
    {
        switch (selectedButtonIndex) {
        case 0:
            resumeGame();
            break;
        case 1:
            openGenidex();
            break;
        case 2:
            openHistory();
            break;
        case 3:
            saveGame();
            break;
        case 4:
            quitGame();
            break;
        default:
            break;
        }
    }
}

