#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QTableWidget>
#include <QFile>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void InitializeMainWindowScrollBar();
    void InitializeToolbar();    
    void InitializeUi();
    void InitializeViewer();
    void WriteToArduino(const QString);
    void AlignTableCell(const int);
    void EnableToolbar(const bool);


private slots:

    void on_b2_toggled(bool checked);
    void on_b3_toggled(bool checked);
    void on_b4_toggled(bool checked);
    void on_b5_toggled(bool checked);
    void on_b6_toggled(bool checked);
    void on_b7_toggled(bool checked);
    void on_b8_toggled(bool checked);
    void on_b9_toggled(bool checked);
    void on_b10_toggled(bool checked);
    void AddCommandToTable(const int, const QString);
    void on_radioButton_toggled(bool checked);
    void SendGroupCommand();
    void ClearTable();
    void SetRowCol(const int, const int);
    void ShowContextMenu(const QPoint&);
    void InsertScript();
    void DeleteScript();
    void managePortConnection();
    void ResetTimer();
    void SaveScript();
    void LoadScript();
    void Exit();
    void Run();
    void StepRun();
    void Stop();
    void readSpiderData();


private:
    Ui::MainWindow *ui;

    QSerialPort *arduino;
    QSerialPort *spider;
    QString m_script;
    QString arduino_port_name;
    QString spider_port_name;
    bool connected;
    bool arduiono_is_available;
    bool spider_is_available;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    static const quint16 spider_vendor_id = 1027;
    static const quint16 spider_product_id = 24577;
    static const int invalidRow =  9999999999;
    int m_delay;
    int m_row;
    int m_col;
    QElapsedTimer *timer;

    bool Power;
    const QString W1 = "2"; const QString W1_OFF = "A";
    const QString W2 = "3"; const QString W2_OFF = "B";
    const QString W3 = "4"; const QString W3_OFF = "C";
    const QString Y1 = "5"; const QString Y1_OFF = "D";
    const QString Y2 = "6"; const QString Y2_OFF = "E";
    const QString O = "7";  const QString O_OFF = "F";
    const QString G = "8";  const QString G_OFF = "G";
    const QString BK = "9"; const QString BK_OFF = "H";
    const QString R = "b"; const QString R_OFF = "J";
    const QString CLEAR = "c";
};

#endif // MAINWINDOW_H
