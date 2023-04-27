#ifndef PIECE_H
#define PIECE_H

#include <QWidget>
#include <QSqlQuery>
#include <QSql>
#include "server.h"
#include <QMessageBox>


namespace Ui {
class piece;
}

class piece : public QWidget
{
    Q_OBJECT

public:
    explicit piece(QWidget *parent = nullptr);
    ~piece();

private slots:
    void on_pushButton_clicked();

private:
    Ui::piece *ui;
    QSqlQuery *qry;
    server *con;
    QMessageBox *msg;
};

#endif // PIECE_H
