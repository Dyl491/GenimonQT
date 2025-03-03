#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    buttons << ui->Start << ui->Continuer << ui->Commande << ui->Regle << ui->Quitter;

    // Créer un timer pour la boucle régulière
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::main);
    timer->start(250);  // Le timer s'exécute toutes les 250 ms

    highlight();
}

MainWindow::~MainWindow()
{
    delete timer;
    delete ui;
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W) {
        ClavierW = 1;
    }
    if (event->key() == Qt::Key_S) {
        ClavierS = 1;
    }
    if (event->key() == Qt::Key_Enter) {
        ClavierEnter = 1;
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W) {
        ClavierW = 0;
    }
    if (event->key() == Qt::Key_S) {
        ClavierS = 0;
    }
    if (event->key() == Qt::Key_Enter) {
        ClavierEnter = 0;
    }
}



void MainWindow::quitter()
{
    QApplication::quit();
}


void MainWindow::startGame()
{
    Map* map = new Map(this);
    ChoixJoueur *choixJoueur = new ChoixJoueur(map, this);
    connect(choixJoueur, &ChoixJoueur::retourMainWindow, this, &MainWindow::show);
    choixJoueur->show();
}


void MainWindow::menuRegle()
{
    regle = new Regle(this);
    regle->show();
}


void MainWindow::menuCommande()
{
    commande = new Commande(this);
    commande->show();
}


void MainWindow::continuer()
{

}

void MainWindow::highlight() {
    for (int i = 0; i < buttons.size(); ++i) {
        if (i == selectedButtonIndex) {
            buttons[i]->setStyleSheet("background-color: red; color: white; font-size: 14px;");
        } else {
            buttons[i]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
        }
    }
}

void MainWindow::main()
{
    if (selectedButtonIndex >= 0 && selectedButtonIndex <4 && ClavierS)
    {
        selectedButtonIndex++;
        highlight();
    }else if (selectedButtonIndex > 0 && selectedButtonIndex <=4 && ClavierW )
    {
        selectedButtonIndex--;
        highlight();
    }else if (ClavierEnter)
    {
        switch (selectedButtonIndex) {
        case 0:
            startGame();
            break;
        case 1:
            continuer();
            break;
        case 2:
            menuCommande();
            break;
        case 3:
            menuRegle();
            break;
        case 4:
            quitter();
            break;
        default:
            break;
        }
    }
}

