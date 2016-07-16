#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "creadwritefile.h"

#include <QScrollArea>
#include <QDateTime>
#include <QScrollBar>
#include <QDebug>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Power(false),
    m_script(""),
    m_delay(0),
    m_row(invalidRow),
    m_col(0),
    connected(false),
    timer(new QElapsedTimer)
{
    ui->setupUi(this);

    InitializeMainWindowScrollBar();
    InitializeToolbar();
    InitializeUi();
}

MainWindow::~MainWindow()
{
    delete timer;
    delete ui;
}


void
MainWindow::
WriteToArduino(const QString value) {
    arduino->isWritable() ? arduino->write(value.toStdString().c_str()) :
                            QMessageBox::critical(this,"error","Couldn't write to arduino board");
}

void
MainWindow::
AddCommandToTable(const int index, const QString script) {

    if (ui->radioButton->isChecked()) {
        m_script.append(script).append(",");
    }
    else if (ui->radioButton_2->isChecked()) {

        // ADD A BLANK ROW
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());

        // INITIALIZE CELLS
        for (int i = 0; i < ui->tableWidget->columnCount(); i++)
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,i,new QTableWidgetItem());

        // TIMESTAMP
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem(QDateTime::currentDateTime().toString()));

        // SCRIPT
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,index,new QTableWidgetItem(script));

        // DELAY
        if (ui->tableWidget->rowCount() == 1)
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,new QTableWidgetItem("0"));
        else
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,new QTableWidgetItem(QString::number(timer->elapsed()/1000)));
        timer->restart();

        // CELL ALIGNMENT
        AlignTableCell(ui->tableWidget->rowCount()-1);

        // SCROLL DOWN
        ui->tableWidget->verticalScrollBar()->setSliderPosition (ui->tableWidget->verticalScrollBar()->maximum());
    }
    else
        return;
}

void
MainWindow::
StepRun() {

    if (m_row == invalidRow && ui->tableWidget->rowCount() > 0)
        m_row = 0;

    if (ui->tableWidget->rowCount() == 0)
        QMessageBox::warning(this, "Invalid Script", "Invalid Script!", QMessageBox::Ok);
    else {

    }
}

void
MainWindow::
Stop() {

}

void
MainWindow::
Run() {

}
void
MainWindow::
on_b2_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(W1);
        AddCommandToTable(1,"W1");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(W1_OFF);
        AddCommandToTable(1,"W1_OFF");
    }
}

void
MainWindow::
on_b3_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(W2);
        AddCommandToTable(1,"W2");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(W2_OFF);
        AddCommandToTable(1,"W2_OFF");
    }
}

void
MainWindow::
on_b4_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(W3);
        AddCommandToTable(1,"W3");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(W3_OFF);
        AddCommandToTable(1,"W3_OFF");
    }
}

void
MainWindow::
on_b5_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(Y1);
        AddCommandToTable(1,"Y1");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(Y1_OFF);
        AddCommandToTable(1,"Y1_OFF");
    }
}

void
MainWindow::
on_b6_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(Y2);
        AddCommandToTable(1,"Y2");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(Y2_OFF);
        AddCommandToTable(1,"Y2_OFF");
    }
}

void
MainWindow::
on_b7_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(O);
        AddCommandToTable(1,"O");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(O_OFF);
        AddCommandToTable(1,"O_OFF");
    }
}

void
MainWindow::
on_b8_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(G);
        AddCommandToTable(1,"G");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(G_OFF);
        AddCommandToTable(1,"G_OFF");
    }
}

void
MainWindow::
on_b9_toggled(bool checked)
{
    if (checked) {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(BK);
        AddCommandToTable(1,"BK");
    }
    else {
        if (Power && ui->radioButton_2->isChecked())
            WriteToArduino(BK_OFF);
        AddCommandToTable(1,"BK_OFF");
    }
}

void
MainWindow::
on_b10_toggled(bool checked)
{
    if (checked) {
        WriteToArduino(R);
        AddCommandToTable(1,"R");
        Power = true;

        if (ui->b2->isChecked())
            WriteToArduino(W1);

        if (ui->b3->isChecked())
            WriteToArduino(W2);

        if (ui->b4->isChecked())
            WriteToArduino(W3);

        if (ui->b5->isChecked())
            WriteToArduino(Y1);

        if (ui->b6->isChecked())
            WriteToArduino(Y2);

        if (ui->b7->isChecked())
            WriteToArduino(O);

        if (ui->b8->isChecked())
            WriteToArduino(G);

        if (ui->b9->isChecked())
            WriteToArduino(BK);
    }
    else {
        WriteToArduino(R_OFF);
        AddCommandToTable(1,"R_OFF");
        WriteToArduino(CLEAR);
        Power = false;
    }
}

void
MainWindow::
on_radioButton_toggled(bool checked)
{
    ui->pushButton->setEnabled(checked);
}

void
MainWindow::
SendGroupCommand()
{    
    // DISABLE GROUP COMMAND
    ui->radioButton->setChecked(false);    
    ui->pushButton->setEnabled(false);

    // ENABLE SINGLE COMMAND
    ui->radioButton_2->setChecked(true);

    // SEND GROUP COMMAND
    if (!m_script.isEmpty()) {
        m_script = m_script.left(m_script.length() -1);
        AddCommandToTable(1,m_script);
        QStringList data = m_script.split(",");

        for (int i = 0; i < data.length(); i++) {

            if (data.at(i) == "W1")
                WriteToArduino(W1);
            else if (data.at(i) == "W2")
                WriteToArduino(W2);
            else if (data.at(i) == "W3")
                WriteToArduino(W3);
            else if (data.at(i) == "Y1")
                WriteToArduino(Y1);
            else if (data.at(i) == "Y2")
                WriteToArduino(Y2);
            else if (data.at(i) == "O")
                WriteToArduino(O);
            else if (data.at(i) == "G")
                WriteToArduino(G);
            else if (data.at(i) == "BK")
                WriteToArduino(BK);
            else if (data.at(i) == "W1_OFF")
                WriteToArduino(W1_OFF);
            else if (data.at(i) == "W2_OFF")
                WriteToArduino(W2_OFF);
            else if (data.at(i) == "W3_OFF")
                WriteToArduino(W3_OFF);
            else if (data.at(i) == "Y1_OFF")
                WriteToArduino(Y1_OFF);
            else if (data.at(i) == "Y2_OFF")
                WriteToArduino(Y2_OFF);
            else if (data.at(i) == "O_OFF")
                WriteToArduino(O_OFF);
            else if (data.at(i) == "G_OFF")
                WriteToArduino(G_OFF);
            else if (data.at(i) == "BK_OFF")
                WriteToArduino(BK_OFF);
        }
    }

    m_script.clear();
}

void
MainWindow::
SetRowCol(int row, int col) {

    m_row = row;
    m_col = col;
}

void
MainWindow::
ClearTable() {

    if (ui->tableWidget->rowCount() > 0) {

        QMessageBox::StandardButton reply = QMessageBox::question(this, "Warning", "Are you sure you want to reset script table?", QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            ui->tableWidget->setRowCount(0);
            timer->restart();
        }
        else
            return;
    }
    else
        return;
}

void
MainWindow::
ShowContextMenu(const QPoint& pos) {

    QMenu contextMenu(tr("Context menu"), this);

    QAction action1("Add New Script", this);
    connect(&action1, SIGNAL(triggered()), this, SLOT(InsertScript()));
    contextMenu.addAction(&action1);

    QAction *separator = new QAction(this);
    separator->setSeparator(true);
    contextMenu.addAction(separator);

    QAction action3("Delete Script", this);
    connect(&action3, SIGNAL(triggered()), this, SLOT(DeleteScript()));
    contextMenu.addAction(&action3);

    contextMenu.exec(mapToGlobal(pos));
}

void
MainWindow::
AlignTableCell(int row) {

    ui->tableWidget->item(row,0)->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    ui->tableWidget->item(row,1)->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->item(row,2)->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->item(row,3)->setTextAlignment(Qt::AlignVCenter);
}

void
MainWindow::
InitializeMainWindowScrollBar() {

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(ui->scrollableRegion);
    setCentralWidget(scrollArea);
}


void
MainWindow::
InitializeToolbar() {

    ui->mainToolBar->addAction(ui->actionConnect);
    ui->mainToolBar->addAction(ui->actionOpen);
    ui->mainToolBar->addAction(ui->actionSave);

    ui->mainToolBar->addSeparator();

    ui->mainToolBar->addAction(ui->actionStep_Run);
    ui->mainToolBar->addAction(ui->actionPause);
    ui->mainToolBar->addAction(ui->actionPlay);
    ui->mainToolBar->addSeparator();

    ui->mainToolBar->addAction(ui->actionReset_Script_Table);
    ui->mainToolBar->addAction(ui->actionTimer_Reset);
}

void
MainWindow::
InitializeUi() {

    EnableToolbar(false);

    QHeaderView *header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::ResizeToContents);
    header->setResizeContentsPrecision(QHeaderView::Stretch);

    connect(ui->actionStep_Run, SIGNAL(triggered(bool)), this, SLOT(StepRun()));
    connect(ui->actionPause, SIGNAL(triggered(bool)), this, SLOT(Stop()));
    connect(ui->actionPlay, SIGNAL(triggered(bool)), this, SLOT(Run()));
    connect(ui->actionConnect, SIGNAL(triggered(bool)), this, SLOT(managePortConnection()));
    connect(ui->pushButton, SIGNAL(pressed()), this, SLOT(SendGroupCommand()));
    connect(ui->actionReset_Script_Table, SIGNAL(triggered(bool)), this, SLOT(ClearTable()));
    connect(ui->tableWidget, SIGNAL(cellPressed(int,int)), this, SLOT(SetRowCol(int,int)));
    connect(ui->actionTimer_Reset, SIGNAL(triggered(bool)), this, SLOT(ResetTimer()));
    connect(ui->actionSave, SIGNAL(triggered(bool)), this, SLOT(SaveScript()));
    connect(ui->actionOpen, SIGNAL(triggered(bool)), this, SLOT(LoadScript()));
    connect(ui->actionExit, SIGNAL(triggered(bool)), this, SLOT(Exit()));

    //////////// RIGHT MOUSE BUTTON MENU /////////////////////////////
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableWidget, SIGNAL(customContextMenuRequested(const QPoint &)),this, SLOT(ShowContextMenu(const QPoint &)));
    //////////////////////////////////////////////////////////////////
}

void
MainWindow::
InsertScript() {

    if (ui->tableWidget->rowCount() == 0)
        m_row = 0;

    ui->tableWidget->insertRow(m_row);
    for (int i = 0; i < ui->tableWidget->columnCount(); i++)
        ui->tableWidget->setItem(m_row,i,new QTableWidgetItem(""));

    m_row = invalidRow; // INVALID UNTIL NEXT VALID MOUSE CLICK
}

void
MainWindow::
DeleteScript() {

    if (m_row != invalidRow)
        ui->tableWidget->removeRow(m_row);
    m_row = invalidRow;
}

void
MainWindow::
ResetTimer() {
    timer->restart();
}


void
MainWindow::
SaveScript() {

    QString name = QDateTime::currentDateTime().toString().replace(" ","_").replace(":","").trimmed();
    QString file = QFileDialog::getSaveFileName(this,tr("Save File"),name,tr("json script file (*.json)"));
    if (!file.isEmpty()) {
        CREADWRITEFILE *cReadWriteFile = new CREADWRITEFILE;
        cReadWriteFile->SaveFile(ui->tableWidget, file);
        delete cReadWriteFile;
    }
    else
        return;
}

void
MainWindow::
LoadScript() {

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Load Test", "Current scripts will be completely deleted. \nAre you sure you want to continue?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        QString file = QFileDialog::getOpenFileName(this,tr("Open test file"), QDir::currentPath(), tr("Test File (*.r2)"));
        if (!file.isEmpty()) {

            CREADWRITEFILE *cReadWriteFile = new CREADWRITEFILE;
            cReadWriteFile->LoadFile(ui->tableWidget, file);
            delete cReadWriteFile;
        }
        else
            return;
    }
    else
        return;
}

void
MainWindow::
Exit() {

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Exit", "Are you sure you want to exit?",
                                                               QMessageBox::Yes|QMessageBox::No);
       if (reply == QMessageBox::Yes) {
           QApplication::quit();
         }
       else
           return;
}


void
MainWindow::
EnableToolbar(const bool control) {

    ui->actionOpen->setEnabled(control);
    ui->actionSave->setEnabled(control);
    ui->actionReset_Script_Table->setEnabled(control);
    ui->actionTimer_Reset->setEnabled(control);
    ui->actionPlay->setEnabled(control);
    ui->actionStep_Run->setEnabled(control);
    ui->actionPause->setEnabled(control);
}


void
MainWindow::
managePortConnection() {

    if (connected) {
        ui->actionConnect->setIcon(QIcon(":/images/disconnect.png"));
        ui->actionConnect->setToolTip("Disconnected");
        arduino->close();
        spider->close();
        ui->statusBar->showMessage("System disconnected.");
        connected = false;
        ui->tabWidget->setEnabled(false);
    }
    else {
        ui->tabWidget->setEnabled(true);
        arduiono_is_available = false;
        arduino_port_name = "";
        arduino = new QSerialPort;

        foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {

                if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
                    if (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id) {
                        if (serialPortInfo.productIdentifier() == arduino_uno_product_id) {
                            arduino_port_name = serialPortInfo.portName();
                            arduiono_is_available = true;
                        }
                    }
                }
        }

        if (arduiono_is_available) {
            // open configure the port
            arduino->setPortName(arduino_port_name);
            arduino->open(QSerialPort::WriteOnly);
            arduino->setBaudRate(QSerialPort::Baud9600);
            arduino->setDataBits(QSerialPort::Data8);
            arduino->setParity(QSerialPort::NoParity);
            arduino->setStopBits(QSerialPort::OneAndHalfStop); // on windows
            arduino->setFlowControl(QSerialPort::NoFlowControl);
            ui->statusBar->showMessage("Arduino bridge connected.");
            //ui->actionConnect->setEnabled(false);
            ui->actionConnect->setIcon(QIcon(":/images/connect.png"));
            ui->actionConnect->setToolTip("Connected");
            connected = true;
            ui->tabWidget->setEnabled(true);
            ui->b10->setChecked(true);
            ui->tableWidget->setItem(0,2,new QTableWidgetItem("0"));
            timer->start();
            AlignTableCell(ui->tableWidget->rowCount()-1);
            EnableToolbar(true);

            // READ TARGET BOARD
            InitializeViewer();

        } else {
            // error message
            QMessageBox::warning(this,"error","Couldn't connect to Arduino bridge.");
        }
    }
}



void
MainWindow::
InitializeViewer() {
    spider_is_available = false;
    spider_port_name = "";
    spider = new QSerialPort;

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
            if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
                if (serialPortInfo.vendorIdentifier() == spider_vendor_id) {
                    if (serialPortInfo.productIdentifier() == spider_product_id) {
                        spider_port_name = serialPortInfo.portName();
                        spider_is_available = true;
                    }
                }
            }
    }

    if (spider_is_available) {
        // open configure the port
        spider->setPortName(spider_port_name);
        spider->open(QSerialPort::ReadOnly);
        spider->setBaudRate(QSerialPort::Baud115200);
        spider->setDataBits(QSerialPort::Data8);
        spider->setParity(QSerialPort::NoParity);
        spider->setStopBits(QSerialPort::OneAndHalfStop); // on windows
        spider->setFlowControl(QSerialPort::NoFlowControl);
        ui->statusBar->showMessage("System connected.");
        ui->tabWidget_2->setEnabled(true);
        connect(spider, SIGNAL(readyRead()), this, SLOT(readSpiderData()));

    } else {
        // error message
        QMessageBox::warning(this,"error","Couldn't connect to Spider bridge.");
    }
}

void
MainWindow::
readSpiderData() {
    QByteArray data = spider->readAll();
    ui->textEdit_3->append(data.data());
}
