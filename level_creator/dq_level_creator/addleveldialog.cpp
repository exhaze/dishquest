#include "addleveldialog.h"
#include "ui_addleveldialog.h"

addleveldialog::addleveldialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addleveldialog)
{
    ui->setupUi(this);
}

addleveldialog::~addleveldialog()
{
    delete ui;
}
