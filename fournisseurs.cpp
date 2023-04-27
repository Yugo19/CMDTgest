#include "fournisseurs.h"
#include "ui_fournisseurs.h"
#include <QSqlQuery>
#include <QDebug>
#include <QFile>


Fournisseurs::Fournisseurs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Fournisseurs)
{
    ui->setupUi(this);
}

Fournisseurs::~Fournisseurs()
{
    delete ui;
    qDebug() << "ui deleted";
}


void Fournisseurs::on_connect_clicked()
{
    QFile file(list_fournisseur);

        if (!file.open(QIODevice::Text | QIODevice::ReadWrite | QFile::Append))
        {
            qDebug() << "FAILED TO CREATE FILE / FILE DOES NOT EXIST";

        }else
        {
            //file.setPermissions(QFile::ExeGroup | QFile::ExeOther | QFile::ExeOwner | QFile::ExeUser);
            QTextStream stream(&file);
            stream << ui->libelle->text() <<"\n";

        }
        ui->libelle->setText("");

}


void Fournisseurs::on_pushButton_clicked()
{
   wI->show();
   this->close();

}

