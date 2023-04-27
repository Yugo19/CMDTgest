#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include "piece.h"
#include "fournisseurs.h"
#include "server.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QThreadPool>
#include <QMessageBox>


namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();
    QString filename = "user.txt";
    const char *qry_fournisseur = "select libelle from fournisseur";
    const char *get_piece_data = "select * from piece";
    const char *update_request;
    void rand_Generator();
    void loadDataTable();

    void refresh();
    void ret_lis_fournisseur();
    quint32 id_bon_rand;
    QString c_rand;

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_lineEdit_10_textChanged(const QString &arg1);

    void on_search_bar_textChanged(const QString &arg1);

    void on_data_table_doubleClicked(const QModelIndex &index);

    void on_update_button_clicked();

    void on_Valider_clicked();

    void on_print_clicked();

    void on_refresh_clicked();

    void on_quantites_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::Home *ui;
    QSqlQuery *qry1;
    QSqlQuery *update_query;
    QSqlQuery *qry2;
    QSqlQuery *qry3;
    QSqlQuery *qry4;
    QSqlQuery *qry5;
    QSqlQuery *doubleclick_qry;
    QSqlDatabase *db;
    QSqlQueryModel *model1;
    QSqlQueryModel *model2;
    QSqlQueryModel *model3;
    QSqlQuery *qry;
    server *con = new server;
    piece *window_p;
    Fournisseurs *window_f = new Fournisseurs;
    QThreadPool *pool;
    QMessageBox *msg = new QMessageBox;
};

#endif // HOME_H
