/********************************************************************************
** Form generated from reading UI file 'fournisseurs.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURNISSEURS_H
#define UI_FOURNISSEURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fournisseurs
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *libelle;
    QPushButton *connect;
    QPushButton *pushButton;

    void setupUi(QWidget *Fournisseurs)
    {
        if (Fournisseurs->objectName().isEmpty())
            Fournisseurs->setObjectName(QString::fromUtf8("Fournisseurs"));
        Fournisseurs->resize(243, 124);
        Fournisseurs->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 94, 45);\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget = new QWidget(Fournisseurs);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        libelle = new QLineEdit(verticalLayoutWidget);
        libelle->setObjectName(QString::fromUtf8("libelle"));
        libelle->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(libelle);

        connect = new QPushButton(verticalLayoutWidget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(connect);

        pushButton = new QPushButton(Fournisseurs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 100, 41, 21));

        retranslateUi(Fournisseurs);

        QMetaObject::connectSlotsByName(Fournisseurs);
    } // setupUi

    void retranslateUi(QWidget *Fournisseurs)
    {
        Fournisseurs->setWindowTitle(QCoreApplication::translate("Fournisseurs", "Form", nullptr));
        connect->setText(QCoreApplication::translate("Fournisseurs", "Valider", nullptr));
        pushButton->setText(QCoreApplication::translate("Fournisseurs", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fournisseurs: public Ui_Fournisseurs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURNISSEURS_H
