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
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionConnect;
    QAction *actionTimer_Reset;
    QAction *actionReset_Script_Table;
    QAction *actionExit;
    QAction *actionStep_Run;
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
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuControl;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(915, 502);
        MainWindow->setMaximumSize(QSize(915, 507));
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon4);
        actionTimer_Reset = new QAction(MainWindow);
        actionTimer_Reset->setObjectName(QStringLiteral("actionTimer_Reset"));
        actionTimer_Reset->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/timer_reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimer_Reset->setIcon(icon5);
        actionReset_Script_Table = new QAction(MainWindow);
        actionReset_Script_Table->setObjectName(QStringLiteral("actionReset_Script_Table"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_Script_Table->setIcon(icon6);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionStep_Run = new QAction(MainWindow);
        actionStep_Run->setObjectName(QStringLiteral("actionStep_Run"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/step.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_Run->setIcon(icon7);
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
        tableWidget->setDragEnabled(true);
        tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        tableWidget->setDefaultDropAction(Qt::MoveAction);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tabWidget = new QTabWidget(scrollableRegion);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(false);
        tabWidget->setGeometry(QRect(0, 0, 913, 231));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(310, 5, 251, 123));
        QFont font1;
        font1.setPointSize(9);
        groupBox_7->setFont(font1);
        groupBox_7->setFlat(false);
        groupBox_7->setCheckable(false);
        b2 = new QRadioButton(groupBox_7);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(30, 24, 51, 17));
        b2->setFont(font);
        b2->setAutoExclusive(false);
        b3 = new QRadioButton(groupBox_7);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(110, 24, 41, 17));
        b3->setFont(font);
        b3->setAutoExclusive(false);
        b4 = new QRadioButton(groupBox_7);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(184, 24, 41, 17));
        b4->setFont(font);
        b4->setAutoExclusive(false);
        b5 = new QRadioButton(groupBox_7);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(30, 57, 41, 17));
        b5->setFont(font);
        b5->setAutoExclusive(false);
        b6 = new QRadioButton(groupBox_7);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(110, 57, 51, 17));
        b6->setFont(font);
        b6->setAutoExclusive(false);
        b7 = new QRadioButton(groupBox_7);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(184, 57, 41, 17));
        b7->setFont(font);
        b7->setAutoExclusive(false);
        b8 = new QRadioButton(groupBox_7);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(30, 90, 41, 17));
        b8->setFont(font);
        b8->setAutoExclusive(false);
        b9 = new QRadioButton(groupBox_7);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(110, 90, 51, 17));
        b9->setFont(font);
        b9->setAutoExclusive(false);
        b10 = new QRadioButton(groupBox_7);
        b10->setObjectName(QStringLiteral("b10"));
        b10->setGeometry(QRect(184, 90, 51, 17));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(310, 134, 251, 57));
        groupBox->setFont(font1);
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
        treeWidget = new QTreeWidget(tab);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 12, 281, 179));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(580, 4, 311, 61));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 291, 31));
        textEdit->setReadOnly(true);
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(580, 68, 311, 61));
        textEdit_2 = new QTextEdit(groupBox_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 20, 291, 31));
        textEdit_2->setReadOnly(true);
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(580, 133, 311, 59));
        radioButton_3 = new QRadioButton(groupBox_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(33, 25, 61, 17));
        radioButton_4 = new QRadioButton(groupBox_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(113, 25, 51, 17));
        radioButton_5 = new QRadioButton(groupBox_4);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(190, 25, 101, 17));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 915, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuControl = new QMenu(menuBar);
        menuControl->setObjectName(QStringLiteral("menuControl"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuControl->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuControl->addAction(actionConnect);
        menuControl->addAction(actionPlay);
        menuControl->addAction(actionPause);
        menuControl->addSeparator();
        menuControl->addAction(actionTimer_Reset);
        menuControl->addAction(actionReset_Script_Table);
        menuControl->addAction(actionStep_Run);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "R2", 0));
        actionPlay->setText(QApplication::translate("MainWindow", "Run", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open Test Case", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionTimer_Reset->setText(QApplication::translate("MainWindow", "Reset Timer", 0));
        actionTimer_Reset->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0));
        actionReset_Script_Table->setText(QApplication::translate("MainWindow", "Reset Script Table", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionStep_Run->setText(QApplication::translate("MainWindow", "Step Run", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Command", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Delay (sec)", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Verify", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Result", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Comment", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "CONTROL", 0));
#ifndef QT_NO_TOOLTIP
        b2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Auxiliary Heat (Electric Heat) - Stage 1</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b2->setText(QApplication::translate("MainWindow", "W1", 0));
#ifndef QT_NO_TOOLTIP
        b3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Auxiliary Heat (Electric Heat) - Stage 2</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b3->setText(QApplication::translate("MainWindow", "W2", 0));
#ifndef QT_NO_TOOLTIP
        b4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Auxiliary Heat (Electric Heat) - Stage 3</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b4->setText(QApplication::translate("MainWindow", "W3", 0));
#ifndef QT_NO_TOOLTIP
        b5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Stage 1</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b5->setText(QApplication::translate("MainWindow", "Y1", 0));
#ifndef QT_NO_TOOLTIP
        b6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Stage 2</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b6->setText(QApplication::translate("MainWindow", "Y2", 0));
#ifndef QT_NO_TOOLTIP
        b7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Compressor Cooling or Compressor Heating</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b7->setText(QApplication::translate("MainWindow", "O", 0));
#ifndef QT_NO_TOOLTIP
        b8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Blower</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b8->setText(QApplication::translate("MainWindow", "G", 0));
#ifndef QT_NO_TOOLTIP
        b9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Dehumid when button is OFF</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b9->setText(QApplication::translate("MainWindow", "BK", 0));
#ifndef QT_NO_TOOLTIP
        b10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Power Source</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        b10->setText(QApplication::translate("MainWindow", "R", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "CONTROL MODE", 0));
#ifndef QT_NO_TOOLTIP
        radioButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Single Command</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        radioButton_2->setText(QApplication::translate("MainWindow", "Single", 0));
        pushButton->setText(QApplication::translate("MainWindow", "SEND", 0));
#ifndef QT_NO_TOOLTIP
        radioButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Grouped Command</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        radioButton->setText(QApplication::translate("MainWindow", "Group", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "TEST DIRECTORY", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "VERIFY", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "COMMENT", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "RESULT", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "PASS", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "FAIL", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "INCOMPLETE", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "CONTROL", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuControl->setTitle(QApplication::translate("MainWindow", "Control", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
