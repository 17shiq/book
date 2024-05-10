#ifndef DLG_LOGIN_H
#define DLG_LOGIN_H

#include <QDialog>

namespace Ui {
class dlg_login;
}

class dlg_login : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_login(QWidget *parent = nullptr);
    ~dlg_login();

private:
    Ui::dlg_login *ui;
};

#endif // DLG_LOGIN_H
