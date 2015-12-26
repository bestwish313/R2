/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRecord;
    QAction *actionStop;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionNew;
    QAction *actionReset_Script;
    QWidget *centralWidget;
    QWidget *scrollableRegion;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_7;
    QRadioButton *b2;
    QRadioButton *b3;
    QRadioButton *b4;
    QRadioButton *b5;
    QRadioButton *b6;
    QRadioButton *b7;
    QRadioButton *b8;
    QRadioButton *b9;
    QRadioButton *b10;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QGroupBox *groupBox_8;
    QLCDNumber *lcdNumber;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_6;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuControl;
    QMenu *menuRecord;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(915, 502);
        MainWindow->setMaximumSize(QSize(915, 507));
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QStringLiteral("actionRecord"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon2);
        actionReset_Script = new QAction(MainWindow);
        actionReset_Script->setObjectName(QStringLiteral("actionReset_Script"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_Script->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollableRegion = new QWidget(centralWidget);
        scrollableRegion->setObjectName(QStringLiteral("scrollableRegion"));
        scrollableRegion->setGeometry(QRect(0, 0, 913, 421));
        tableWidget = new QTableWidget(scrollableRegion);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 230, 911, 191));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tabWidget = new QTabWidget(scrollableRegion);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 913, 231));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(310, 10, 251, 123));
        groupBox_7->setFont(font);
        groupBox_7->setFlat(false);
        groupBox_7->setCheckable(false);
        b2 = new QRadioButton(groupBox_7);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(30, 26, 51, 17));
        b2->setFont(font);
        b2->setAutoExclusive(false);
        b3 = new QRadioButton(groupBox_7);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(110, 26, 41, 17));
        b3->setFont(font);
        b3->setAutoExclusive(false);
        b4 = new QRadioButton(groupBox_7);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(184, 26, 41, 17));
        b4->setFont(font);
        b4->setAutoExclusive(false);
        b5 = new QRadioButton(groupBox_7);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(30, 59, 41, 17));
        b5->setFont(font);
        b5->setAutoExclusive(false);
        b6 = new QRadioButton(groupBox_7);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(110, 59, 51, 17));
        b6->setFont(font);
        b6->setAutoExclusive(false);
        b7 = new QRadioButton(groupBox_7);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(184, 59, 41, 17));
        b7->setFont(font);
        b7->setAutoExclusive(false);
        b8 = new QRadioButton(groupBox_7);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(30, 92, 41, 17));
        b8->setFont(font);
        b8->setAutoExclusive(false);
        b9 = new QRadioButton(groupBox_7);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(110, 92, 51, 17));
        b9->setFont(font);
        b9->setAutoExclusive(false);
        b10 = new QRadioButton(groupBox_7);
        b10->setObjectName(QStringLiteral("b10"));
        b10->setGeometry(QRect(184, 92, 51, 17));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(580, 10, 311, 58));
        groupBox_2->setCheckable(true);
        groupBox_2->setChecked(false);
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(17, 20, 281, 26));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(580, 76, 311, 45));
        groupBox_3->setCheckable(true);
        groupBox_3->setChecked(false);
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 19, 51, 17));
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(130, 19, 51, 17));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(220, 19, 71, 17));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(580, 130, 311, 58));
        groupBox_4->setCheckable(true);
        groupBox_4->setChecked(false);
        textEdit_2 = new QTextEdit(groupBox_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(17, 20, 281, 26));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(310, 140, 251, 51));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(18, 23, 71, 16));
        radioButton_2->setChecked(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(186, 20, 51, 23));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(108, 23, 61, 16));
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 281, 71));
        groupBox_8->setCheckable(true);
        lcdNumber = new QLCDNumber(groupBox_8);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 20, 261, 41));
        lcdNumber->setDigitCount(14);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(470, 10, 431, 181));
        treeWidget = new QTreeWidget(groupBox_5);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 411, 151));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 231, 51));
        radioButton_6 = new QRadioButton(groupBox_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(26, 23, 101, 17));
        radioButton_6->setChecked(true);
        radioButton_7 = new QRadioButton(groupBox_6);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(151, 23, 61, 17));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 915, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuControl = new QMenu(menuBar);
        menuControl->setObjectName(QStringLiteral("menuControl"));
        menuRecord = new QMenu(menuBar);
        menuRecord->setObjectName(QStringLiteral("menuRecord"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuControl->menuAction());
        menuBar->addAction(menuRecord->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuControl->addAction(actionPlay);
        menuControl->addAction(actionPause);
        menuRecord->addAction(actionRecord);
        menuRecord->addAction(actionStop);
        menuRecord->addSeparator();
        menuRecord->addAction(actionReset_Script);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "R2", 0));
        actionRecord->setText(QApplication::translate("MainWindow", "Record", 0));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open Test Case", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionReset_Script->setText(QApplication::translate("MainWindow", "Reset Script", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Command", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Wait (msec)", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Verify", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Result", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Comment", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "24V CONTROL BOX", 0));
        b2->setText(QApplication::translate("MainWindow", "W1", 0));
        b3->setText(QApplication::translate("MainWindow", "W2", 0));
        b4->setText(QApplication::translate("MainWindow", "W3", 0));
        b5->setText(QApplication::translate("MainWindow", "Y1", 0));
        b6->setText(QApplication::translate("MainWindow", "Y2", 0));
        b7->setText(QApplication::translate("MainWindow", "O", 0));
        b8->setText(QApplication::translate("MainWindow", "G", 0));
        b9->setText(QApplication::translate("MainWindow", "BK", 0));
        b10->setText(QApplication::translate("MainWindow", "R", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "VERIFY", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "RESULT", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "PASS", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "FAIL", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "INVALID", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "COMMENT", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "COMMAND MODE", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Normal", 0));
        pushButton->setText(QApplication::translate("MainWindow", "SEND", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Group", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "TIMER (msec)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "CONTROL", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "TEST DIRECTORY", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Directory", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "RUN MODOE", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "SINGLESHOT", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "LOOP", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "SETUP", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuControl->setTitle(QApplication::translate("MainWindow", "Control", 0));
        menuRecord->setTitle(QApplication::translate("MainWindow", "Record", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
