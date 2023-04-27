#include "home.h"
#include "ui_home.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QDebug>
//#include "piece.h"
//#include "fournisseurs.h"
#include <QRandomGenerator>
#include <QPrinter>
#include <QPrintDialog>
#include <QThreadPool>
#include <QDate>
#include <QIcon>
//#include "fournisseur.h"

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);

    setWindowIcon(QIcon("C:\\Users\\Wakfu\\Documents\\Inventaire_cmd\\cmdt.ico"));

    pool = new QThreadPool(this);
    pool->setMaxThreadCount(5);
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);

    rand_Generator();


    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error, file doesn't exist";
    }else
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            ui->user->setText(line);

        }
    }

    loadDataTable();
    ui->facture->setVisible(false);
    ui->Grand_total->setVisible(false);
    ui->id->setVisible(false);
    ui->id_bon->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);

    qDebug() << "Run";

    //db->close();
    this->setWindowTitle("ControlUrgentGrgeSko");

/*
    con->connect();

    model1 = new QSqlQueryModel;
    qry2 = new QSqlQuery;
    qry2->prepare(qry_fournisseur);
    qry2->exec();
    model1->setQuery(*qry2);
    ui->liste_fournisseur->setModel(model1);

    con->disconnect();
*/

  ret_lis_fournisseur();
}

Home::~Home()
{
    delete ui;

}

void Home::on_pushButton_6_clicked()
{
  // Fournisseurs * f_w = new Fournisseurs;
   con->connect();
   qry5 = new QSqlQuery;
   qry5->prepare("insert into fournisseur (libelle) values(?)");
   qry5->addBindValue(ui->libelle->text());
   qry5->exec();
   ui->libelle->setText("");

}


void Home::on_pushButton_5_clicked()
{
    con->connect();
    qry = new QSqlQuery;
    qry->prepare("insert into piece (Code, Ref_PCS, REF_Mag, Désignations, unités, Casiers, P_U)"
                 "values(?, ? ,? ?, ?, ?, ?)");
    qry->addBindValue(ui->code->text());
    qry->addBindValue(ui->Ref_pcs->text());
    qry->addBindValue(ui->ref_mag->text());
    qry->addBindValue(ui->designation->text());
    qry->addBindValue(ui->unite->text());
    qry->addBindValue(ui->casier->text());
    qry->addBindValue(ui->prix_u->text());

    if(qry->exec())
    {
        msg->setText("Enregistrer avec succes");
        msg->show();
        ui->code->setText("");
        ui->ref_mag->setText("");
        ui->Ref_pcs->setText("");
        ui->designation->setText("");
        ui->unite->setText("");
        ui->unite->setText("");
        ui->prix_u->setText("");
    }else
    {
        msg->setText("Erreur: Reverifier les données saisies");
        msg->show();
    }

}


void Home::on_lineEdit_10_textChanged(const QString &arg1)
{

}


void Home::on_search_bar_textChanged(const QString &arg1)
{
    con->connect();
    QString search_by_value = "select * from piece where Code like '%"+ui->search_bar->text()+"%' or Ref_PCS like '%"+ui->search_bar->text()+"%' "
                             "or REF_Mag like '%"+ui->search_bar->text()+"%' or Désignations like '%"+ui->search_bar->text()+"%' or Casiers like '%"+ui->search_bar->text()+"%' ";
    model3 = new QSqlQueryModel;
    model3->setQuery(search_by_value);
    ui->data_table->setModel(model3);
    con->disconnect();

}


void Home::on_data_table_doubleClicked(const QModelIndex &index)
{
    QThread workerThread;


    con->connect();
    QString Index = ui->data_table->model()->data(index).toString();
    doubleclick_qry = new QSqlQuery;
    doubleclick_qry->prepare("select * from piece where id='"+Index+"' or Code ='"+Index+"'  or Ref_PCS ='"+Index+"'  or REF_Mag ='"+Index+"' "
                              " or Désignations ='"+Index+"'  or Unités ='"+Index+"'  or Casiers ='"+Index+"'  or P_U ='"+Index+"' ");

    if(doubleclick_qry->exec())
    {
        while (doubleclick_qry->next())
        {
            ui->id->setText(doubleclick_qry->value(0).toString());
            ui->code->setText(doubleclick_qry->value(1).toString());
            ui->Ref_pcs->setText(doubleclick_qry->value(2).toString());
            ui->ref_mag->setText(doubleclick_qry->value(3).toString());
            ui->designation->setText(doubleclick_qry->value(4).toString());
            ui->unite->setText(doubleclick_qry->value(5).toString());
            ui->casier->setText(doubleclick_qry->value(6).toString());
            ui->prix_u->setText(doubleclick_qry->value(7).toString());
            //ui->code->setText(doubleclick_qry->value(1).toString());
            //ui->code->setText(doubleclick_qry->value(1).toString());
        }

        con->disconnect();
    }
   con->disconnect();
}


void Home::on_update_button_clicked()
{
    try {


        con->connect();
        qDebug() << "run3";
        update_query = new QSqlQuery;
        update_query->prepare("update piece set Code = ?, Ref_PCS = ?, REF_Mag = ?, Désigantions = ?, Unité= ?, casiers = ?, prix_unit = ? where id = ?");
        qDebug() << "run3";
        update_query->addBindValue(ui->code->text());
        update_query->addBindValue(ui->Ref_pcs->text());
        update_query->addBindValue(ui->ref_mag->text());
        update_query->addBindValue(ui->designation->text());
        update_query->addBindValue(ui->unite->text());
        update_query->addBindValue(ui->casier->text());
        update_query->addBindValue(ui->prix_u->text());
        update_query->addBindValue(ui->id->text());
        qDebug() << "run3.1";
        bool ok = update_query->exec();
        qDebug() << "run3";
        if(ok)
        {
            qDebug() << "run4";
            msg->setText("Modifier avec succes");
            msg->show();
            con->disconnect();
        }else
        {
            msg->setText("Echec de mise à jour");
            msg->show();
            qDebug() << "run5";
            con->disconnect();
        }
    } catch (std::exception &e)
    {
        qDebug() << e.what();
    }

}


void Home::on_Valider_clicked()
{
    con->connect();
    qry1 = new QSqlQuery;
    qry1->prepare("insert into archive (id_bon, code, ref_mag, designation, fournisseur, quantite, prix_unit, montant, affectation_veh, date_en) values(?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
    qry1->addBindValue(ui->id_bon->text());
    qry1->addBindValue(ui->code->text());
    qry1->addBindValue(ui->ref_mag->text());
    qry1->addBindValue(ui->designation->text());
    qry1->addBindValue(ui->list_fournisseur->currentText());
    qry1->addBindValue(ui->quantites->text());
    qry1->addBindValue(ui->prix_u->text());
    qry1->addBindValue(ui->montant->text());
    qry1->addBindValue(ui->affectation_veh->text());
   // qry1->addBindValue(ui->casier->text());
    qry1->addBindValue(ui->dateEdit->date());
    qry1->exec();
    if(qry1->numRowsAffected()== 1)
    {
      qDebug() << "inserted";

    }else
    {
        qDebug() << "Not inserted";

    }

    con->disconnect();

    con->connect();
    qry1 = new QSqlQuery;
    qry1->prepare("insert into facture (id_bon, code, ref_mag, designation, fournisseur, quantite, prix_unit, montant, affectation_veh, date_en) values(?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
    qry1->addBindValue(ui->id_bon->text());
    qry1->addBindValue(ui->code->text());
    qry1->addBindValue(ui->ref_mag->text());
    qry1->addBindValue(ui->designation->text());
    qry1->addBindValue(ui->list_fournisseur->currentText());
    qry1->addBindValue(ui->quantites->text());
    qry1->addBindValue(ui->prix_u->text());
    qry1->addBindValue(ui->montant->text());
    qry1->addBindValue(ui->affectation_veh->text());
   // qry1->addBindValue(ui->casier->text());
    qry1->addBindValue(ui->dateEdit->date());
    qry1->exec();
    if(qry1->numRowsAffected()== 1)
    {
      qDebug() << "inserted";

      ui->code->setText("");
      ui->ref_mag->setText("");
      ui->Ref_pcs->setText("");
      ui->designation->setText("");
      ui->list_fournisseur->setCurrentText("");
      ui->quantites->setText("");
      ui->prix_u->setText("");
      ui->montant->setText("");
      ui->affectation_veh->setText("");
      msg->setText("inserer avec succes");
      msg->show();

    }else
    {
        qDebug() << "Not inserted";
        msg->setText("Erreur d'insertion");
        msg->show();
    }

    con->disconnect();


    rand_Generator();
}


void Home::on_print_clicked()
{
    con->connect();
    qry1 = new QSqlQuery;
    qry1->prepare("select sum(montant) from facture");
    qry1->exec();
    while (qry1->next())
    {
       ui->Grand_total->setText(qry1->value(0).toString());
    }
    con->disconnect();

    con->connect();
    qry2 = new QSqlQuery;
    qry2->prepare("select * from facture");
    qry2->exec();

    while (qry2->next()) {

        ui->facture->setHtml(""
                             "<style>"
                                          "body{"
                                               " background-color: #F6F6F6; "
                                               " margin: 0;"
                                                "padding: 0;"
                                            "}"
                                            "h1,h2,h3,h4,h5,h6{"
                                                "margin: 0;"
                                                "padding: 0;"
                                            "}"
                                            "p{"
                                                "margin: 0;"
                                                "padding: 0;"
                                            "}"
                                            ".container{"
                                                "width: 80%;"
                                                "margin-right: auto;"
                                                "margin-left: auto;"
                                            "}"
                                            ".brand-section{"

                                               "padding: 10px 40px;"
                                            "}"
                                            ".logo{"
                                                "width: 50%;"
                                            "}"

                                            ".row{"
                                                "display: flex;"
                                                "flex-wrap: wrap;"
                                            "}"
                                            ".col-6{"
                                                "width: 50%;"
                                                "flex: 0 0 auto;"
                                            "}"
                                            ".text-white{"
                                                "color: #fff;"
                                            "}"
                                            ".company-details{"
                                                "float: right;"
                                                "text-align: right;"
                                            "}"
                                            ".body-section{"
                                                "padding: 16px;"
                                                "border: 1px solid gray;"
                                            "}"
                                            ".heading{"
                                                "font-size: 20px;"
                                                "margin-bottom: 08px;"
                                            "}"
                                            ".sub-heading{"
                                                "color: #262626;"
                                                "margin-bottom: 05px;"
                                            "}"
                                            "table{"
                                                "background-color: #fff;"
                                                "width: 100%;"
                                                "border-collapse: collapse;"
                                            "}"
                                            "table thead tr{"
                                                "border: 1px solid #111;"
                                                "background-color: #f2f2f2;"
                                            "}"
                                            "table td {"
                                                "vertical-align: middle !important;"
                                                "text-align: center;"
                                            "}"
                                            "table th, table td {"
                                                "padding-top: 08px;"
                                                "padding-bottom: 08px;"
                                            "}"
                                            ".table-bordered{"
                                                "box-shadow: 0px 0px 5px 0.5px gray;"
                                            "}"
                                            ".table-bordered td, .table-bordered th {"
                                                "border: 1px solid #dee2e6;"
                                            "}"
                                            ".text-right{"
                                                "text-align: end;"
                                            "}"
                                            ".w-20{"
                                                "width: 20%;"
                                            "}"
                                            ".center{"
                                              "text-align : center;"
                                              "}"
                             ".Rigth{"
                               "float: right;"

                               "width:300px;"
                               "}"
                                            ".float-right{"
                                                "float: right;"
                                           " }"
                                        "</style>"


                             "<div class=""container"">"
                             "<div class=""brand-section"">"
                                                                "<div class=""row"">"
                                                                     "<div>"
                                                                        "<img class=""img"" src=""C:\\Users\\Wakfu\\Documents\\Inventaire_cmd\\cmd_logo.png"" alt=""CMDT"" >"
                                                                     "</div>"
                                                                     "<div>"
                                                                         "<div class=""company-details"">"
                                                                             "<p class=""text-white""> sikasso le '"+ui->dateEdit->date().toString()+"'</p>"
                                                                             "<p class=""text-white""></p>"
                                                                             "<p class=""text-white""></p>"
                                                                         "</div>"
                                                                    "</div>"
                                                                 "</div>"
                                                             "</div>"

                                                                                                                                                     "<div align=""right"" class=""Right"">"
                                                                                                                                                  "<p >  sikasso le '"+ui->dateEdit->date().toString()+"'</p>"
                                                                                                                                                                "</div>"
                                 "<div class=""body-section"">"
                                    " <div class=""row"">"
                                        " <div class=""col-6"">"

                                             "<h2 class=""heading""></h2>"
                                            " <p class=""sub-heading"">FILIALE SUD SIKASSO</p>"
                                            " <p class=""sub-heading"">DIRECTION GENERALE SIKASSO</p>"
                                             "<p class=""sub-heading"">SERVICE INDUSTRIEL </p>"
                                             "<p class=""sub-heading"">C/DLT/Garage sko </p>"
                                         "</div>"
                                        " <div class=""Right"">"
                                           " <p class=""sub-heading""></p>"
                                            " <p class=""sub-heading""></p>"
                                             "<p class=""sub-heading""></p>"
                                            "<p class=""sub-heading""></p>"
                                         "</div>"
                                    "</div>"
                                 "</div>"

                                 "<div class=""body-section"">"

                                    "<div class=""center"">"
                                    "<h3 class=""heading""> BESOIN URGENT DE PIECES GARAGE DE SIKASSO/PARC ROULANT</h3>"
                                    "</div>"
                                     "<br>"
                                    "<table class=""table-bordered"">"
                                        "<thead>"
                                            "<tr>"
                                                "<th class=""w-20"">Date</th>"
                                                "<th class=""w-20"">code</th>"
                                                 "<th class=""w-20"">Réf_mag</th>"
                                                 "<th class=""w-20"">Désignation</th>"
                                                 "<th class=""w-20"">Fournisseurs</th>"
                                                 "<th class=""w-20"">Quantité</th>"
                                                 "<th class=""w-20"">Prix Unit</th>"
                                                 "<th class=""w-20"">Montant</th>"
                                                 "<th class=""w-20"">Affectations</th>"


                                             "</tr>"
                                         "</thead>"
                                         "<tbody>"
                                           "<tr>"
                                                 "<td>   '"+qry2->value(10).toString()+"'  </td>"
                                                 "<td>   '"+qry2->value(2).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(3).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(4).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(5).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(6).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(7).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(8).toString()+"'   </td>"
                                                 "<td>   '"+qry2->value(9).toString()+"'   </td>"

                                           "</tr>"

                                             "<tr>"
                                                 "<td colspan=""3"" class=""text-right"">Grand Totale</td>"
                                                 "<td>'"+ui->Grand_total->text()+"'FCFA</td>"
                                             "</tr>"
                                             "<tr>"
                                                 "<td colspan=""3"" class=""text-right""></td>"
                                                 "<td></td>"
                                             "</tr>"
                                             "<tr>"
                                                 "<td colspan=""3"" class=""text-right"">  Le Magasinier</td>"
                                                 "<td>LeC/Garage </td>"
                                                 "<td>LeC/DLT </td>"
                                                 "<td> LeC/SI </td>"
                                                 "<td>LeC/DCAIGS</td>"
                                                 "<td>Contrôle de Gestion </td>"
                                                 "<td>L'AG </p></td>"

                                             "</tr>"
                                         "</tbody>"
                                     "</table>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<br>"
                                     "<h2 class=""heading""> </h2>"
                                 "</div>"

                                 "<div class=""body-section"">"
                                     "<p>&copy; ""Copyright"" 2022 - YugoSoft. All rights reserved."
                                         "<a href=""https://" "class=""float-right""></a>"
                                     "</p>"
                                 "</div> "
                            "</div> "
                             );

    }

    con->disconnect();
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    if(dialog.exec() == QDialog::Rejected) return;
    ui->facture->print(&printer);

    con->connect();
    qry5 = new QSqlQuery;
    qry5->prepare("delete from facture");
    qry5->exec();
    con->disconnect();

}

void Home::rand_Generator()
{
    id_bon_rand = QRandomGenerator::global()->bounded(1000,1000000);
    c_rand = QString::number(id_bon_rand);
    ui->id_bon->setText(c_rand);
}

void Home::ret_lis_fournisseur()
{
    ui->list_fournisseur->clear();
    con->connect();
    qry3 = new QSqlQuery;
    qry3->prepare("select libelle from fournisseur");
    qDebug() << "Limit1";
    qry3->exec();

    while (qry3->next())
    {
        ui->list_fournisseur->addItem(qry3->value(0).toString());
    }

    con->disconnect();
    qDebug() << "Limit1";
}

void Home::on_refresh_clicked()
{
    /*con->connect();
    qry5 = new QSqlQuery;
    qry5->prepare("Copy fournisseur(libelle)"
                  "From 'C:\\Users\\Wakfu\\Documents\\build-Inventaire_cmd-Desktop_Qt_5_15_2_MSVC2019_64bit-Debug\\list.csv'"
                  "DELIMITER ','"
                  );
    qry5->exec();

    con->disconnect();
    QString fileL = "C:\\Users\\Wakfu\\Documents\\build-Inventaire_cmd-Desktop_Qt_5_15_2_MSVC2019_64bit-Debug\\list.csv";
    QFile::remove(fileL);
    */
    ret_lis_fournisseur();
}

void Home::loadDataTable()
{
    con->connect();
    qry1 = new QSqlQuery;
    model2 = new QSqlQueryModel;
    qry1->prepare("select * from piece");
   // qDebug() << "Limit";
    qry1->exec();
    qDebug() << "Limit";
    model2->setQuery("select * from piece");
    //qDebug() << "Limit";
    ui->data_table->setModel(model2);
   // qDebug() << "Limit";
    con->disconnect();
    //qDebug() << "Limit";
}

void Home::on_quantites_textChanged(const QString &arg1)
{
    try {

       if(!(ui->prix_u->text() == ""))
       {
           int prix = ui->prix_u->text().toInt();
           int quantite = ui->quantites->text().toInt();

           if(!(quantite ==0))
           {
               int montant = prix*quantite;
               QString montant_f = QString::number(montant, 'g', 25);
               ui->montant->setText(montant_f);
           }
       }


    } catch (...) {
    }
}


void Home::on_pushButton_2_clicked()
{
    //fournisseur four_w;
    //four_w.setModal(true);
    //four_w.exec();
}

