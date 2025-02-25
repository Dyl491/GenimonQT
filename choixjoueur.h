#ifndef CHOIXJOUEUR_H
#define CHOIXJOUEUR_H

#include <QWidget>
#include "Map.h"

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
    void on_Continuer_clicked(bool checked);
    void on_Retour_clicked(bool checked);

private:
    Ui::ChoixJoueur *ui;
    Map *map;

signals:
    void retourMainWindow();

};

#endif // CHOIXJOUEUR_H
