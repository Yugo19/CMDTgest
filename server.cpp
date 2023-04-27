#include "server.h"
#include <QSql>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>

server::server(QWidget *parent)
    : QMainWindow{parent}
{

  qr = new QSqlQuery;
  db = new QSqlDatabase(QSqlDatabase::addDatabase(drivername));
}

void server::connect()
{
    //db =  QSqlDatabase::addDatabase(drivername);
    db->setHostName("localhost");
    db->setUserName("yugo");
    db->setDatabaseName("cmdt_db");
    db->setPassword("Maoene");

    if(!db->open())
    {
        /*QMessageBox *msg = new QMessageBox;
        msg->setText("Erreur de connection");
        msg->show();*/
        qDebug() << "Erreur db";
       // delete msg;
    }else
    {
        qDebug() << "connected";
    }
}

void server::disconnect()
{
    db->close();
    db->removeDatabase(drivername);
}

void server::executequeries(const char *request)
{
    qr->prepare(request);
}

server::~server()
{
    delete db;
    qDebug() << "Deleted";
}
