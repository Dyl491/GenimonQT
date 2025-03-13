#ifndef CHOIXJOUEUR_H
#define CHOIXJOUEUR_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QList>
#include <QLabel>
#include "Map.h"
#include "Joueur.h"

namespace Ui {
class ChoixJoueur;
}

class ChoixJoueur : public QWidget
{
    Q_OBJECT

public:
    explicit ChoixJoueur(Map* map = nullptr, QWidget *parent = nullptr);
    ~ChoixJoueur();

    QString nomJoueur;

private slots:
    void main();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);

private:
    Ui::ChoixJoueur *ui;
    Map *map;
    SerialCommunication *serialComm;    //Communication Arduino
    QTimer *timer;
    Joueur *joueur;

    void continuerMap();
    void retourMain();

    int etat =0;
    QChar typeChoisi ='0';
    QList<QLabel*> buttons;

    bool Clavier1 =0;
    bool Clavier2 =0;
    bool Clavier3 =0;
    bool Clavier4 =0;

signals:
    void retourMainWindow();
    void quizTermine(Map* map);
};

#endif // CHOIXJOUEUR_H
