#ifndef INTER_H
#define INTER_H

#include <QWidget>

namespace Ui {
class Inter;
}

class Inter : public QWidget
{
    Q_OBJECT

public:
    explicit Inter(QWidget *parent = nullptr);
    ~Inter();

private:
    Ui::Inter *ui;
};

#endif // INTER_H
