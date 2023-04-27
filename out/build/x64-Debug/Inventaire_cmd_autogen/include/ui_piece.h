/********************************************************************************
** Form generated from reading UI file 'piece.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIECE_H
#define UI_PIECE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_piece
{
public:
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QDateEdit *dateEdit;
    QLineEdit *code;
    QLineEdit *Ref_mag;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Ref_pcs;
    QLineEdit *Designation;
    QLineEdit *prix_u;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *unites;
    QLineEdit *casiers;
    QLineEdit *lineEdit_9;

    void setupUi(QWidget *piece)
    {
        if (piece->objectName().isEmpty())
            piece->setObjectName(QString::fromUtf8("piece"));
        piece->resize(885, 305);
        piece->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 94, 45);"));
        pushButton = new QPushButton(piece);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 240, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color:rgb(0, 0, 0)"));
        verticalLayoutWidget = new QWidget(piece);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 50, 201, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(verticalLayoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(dateEdit);

        code = new QLineEdit(verticalLayoutWidget);
        code->setObjectName(QString::fromUtf8("code"));
        code->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(code);

        Ref_mag = new QLineEdit(verticalLayoutWidget);
        Ref_mag->setObjectName(QString::fromUtf8("Ref_mag"));
        Ref_mag->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(Ref_mag);

        verticalLayoutWidget_2 = new QWidget(piece);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(310, 50, 221, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Ref_pcs = new QLineEdit(verticalLayoutWidget_2);
        Ref_pcs->setObjectName(QString::fromUtf8("Ref_pcs"));
        Ref_pcs->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(Ref_pcs);

        Designation = new QLineEdit(verticalLayoutWidget_2);
        Designation->setObjectName(QString::fromUtf8("Designation"));
        Designation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(Designation);

        prix_u = new QLineEdit(verticalLayoutWidget_2);
        prix_u->setObjectName(QString::fromUtf8("prix_u"));
        prix_u->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(prix_u);

        verticalLayoutWidget_3 = new QWidget(piece);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(610, 50, 231, 141));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        unites = new QLineEdit(verticalLayoutWidget_3);
        unites->setObjectName(QString::fromUtf8("unites"));
        unites->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(unites);

        casiers = new QLineEdit(verticalLayoutWidget_3);
        casiers->setObjectName(QString::fromUtf8("casiers"));
        casiers->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(casiers);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lineEdit_9);


        retranslateUi(piece);

        QMetaObject::connectSlotsByName(piece);
    } // setupUi

    void retranslateUi(QWidget *piece)
    {
        piece->setWindowTitle(QCoreApplication::translate("piece", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("piece", "Valider", nullptr));
        code->setPlaceholderText(QCoreApplication::translate("piece", "code", nullptr));
        Ref_mag->setPlaceholderText(QCoreApplication::translate("piece", "R\303\251f Mag", nullptr));
        Ref_pcs->setPlaceholderText(QCoreApplication::translate("piece", "R\303\251f-PCS", nullptr));
        Designation->setPlaceholderText(QCoreApplication::translate("piece", "D\303\251signation", nullptr));
        prix_u->setPlaceholderText(QCoreApplication::translate("piece", "Prix(PFoxPro)", nullptr));
        unites->setPlaceholderText(QCoreApplication::translate("piece", "Unit\303\251s", nullptr));
        casiers->setPlaceholderText(QCoreApplication::translate("piece", "Casiers", nullptr));
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("piece", "Quantit\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class piece: public Ui_piece {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIECE_H
