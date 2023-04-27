#include "inter.h"
#include "ui_inter.h"
#include <QTimer>

Inter::Inter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inter)
{
    ui->setupUi(this);
    QTimer timer;
    timer.start(10);
    if(!timer.isActive())
    {

    }
}

Inter::~Inter()
{
    delete ui;
}
