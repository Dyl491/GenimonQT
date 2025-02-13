#include "regle.h"
#include "ui_regle.h"

Regle::Regle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Regle)
{
    ui->setupUi(this);
}

Regle::~Regle()
{
    delete ui;
}

void Regle::on_pushButton_clicked(bool checked)
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

