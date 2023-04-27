#ifndef FOURNISSEURS_H
#define FOURNISSEURS_H

#include <QWidget>
//#include "server.h"
#include <QSqlQuery>
#include "inter.h"


namespace Ui {
class Fournisseurs;
}

class Fournisseurs : public QWidget
{
    Q_OBJECT

public:
    explicit Fournisseurs(QWidget *parent = nullptr);
    ~Fournisseurs();
    const char *list_fournisseur = "list.csv";
    const char *request = "insert into fournisseur(libelle) values(?)";

private slots:

    void on_connect_clicked();

    void on_pushButton_clicked();

private:
    Ui::Fournisseurs *ui;
    QSqlQuery *qry;
    Inter *wI = new Inter;
   // server *con = new server;
};

#endif // FOURNISSEURS_H
