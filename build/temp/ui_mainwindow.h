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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionSend;
    QAction *actionPause;
    QAction *actionSend_Repeatedly;
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionSoftware_Upgrade;
    QAction *actionOpen_Log_File;
    QAction *actionSave_Log_File;
    QAction *actionRecord;
    QAction *actionStop;
    QAction *actionPlay;
    QAction *actionExit;
    QAction *actionClean_Message_Table;
    QAction *actionOptions;
    QWidget *centralWidget;
    QWidget *scrollableRegion;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QComboBox *comboBox_9;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QComboBox *comboBox_10;
    QGroupBox *groupBox_5;
    QComboBox *comboBox_11;
    QLabel *label_12;
    QGroupBox *groupBox_6;
    QLabel *label_3;
    QLabel *label_13;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_4;
    QCustomPlot *customPlot;
    QWidget *tab_3;
    QWidget *tab_5;
    QWidget *widget;
    QGroupBox *groupBox_7;
    QComboBox *comboBox_4;
    QLabel *label_14;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_8;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber_3;
    QLabel *label_15;
    QMenuBar *menuBar;
    QMenu *menuSetup;
    QMenu *menuControl;
    QMenu *menuHelp;
    QMenu *menuFile;
    QMenu *menuScript_Record;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(953, 638);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon1);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        actionDisconnect->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon2);
        actionSend = new QAction(MainWindow);
        actionSend->setObjectName(QStringLiteral("actionSend"));
        actionSend->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSend->setIcon(icon3);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon4);
        actionSend_Repeatedly = new QAction(MainWindow);
        actionSend_Repeatedly->setObjectName(QStringLiteral("actionSend_Repeatedly"));
        actionSend_Repeatedly->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/continue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSend_Repeatedly->setIcon(icon5);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionSoftware_Upgrade = new QAction(MainWindow);
        actionSoftware_Upgrade->setObjectName(QStringLiteral("actionSoftware_Upgrade"));
        actionOpen_Log_File = new QAction(MainWindow);
        actionOpen_Log_File->setObjectName(QStringLiteral("actionOpen_Log_File"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Log_File->setIcon(icon6);
        actionSave_Log_File = new QAction(MainWindow);
        actionSave_Log_File->setObjectName(QStringLiteral("actionSave_Log_File"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Log_File->setIcon(icon7);
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QStringLiteral("actionRecord"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionClean_Message_Table = new QAction(MainWindow);
        actionClean_Message_Table->setObjectName(QStringLiteral("actionClean_Message_Table"));
        actionClean_Message_Table->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClean_Message_Table->setIcon(icon8);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font1;
        font1.setPointSize(10);
        centralWidget->setFont(font1);
        scrollableRegion = new QWidget(centralWidget);
        scrollableRegion->setObjectName(QStringLiteral("scrollableRegion"));
        scrollableRegion->setGeometry(QRect(0, 0, 951, 561));
        tabWidget = new QTabWidget(scrollableRegion);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(false);
        tabWidget->setGeometry(QRect(0, 0, 951, 561));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 321, 55));
        groupBox->setFont(font1);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 20, 164, 22));
        comboBox->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 47, 21));
        label_4->setFont(font1);
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 73, 321, 231));
        groupBox_2->setFont(font1);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 81, 21));
        label->setFont(font1);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 91, 16));
        label_2->setFont(font1);
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 70, 164, 22));
        comboBox_2->setFont(font1);
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(140, 110, 164, 22));
        comboBox_3->setFont(font1);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 30, 81, 21));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 31, 164, 20));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 73, 321, 231));
        groupBox_3->setFont(font1);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 30, 91, 20));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 70, 91, 16));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 110, 101, 16));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 150, 111, 16));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 190, 91, 16));
        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(140, 30, 164, 22));
        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(140, 70, 164, 22));
        comboBox_7 = new QComboBox(groupBox_3);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(140, 110, 164, 22));
        comboBox_8 = new QComboBox(groupBox_3);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(140, 150, 164, 22));
        comboBox_9 = new QComboBox(groupBox_3);
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));
        comboBox_9->setGeometry(QRect(140, 190, 164, 22));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 73, 321, 231));
        groupBox_4->setFont(font1);
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 30, 111, 21));
        comboBox_10 = new QComboBox(groupBox_4);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        comboBox_10->setGeometry(QRect(140, 30, 164, 22));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 73, 321, 231));
        groupBox_5->setFont(font1);
        comboBox_11 = new QComboBox(groupBox_5);
        comboBox_11->setObjectName(QStringLiteral("comboBox_11"));
        comboBox_11->setGeometry(QRect(140, 30, 164, 22));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 30, 111, 21));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(790, 30, 151, 81));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 51, 21));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 50, 51, 21));
        lcdNumber = new QLCDNumber(groupBox_6);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(70, 20, 71, 23));
        lcdNumber_2 = new QLCDNumber(groupBox_6);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(70, 50, 71, 23));
        tabWidget_3 = new QTabWidget(tab);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(350, 17, 421, 287));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        customPlot = new QCustomPlot(tab_4);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(-1, -1, 418, 263));
        tabWidget_3->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        widget = new QWidget(tab_5);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 421, 261));
        tabWidget_3->addTab(tab_5, QString());
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 73, 321, 231));
        groupBox_7->setFont(font1);
        comboBox_4 = new QComboBox(groupBox_7);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(140, 30, 164, 22));
        comboBox_4->setFont(font1);
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 30, 91, 21));
        label_14->setFont(font1);
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 320, 931, 211));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(-1, -1, 931, 191));
        tableWidget->setFont(font1);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setMinimumSectionSize(150);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tabWidget_2->addTab(tab_2, QString());
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(790, 120, 151, 81));
        horizontalSlider = new QSlider(groupBox_8);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setGeometry(QRect(10, 50, 131, 22));
        horizontalSlider->setMinimum(990);
        horizontalSlider->setMaximum(5300);
        horizontalSlider->setSingleStep(500);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lcdNumber_3 = new QLCDNumber(groupBox_8);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(10, 20, 91, 23));
        lcdNumber_3->setFrameShape(QFrame::Box);
        lcdNumber_3->setLineWidth(1);
        lcdNumber_3->setDigitCount(5);
        lcdNumber_3->setProperty("value", QVariant(1000));
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(110, 20, 31, 21));
        label_15->setFont(font1);
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 953, 21));
        menuSetup = new QMenu(menuBar);
        menuSetup->setObjectName(QStringLiteral("menuSetup"));
        menuControl = new QMenu(menuBar);
        menuControl->setObjectName(QStringLiteral("menuControl"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuScript_Record = new QMenu(menuBar);
        menuScript_Record->setObjectName(QStringLiteral("menuScript_Record"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuControl->menuAction());
        menuBar->addAction(menuScript_Record->menuAction());
        menuBar->addAction(menuSetup->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSetup->addAction(actionConnect);
        menuSetup->addAction(actionDisconnect);
        menuSetup->addSeparator();
        menuSetup->addAction(actionOptions);
        menuControl->addAction(actionSend);
        menuControl->addAction(actionPause);
        menuControl->addAction(actionSend_Repeatedly);
        menuControl->addSeparator();
        menuControl->addAction(actionClean_Message_Table);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionSoftware_Upgrade);
        menuFile->addAction(actionOpen_Log_File);
        menuFile->addAction(actionSave_Log_File);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuScript_Record->addAction(actionRecord);
        menuScript_Record->addAction(actionStop);
        menuScript_Record->addAction(actionPlay);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sparky - Ver d0.0.1", 0));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect to Simulation Engine", 0));
#endif // QT_NO_TOOLTIP
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect Simulation Engine", 0));
#endif // QT_NO_TOOLTIP
        actionDisconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        actionSend->setText(QApplication::translate("MainWindow", "Send", 0));
#ifndef QT_NO_TOOLTIP
        actionSend->setToolTip(QApplication::translate("MainWindow", "Send Message", 0));
#endif // QT_NO_TOOLTIP
        actionSend->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
#ifndef QT_NO_TOOLTIP
        actionPause->setToolTip(QApplication::translate("MainWindow", "Pause Sending Message", 0));
#endif // QT_NO_TOOLTIP
        actionPause->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionSend_Repeatedly->setText(QApplication::translate("MainWindow", "Send Repeatedly", 0));
#ifndef QT_NO_TOOLTIP
        actionSend_Repeatedly->setToolTip(QApplication::translate("MainWindow", "Send Message Repeatedly", 0));
#endif // QT_NO_TOOLTIP
        actionSend_Repeatedly->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionSoftware_Upgrade->setText(QApplication::translate("MainWindow", "Software Upgrade", 0));
        actionOpen_Log_File->setText(QApplication::translate("MainWindow", "Open Log File", 0));
        actionSave_Log_File->setText(QApplication::translate("MainWindow", "Save Log File", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_Log_File->setToolTip(QApplication::translate("MainWindow", "Save Log File", 0));
#endif // QT_NO_TOOLTIP
        actionRecord->setText(QApplication::translate("MainWindow", "Record", 0));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionClean_Message_Table->setText(QApplication::translate("MainWindow", "Clean Message Viewer", 0));
#ifndef QT_NO_TOOLTIP
        actionClean_Message_Table->setToolTip(QApplication::translate("MainWindow", "Clean Message Viewer", 0));
#endif // QT_NO_TOOLTIP
        actionOptions->setText(QApplication::translate("MainWindow", "Preferences", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Message", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ASPSensorMessage", 0)
         << QApplication::translate("MainWindow", "EVCOpModeMessage", 0)
         << QApplication::translate("MainWindow", "CompressorMessage", 0)
         << QApplication::translate("MainWindow", "StepperMotorCommand", 0)
         << QApplication::translate("MainWindow", "StepperMotorStatus", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "ID", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Payload Parameters", 0));
        label->setText(QApplication::translate("MainWindow", "Sensor ID", 0));
        label_2->setText(QApplication::translate("MainWindow", "Sensor Status", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Ambient Temperature", 0)
         << QApplication::translate("MainWindow", "Dome Temperature", 0)
         << QApplication::translate("MainWindow", "Suction Temperature", 0)
         << QApplication::translate("MainWindow", "Suction Pressure", 0)
         << QApplication::translate("MainWindow", "Discharge Pressure", 0)
         << QApplication::translate("MainWindow", "Liquid Temperature", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Healthy", 0)
         << QApplication::translate("MainWindow", "Faulty", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "Sensor Value", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Payload Parameters", 0));
        label_6->setText(QApplication::translate("MainWindow", "Operating Mode", 0));
        label_7->setText(QApplication::translate("MainWindow", "Demand Status", 0));
        label_8->setText(QApplication::translate("MainWindow", "Limp Along Status", 0));
        label_9->setText(QApplication::translate("MainWindow", "LSPP Trip Status", 0));
        label_10->setText(QApplication::translate("MainWindow", "ForceOpen", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Cool", 0)
         << QApplication::translate("MainWindow", "Heat", 0)
         << QApplication::translate("MainWindow", "Defrost", 0)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Demand Absent", 0)
         << QApplication::translate("MainWindow", "Demand Present", 0)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NotSet", 0)
         << QApplication::translate("MainWindow", "LimpAlongSet", 0)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NotSet", 0)
         << QApplication::translate("MainWindow", "LSPPTripSet", 0)
        );
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NotSet", 0)
         << QApplication::translate("MainWindow", "ForceOpenSet", 0)
        );
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Payload Parameters", 0));
        label_11->setText(QApplication::translate("MainWindow", "CompressorActive", 0));
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NotSet", 0)
         << QApplication::translate("MainWindow", "Set", 0)
        );
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Payload Parameters", 0));
        comboBox_11->clear();
        comboBox_11->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SetCommand", 0)
         << QApplication::translate("MainWindow", "ResetCommand", 0)
         << QApplication::translate("MainWindow", "ReinitCommand", 0)
         << QApplication::translate("MainWindow", "DiagInitCommand", 0)
        );
        label_12->setText(QApplication::translate("MainWindow", "MotorError", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Motor Position", 0));
        label_3->setText(QApplication::translate("MainWindow", "Target", 0));
        label_13->setText(QApplication::translate("MainWindow", "Current", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("MainWindow", "2D Graph", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("MainWindow", "3D Graph", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "3D Viewer", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Payload Parameters", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "OnTarget", 0)
         << QApplication::translate("MainWindow", "ResetComplete", 0)
         << QApplication::translate("MainWindow", "MotorError", 0)
        );
        label_14->setText(QApplication::translate("MainWindow", "MotorStatus", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Time", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Sender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Message", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Hexadecimal Value", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "Message Viewer", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Delay", 0));
        label_15->setText(QApplication::translate("MainWindow", "msec", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        menuSetup->setTitle(QApplication::translate("MainWindow", "Setting", 0));
        menuControl->setTitle(QApplication::translate("MainWindow", "Run", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuScript_Record->setTitle(QApplication::translate("MainWindow", "Test", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
