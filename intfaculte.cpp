#include "intfaculte.h"
#include "ui_intfaculte.h"

IntFaculte::IntFaculte(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntFaculte)
{
    ui->setupUi(this);
}

IntFaculte::~IntFaculte()
{
    delete ui;
}
