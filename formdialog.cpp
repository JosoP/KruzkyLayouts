#include "formdialog.h"
#include "ui_formdialog.h"

FormDialog::FormDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormDialog)
{
    ui->setupUi(this);

    ui->cmbMode->addItem("štandartný");
    ui->cmbMode->addItem("vedecký");
    ui->cmbMode->addItem("programátorský");

    ui->cmbSystem->addItems({"desiatková", "šestnástková", "binárna"});
}

FormDialog::~FormDialog()
{
    delete ui;
}
