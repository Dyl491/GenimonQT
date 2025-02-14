#include "transcombat.h"
#include "ui_transcombat.h"

TransCombat::TransCombat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TransCombat)
{
    ui->setupUi(this);
}

TransCombat::~TransCombat()
{
    delete ui;
}
