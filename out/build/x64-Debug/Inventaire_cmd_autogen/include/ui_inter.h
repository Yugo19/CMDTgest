/********************************************************************************
** Form generated from reading UI file 'inter.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTER_H
#define UI_INTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inter
{
public:

    void setupUi(QWidget *Inter)
    {
        if (Inter->objectName().isEmpty())
            Inter->setObjectName(QString::fromUtf8("Inter"));
        Inter->resize(281, 98);

        retranslateUi(Inter);

        QMetaObject::connectSlotsByName(Inter);
    } // setupUi

    void retranslateUi(QWidget *Inter)
    {
        Inter->setWindowTitle(QCoreApplication::translate("Inter", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inter: public Ui_Inter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTER_H
