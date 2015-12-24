#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QScrollArea>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Power(true)
{
    ui->setupUi(this);

    InitializeMainWindowScrollBar();
    InitializeToolbar();
    InitializeArduinoSerialPort();
}

MainWindow::~MainWindow()
{
    delete ui;
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
InitializeArduinoSerialPort() {

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
    } else {
        // error message
        QMessageBox::warning(this,"error","Couldn't find port");
    }
}

void
MainWindow::
InitializeToolbar() {

    ui->mainToolBar->addAction(ui->actionNew);
    ui->mainToolBar->addAction(ui->actionOpen);
    ui->mainToolBar->addAction(ui->actionSave);
}

void
MainWindow::
WriteToArduino(const QString value) {
    arduino->isWritable() ? arduino->write(value.toStdString().c_str()) :
                            QMessageBox::critical(this,"error","Couldn't write to arduino board");
}

void MainWindow::on_b2_toggled(bool checked)
{
    checked && Power ? WriteToArduino(W1) : WriteToArduino(W1_OFF);
}

void MainWindow::on_b3_toggled(bool checked)
{
    checked && Power ? WriteToArduino(W2) : WriteToArduino(W2_OFF);
}

void MainWindow::on_b4_toggled(bool checked)
{
    checked && Power ? WriteToArduino(W3) : WriteToArduino(W3_OFF);
}

void MainWindow::on_b5_toggled(bool checked)
{
    checked && Power ? WriteToArduino(Y1) : WriteToArduino(Y1_OFF);
}

void MainWindow::on_b6_toggled(bool checked)
{
    checked && Power ? WriteToArduino(Y2) : WriteToArduino(Y2_OFF);
}

void MainWindow::on_b7_toggled(bool checked)
{
    checked && Power ? WriteToArduino(O) : WriteToArduino(O_OFF);
}

void MainWindow::on_b8_toggled(bool checked)
{
    checked && Power ? WriteToArduino(G) : WriteToArduino(G_OFF);
}

void MainWindow::on_b9_toggled(bool checked)
{
    checked && Power ? WriteToArduino(BK) : WriteToArduino(BK_OFF);
}

void MainWindow::on_b10_toggled(bool checked)
{
    if (checked) {
        WriteToArduino(R);
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
        WriteToArduino(CLEAR);
        Power = false;
    }

}
