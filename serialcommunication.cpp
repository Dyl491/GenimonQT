#include "SerialCommunication.h"
#include <QSerialPortInfo>
#include <QDebug>

SerialCommunication::SerialCommunication(QObject *parent)
    : QObject(parent), serialPort(new QSerialPort(this))
{
    connect(serialPort, &QSerialPort::readyRead, this, &SerialCommunication::onReadyRead);
}

SerialCommunication::~SerialCommunication() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    delete serialPort;
}

void SerialCommunication::connectToArduino() {
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serialPort->setPort(info);
        serialPort->setBaudRate(QSerialPort::Baud115200);
        serialPort->setDataBits(QSerialPort::Data8);
        serialPort->setParity(QSerialPort::NoParity);
        serialPort->setStopBits(QSerialPort::OneStop);
        serialPort->setFlowControl(QSerialPort::NoFlowControl);

        if (serialPort->open(QIODevice::ReadWrite)) {
            qDebug() << "Connecté à l'Arduino sur le port" << info.portName();
            break;
        }
    }
}

void SerialCommunication::startReading() {
    // Commence à lire les données série
    if (!serialPort->isOpen()) {
        connectToArduino();
    }
}

void SerialCommunication::stopReading() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
}

void SerialCommunication::onReadyRead() {
    // Lire les données du port série
    QByteArray data = serialPort->readAll();

    // Si les données sont en format JSON, on les analyse
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isObject()) {
        QJsonObject jsonObject = doc.object();
        emit dataReceived(jsonObject);  // Émettre les données pour les utiliser dans MainWindow
    }
}
