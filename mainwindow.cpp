#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    buttons << ui->Start << ui->Commande << ui->Regle << ui->Quitter;

    // Créer un timer pour la boucle régulière
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::main);
    timer->start(100);  // Le timer s'exécute toutes les 100 ms

    for (int i = 0; i < buttons.size(); ++i) {
        buttons[i]->setStyleSheet("background-color: white; color: black; font-size: 14px;");
    }
}

MainWindow::~MainWindow()
{
    delete timer;
    delete ui;
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_1) {
        Clavier1 = 1;
    }
    if (event->key() == Qt::Key_2) {
        Clavier2 = 1;
    }
    if (event->key() == Qt::Key_3) {
        Clavier3 = 1;
    }
    if (event->key() == Qt::Key_4) {
        Clavier4 = 1;
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_1) {
        Clavier1 = 0;
    }
    if (event->key() == Qt::Key_2) {
        Clavier2 = 0;
    }
    if (event->key() == Qt::Key_3) {
        Clavier3 = 0;
    }
    if (event->key() == Qt::Key_4) {
        Clavier4 = 0;
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    timer->stop();
    //qDebug() << "Le timer a été arrêté.";

    QWidget::closeEvent(event);
}

void MainWindow::showEvent(QShowEvent *event)
{
    timer->start();
    //qDebug() << "Le timer a redémarré.";

    QWidget::showEvent(event);
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

void MainWindow::main()
{
    if (Clavier1)
    {
        startGame();
        timer->stop();

    }else if (Clavier2)
    {
        menuCommande();
        timer->stop();
    }else if (Clavier3)
    {
        menuRegle();
        timer->stop();
    }else if (Clavier4)
    {
        quitter();
        timer->stop();
    }
}

