#include "piece.h"
#include "ui_piece.h"
#include <QSqlQuery>
#include <QSql>
#include <QMessageBox>

piece::piece(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::piece)
{
    ui->setupUi(this);
}

piece::~piece()
{
    delete ui;
}

void piece::on_pushButton_clicked()
{
    con->connect();
    qry = new QSqlQuery;
    qry->prepare("insert into piece (Code, Ref_PCS, REF_Mag, Désignations, unités, Casiers, P_U)"
                 "values(?, ? ,? ?, ?, ?, ?)");
    qry->addBindValue(ui->code->text());
    qry->addBindValue(ui->Ref_pcs->text());
    qry->addBindValue(ui->Ref_mag->text());
    qry->addBindValue(ui->Designation->text());
    qry->addBindValue(ui->unites->text());
    qry->addBindValue(ui->casiers->text());
    qry->addBindValue(ui->prix_u->text());

    if(qry->exec())
    {
        msg->setText("Enregistrer avec succes");
        msg->show();
        ui->code->setText("");
        ui->Ref_mag->setText("");
        ui->Ref_pcs->setText("");
        ui->Designation->setText("");
        ui->unites->setText("");
        ui->casiers->setText("");
        ui->prix_u->setText("");
    }else
    {
        msg->setText("Erreur: Reverifier les données saisies");
        msg->show();
    }

    con->disconnect();

}

