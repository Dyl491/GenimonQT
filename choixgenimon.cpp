#include "choixgenimon.h"
#include "ui_choixgenimon.h"

ChoixGenimon::ChoixGenimon(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChoixGenimon)
{
    ui->setupUi(this);
}

ChoixGenimon::~ChoixGenimon()
{
    delete ui;
}
