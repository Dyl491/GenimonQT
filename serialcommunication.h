#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QSerialPort>
#include <QJsonDocument>
#include <QJsonObject>

class SerialCommunication : public QObject
{
    Q_OBJECT

public:
    explicit SerialCommunication(QObject *parent = nullptr);
    ~SerialCommunication();

    void connectToArduino();
    void startReading();
    void stopReading();

signals:
    void dataReceived(QJsonObject data);  // Signal pour envoyer les données à MainWindow

private slots:
    void onReadyRead();  // Slot pour lire les données série

private:
    QSerialPort *serialPort;
};

#endif // SERIALCOMMUNICATION_H
