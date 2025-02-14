#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regle.h"
#include "choixjoueur.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Quitter_clicked(bool checked);

    void on_Start_clicked(bool checked);

    void on_Regle_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    Regle *regle;
    ChoixJoueur *choixJoueur;

};
#endif // MAINWINDOW_H
