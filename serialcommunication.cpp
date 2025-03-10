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
        }else {
            qDebug() << "Échec de la connexion au port" << info.portName();
        }
    }
}

void SerialCommunication::startReading() {
    // Commence à lire les données série
    if (!serialPort->isOpen()) {
        connectToArduino();
        qDebug() << "Commence à lire les données série";
    }
}

void SerialCommunication::stopReading() {
    if (serialPort->isOpen()) {
        serialPort->close();
        qDebug() << "Arrete à lire les données série";
    }
}

void SerialCommunication::onReadyRead() {
    static QByteArray buffer;  // Tampon pour accumuler les données

    // Lire les données du port série
    // Lire toutes les données disponibles
    buffer.append(serialPort->readAll());
    qDebug() << "Données lues:" << buffer;
    qDebug() << "Lire les données du port série" << buffer;

    // Vérifier si nous avons un message complet (terminé par un '\n')
    int endIndex = buffer.indexOf('\n');
    if (endIndex != -1) {
        QByteArray data = buffer.left(endIndex);  // Extraire le message complet
        buffer.remove(0, endIndex + 1);  // Supprimer le message du tampon

    // Si les données sont en format JSON, on les analyse
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isNull()) {
        qDebug() << "Erreur : Le JSON est mal formé.";
        return;
        } else {
            if (doc.isObject()) {
                QJsonObject jsonObject = doc.object();
                qDebug() << "C'est un objet JSON";
                qDebug() << "Émission du signal dataReceived";
                emit dataReceived(jsonObject);
            }else if (doc.isArray()) {
                QJsonArray jsonArray = doc.array();
                qDebug() << "C'est un tableau JSON";
                QJsonObject jsonObject;
                jsonObject["array"] = jsonArray;
                emit dataReceived(jsonObject);
            }else {
                QVariant value = doc.toVariant();
                qDebug() << "C'est une valeur simple:" << value;
            }
        }
    }


}

void SerialCommunication::sendJsonToArduino(const QString &message, int segment) {
    QJsonObject jsonObject;
    jsonObject["message"] = message;
    jsonObject["segment"] = segment;

    // Convertir l'objet JSON en QByteArray
    QJsonDocument doc(jsonObject);
    QByteArray jsonData = doc.toJson();

    jsonData.append('\n');

    // Envoyer le message JSON via le port série
    if (serialPort->isOpen()) {
        serialPort->write(jsonData);
        qDebug() << "Message envoyé à l'Arduino:" << jsonData;
    } else {
        qDebug() << "Erreur : Port série non ouvert.";
    }
}
