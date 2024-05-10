/********************************************************************************
** Form generated from reading UI file 'dlg_login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_LOGIN_H
#define UI_DLG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_login
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_pass;
    QLabel *label_title;
    QLabel *label_yonghu;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_yonghu;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *btn_login;
    QPushButton *btn_register;
    QPushButton *btn_exit;

    void setupUi(QDialog *dlg_login)
    {
        if (dlg_login->objectName().isEmpty())
            dlg_login->setObjectName(QString::fromUtf8("dlg_login"));
        dlg_login->resize(516, 366);
        dlg_login->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(dlg_login);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(dlg_login);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, 9, 9, -1);
        label_pass = new QLabel(widget);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setMinimumSize(QSize(0, 0));
        label_pass->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_pass, 2, 0, 1, 1);

        label_title = new QLabel(widget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setMaximumSize(QSize(16777215, 120));
        label_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_title, 0, 0, 1, 3);

        label_yonghu = new QLabel(widget);
        label_yonghu->setObjectName(QString::fromUtf8("label_yonghu"));
        label_yonghu->setMinimumSize(QSize(0, 0));
        label_yonghu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_yonghu, 1, 0, 1, 1);

        lineEdit_pass = new QLineEdit(widget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setMaximumSize(QSize(160, 16777215));

        gridLayout_2->addWidget(lineEdit_pass, 2, 1, 1, 2);

        lineEdit_yonghu = new QLineEdit(widget);
        lineEdit_yonghu->setObjectName(QString::fromUtf8("lineEdit_yonghu"));
        lineEdit_yonghu->setMaximumSize(QSize(160, 16777215));

        gridLayout_2->addWidget(lineEdit_yonghu, 1, 1, 1, 2);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 80));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_login = new QPushButton(widget_2);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(btn_login, 0, 0, 1, 1);

        btn_register = new QPushButton(widget_2);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));
        btn_register->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(btn_register, 0, 1, 1, 1);

        btn_exit = new QPushButton(widget_2);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(btn_exit, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_2, 3, 0, 1, 3);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(dlg_login);

        QMetaObject::connectSlotsByName(dlg_login);
    } // setupUi

    void retranslateUi(QDialog *dlg_login)
    {
        dlg_login->setWindowTitle(QCoreApplication::translate("dlg_login", "Dialog", nullptr));
        label_pass->setText(QCoreApplication::translate("dlg_login", "\345\257\206\347\240\201", nullptr));
        label_title->setText(QCoreApplication::translate("dlg_login", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_yonghu->setText(QCoreApplication::translate("dlg_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        btn_login->setText(QCoreApplication::translate("dlg_login", "\347\231\273\345\275\225", nullptr));
        btn_register->setText(QCoreApplication::translate("dlg_login", "\346\263\250\345\206\214", nullptr));
        btn_exit->setText(QCoreApplication::translate("dlg_login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_login: public Ui_dlg_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_LOGIN_H
