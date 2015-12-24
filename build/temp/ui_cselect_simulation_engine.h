/********************************************************************************
** Form generated from reading UI file 'cselect_simulation_engine.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSELECT_SIMULATION_ENGINE_H
#define UI_CSELECT_SIMULATION_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_CSELECT_SIMULATION_ENGINE
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QToolButton *toolButton;
    QLabel *label_4;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *CSELECT_SIMULATION_ENGINE)
    {
        if (CSELECT_SIMULATION_ENGINE->objectName().isEmpty())
            CSELECT_SIMULATION_ENGINE->setObjectName(QStringLiteral("CSELECT_SIMULATION_ENGINE"));
        CSELECT_SIMULATION_ENGINE->resize(361, 289);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CSELECT_SIMULATION_ENGINE->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(CSELECT_SIMULATION_ENGINE);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 240, 171, 41));
        QFont font;
        font.setPointSize(10);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(CSELECT_SIMULATION_ENGINE);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 19, 321, 51));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 10, 81, 41));
        radioButton->setFont(font);
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(200, 10, 91, 41));
        radioButton_2->setFont(font);
        groupBox_2 = new QGroupBox(CSELECT_SIMULATION_ENGINE);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 80, 321, 155));
        groupBox_2->setFont(font);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 47, 21));
        QFont font1;
        font1.setPointSize(9);
        label_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 90, 221, 20));
        lineEdit_2->setFont(font1);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 90, 71, 20));
        label->setFont(font1);
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 29, 221, 22));
        comboBox->setFont(font);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 60, 191, 20));
        lineEdit->setFont(font1);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 91, 21));
        label_2->setFont(font1);
        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(280, 59, 31, 22));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        label_4 = new QLabel(CSELECT_SIMULATION_ENGINE);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 202, 47, 16));
        label_4->setFont(font);
        lineEdit_3 = new QLineEdit(CSELECT_SIMULATION_ENGINE);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 200, 221, 20));
        lineEdit_3->setFont(font1);

        retranslateUi(CSELECT_SIMULATION_ENGINE);
        QObject::connect(buttonBox, SIGNAL(accepted()), CSELECT_SIMULATION_ENGINE, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CSELECT_SIMULATION_ENGINE, SLOT(reject()));

        QMetaObject::connectSlotsByName(CSELECT_SIMULATION_ENGINE);
    } // setupUi

    void retranslateUi(QDialog *CSELECT_SIMULATION_ENGINE)
    {
        CSELECT_SIMULATION_ENGINE->setWindowTitle(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Simulation Engine Selector", 0));
        groupBox->setTitle(QApplication::translate("CSELECT_SIMULATION_ENGINE", "CONNECTION", 0));
        radioButton->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Local", 0));
        radioButton_2->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Remote", 0));
        groupBox_2->setTitle(QApplication::translate("CSELECT_SIMULATION_ENGINE", "ENGINE PROPERTY", 0));
        label_3->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Engine", 0));
        lineEdit_2->setText(QString());
        label->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Host Name", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CSELECT_SIMULATION_ENGINE", "EVC", 0)
        );
        label_2->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Type", 0));
        toolButton->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "...", 0));
        label_4->setText(QApplication::translate("CSELECT_SIMULATION_ENGINE", "Port", 0));
        lineEdit_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CSELECT_SIMULATION_ENGINE: public Ui_CSELECT_SIMULATION_ENGINE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSELECT_SIMULATION_ENGINE_H
