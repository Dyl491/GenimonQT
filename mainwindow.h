#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regle.h"

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

    void on_pushButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    Regle *regle;
};
#endif // MAINWINDOW_H
