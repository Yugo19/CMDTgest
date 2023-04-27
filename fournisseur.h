#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QDialog>
#include "server.h"

namespace Ui {
class fournisseur;
}

class fournisseur : public QDialog
{
    Q_OBJECT

public:
    explicit fournisseur(QWidget *parent = nullptr);
    ~fournisseur();

private:
    Ui::fournisseur *ui;
    //server *db = new server;
};

#endif // FOURNISSEUR_H
