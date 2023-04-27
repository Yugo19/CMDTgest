#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSql>


class server : public QMainWindow
{
    Q_OBJECT
public:
    explicit server(QWidget *parent = nullptr);
    ~server();
    const char *drivername = "QPSQL";
    void executequeries(const char *request);
    void connect();
    void disconnect();

signals:

private:
    QSqlDatabase *db;
    QSqlQuery *qr;

};

#endif // SERVER_H
