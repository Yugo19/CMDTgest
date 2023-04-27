/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QTableView *data_table;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *code;
    QLineEdit *ref_mag;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Ref_pcs;
    QLineEdit *designation;
    QLineEdit *quantites;
    QLineEdit *prix_u;
    QLineEdit *montant;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QComboBox *list_fournisseur;
    QLineEdit *casier;
    QLineEdit *unite;
    QLineEdit *affectation_veh;
    QPushButton *Valider;
    QPushButton *print;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *id;
    QLineEdit *user;
    QDateEdit *dateEdit;
    QPushButton *refresh;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search_bar;
    QGroupBox *groupBox_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *facture;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *update_button;
    QPushButton *archive;
    QPushButton *pushButton_5;
    QLineEdit *Grand_total;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *libelle;
    QPushButton *pushButton_6;
    QLineEdit *id_bon;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(1116, 891);
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 167, 82);"));
        data_table = new QTableView(Home);
        data_table->setObjectName(QString::fromUtf8("data_table"));
        data_table->setGeometry(QRect(60, 410, 981, 441));
        data_table->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(Home);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 40, 591, 351));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 200, 151, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        code = new QLineEdit(verticalLayoutWidget);
        code->setObjectName(QString::fromUtf8("code"));
        code->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        code->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(code);

        ref_mag = new QLineEdit(verticalLayoutWidget);
        ref_mag->setObjectName(QString::fromUtf8("ref_mag"));
        ref_mag->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        ref_mag->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ref_mag);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(210, 20, 171, 321));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Ref_pcs = new QLineEdit(verticalLayoutWidget_2);
        Ref_pcs->setObjectName(QString::fromUtf8("Ref_pcs"));
        Ref_pcs->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        Ref_pcs->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Ref_pcs);

        designation = new QLineEdit(verticalLayoutWidget_2);
        designation->setObjectName(QString::fromUtf8("designation"));
        designation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        designation->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(designation);

        quantites = new QLineEdit(verticalLayoutWidget_2);
        quantites->setObjectName(QString::fromUtf8("quantites"));
        quantites->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        quantites->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(quantites);

        prix_u = new QLineEdit(verticalLayoutWidget_2);
        prix_u->setObjectName(QString::fromUtf8("prix_u"));
        prix_u->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        prix_u->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(prix_u);

        montant = new QLineEdit(verticalLayoutWidget_2);
        montant->setObjectName(QString::fromUtf8("montant"));
        montant->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        montant->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(montant);

        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(400, 20, 161, 321));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        list_fournisseur = new QComboBox(verticalLayoutWidget_3);
        list_fournisseur->setObjectName(QString::fromUtf8("list_fournisseur"));
        list_fournisseur->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(list_fournisseur);

        casier = new QLineEdit(verticalLayoutWidget_3);
        casier->setObjectName(QString::fromUtf8("casier"));
        casier->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        casier->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(casier);

        unite = new QLineEdit(verticalLayoutWidget_3);
        unite->setObjectName(QString::fromUtf8("unite"));
        unite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        unite->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(unite);

        affectation_veh = new QLineEdit(verticalLayoutWidget_3);
        affectation_veh->setObjectName(QString::fromUtf8("affectation_veh"));
        affectation_veh->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        affectation_veh->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(affectation_veh);

        Valider = new QPushButton(verticalLayoutWidget_3);
        Valider->setObjectName(QString::fromUtf8("Valider"));
        Valider->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout_3->addWidget(Valider);

        print = new QPushButton(verticalLayoutWidget_3);
        print->setObjectName(QString::fromUtf8("print"));
        print->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout_3->addWidget(print);

        verticalLayoutWidget_6 = new QWidget(groupBox);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 30, 151, 171));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        id = new QLineEdit(verticalLayoutWidget_6);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout_6->addWidget(id);

        user = new QLineEdit(verticalLayoutWidget_6);
        user->setObjectName(QString::fromUtf8("user"));
        user->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(user);

        dateEdit = new QDateEdit(verticalLayoutWidget_6);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(dateEdit);

        refresh = new QPushButton(groupBox);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(560, 40, 21, 21));
        groupBox_2 = new QGroupBox(Home);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(680, 250, 361, 141));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"color: rgb(0, 0, 0);"));
        horizontalLayoutWidget = new QWidget(groupBox_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 40, 301, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        search_bar = new QLineEdit(horizontalLayoutWidget);
        search_bar->setObjectName(QString::fromUtf8("search_bar"));
        search_bar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(search_bar);

        groupBox_3 = new QGroupBox(Home);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(680, 40, 361, 191));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"color: rgb(0, 0, 0);"));
        tabWidget = new QTabWidget(groupBox_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 301, 151));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        facture = new QTextEdit(tab);
        facture->setObjectName(QString::fromUtf8("facture"));
        facture->setGeometry(QRect(210, 10, 41, 21));
        facture->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(60, 10, 161, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        update_button = new QPushButton(verticalLayoutWidget_4);
        update_button->setObjectName(QString::fromUtf8("update_button"));
        update_button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout_4->addWidget(update_button);

        archive = new QPushButton(verticalLayoutWidget_4);
        archive->setObjectName(QString::fromUtf8("archive"));
        archive->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout_4->addWidget(archive);

        pushButton_5 = new QPushButton(verticalLayoutWidget_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout_4->addWidget(pushButton_5);

        Grand_total = new QLineEdit(tab);
        Grand_total->setObjectName(QString::fromUtf8("Grand_total"));
        Grand_total->setGeometry(QRect(220, 60, 51, 24));
        Grand_total->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_5 = new QWidget(tab_2);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(90, 10, 131, 101));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        libelle = new QLineEdit(verticalLayoutWidget_5);
        libelle->setObjectName(QString::fromUtf8("libelle"));
        libelle->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));
        libelle->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(libelle);

        pushButton_6 = new QPushButton(verticalLayoutWidget_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout_5->addWidget(pushButton_6);

        tabWidget->addTab(tab_2, QString());
        id_bon = new QLineEdit(Home);
        id_bon->setObjectName(QString::fromUtf8("id_bon"));
        id_bon->setGeometry(QRect(60, 860, 113, 24));
        pushButton_2 = new QPushButton(Home);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 860, 80, 24));
        pushButton = new QPushButton(Home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 860, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));

        retranslateUi(Home);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Home", "Saisie", nullptr));
        code->setPlaceholderText(QCoreApplication::translate("Home", "code", nullptr));
        ref_mag->setInputMask(QString());
        ref_mag->setPlaceholderText(QCoreApplication::translate("Home", "R\303\251f MAg", nullptr));
        Ref_pcs->setPlaceholderText(QCoreApplication::translate("Home", "R\303\251f_pcs", nullptr));
        designation->setPlaceholderText(QCoreApplication::translate("Home", "D\303\251signations", nullptr));
        quantites->setInputMask(QString());
        quantites->setPlaceholderText(QCoreApplication::translate("Home", "Quantit\303\251s", nullptr));
        prix_u->setPlaceholderText(QCoreApplication::translate("Home", "Prix(FoxPro)", nullptr));
        montant->setPlaceholderText(QCoreApplication::translate("Home", "Montants", nullptr));
        list_fournisseur->setPlaceholderText(QCoreApplication::translate("Home", "Fournisseurs", nullptr));
        casier->setPlaceholderText(QCoreApplication::translate("Home", "casier", nullptr));
        unite->setPlaceholderText(QCoreApplication::translate("Home", "Unit\303\251s", nullptr));
        affectation_veh->setPlaceholderText(QCoreApplication::translate("Home", "Affection/veh", nullptr));
        Valider->setText(QCoreApplication::translate("Home", "Valider", nullptr));
        print->setText(QCoreApplication::translate("Home", "Imprimer", nullptr));
        refresh->setText(QCoreApplication::translate("Home", "R", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Home", "Recherche", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Home", "Actions", nullptr));
        update_button->setText(QCoreApplication::translate("Home", "Mettre \303\240 jour", nullptr));
        archive->setText(QCoreApplication::translate("Home", "Archiver", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Home", "Nouvelle pi\303\250ce", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Home", "Pi\303\250ce", nullptr));
        libelle->setPlaceholderText(QCoreApplication::translate("Home", "Founisseur", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Home", "Nouveau fournisseur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Home", "Nouveau founisseur", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Home", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("Home", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
