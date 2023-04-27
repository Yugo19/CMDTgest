#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "server.h"
#include <QSqlQuery>
#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <iostream>
#include <QMessageBox>
#include <QSqlDatabase>
#include "home.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowIcon(QIcon("C:\\Users\\Wakfu\\Documents\\Inventaire_cmd\\cmdt.ico"));
    /*
    con.connect();
    QSqlQuery *requet = new QSqlQuery;
    requet->prepare("select libelle from fournisseur");
    requet->exec();
    while (requet->next())
    {
        qDebug() << requet->value(0).toString() << requet->value(1).toString();
        //qDebug() << requet->value(1).toString();

    }
    con.disconnect();
    */

    this->setWindowTitle("Connection");

}

MainWindow::~MainWindow()
{
    delete ui;
   // qDebug() << "ui deleted";
}


void MainWindow::on_pushButton_clicked()
{
   con.connect();
   qry = new QSqlQuery();

   qry->prepare("select * from users where Nom='"+ui->lineEdit_2->text()+"' and mot_passe='"+ui->lineEdit->text()+"'");
   qry->exec();

   if(qry->numRowsAffected() ==1)
   {


       con.disconnect();
       window = new Home();
       window->show();
       //delete ui;
       this->close();

       QFile file(filename);

           if (!file.open(QIODevice::ReadOnly | QIODevice::Text | QIODevice::ReadWrite))
           {
               qDebug() << "FAILED TO CREATE FILE / FILE DOES NOT EXIST";
               msg= new QMessageBox;
               msg->setText("Erreur {000x1}");
               msg->show();

           }else
           {
               QTextStream stream(&file);
               stream << ui->lineEdit_2->text();
               stream.flush();
               w = 1;


           }


   }else
   {
       qDebug() << "No query exec";
       QMessageBox *msg = new QMessageBox();
       msg->setText("Erreur veillez réeassyer encore");
       msg->show();

   }

  con.disconnect();



  qDebug() << w ;
  //if(w ==1)
  //{
  //}


}

