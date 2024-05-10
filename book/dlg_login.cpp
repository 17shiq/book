#include "dlg_login.h"
#include "ui_dlg_login.h"

dlg_login::dlg_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_login)
{
    ui->setupUi(this);
}

dlg_login::~dlg_login()
{
    delete ui;
}
