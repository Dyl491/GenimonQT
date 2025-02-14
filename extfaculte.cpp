#include "extfaculte.h"
#include "ui_extfaculte.h"

ExtFaculte::ExtFaculte(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExtFaculte)
{
    ui->setupUi(this);
}

ExtFaculte::~ExtFaculte()
{
    delete ui;
}
