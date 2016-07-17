#include "creadwritefile.h"

#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

CREADWRITEFILE::CREADWRITEFILE()
{

}

void
CREADWRITEFILE::
SaveFile(QTableWidget *table, const QString filename) {

    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly))
        return;
    else {
        QJsonObject json;
        QJsonArray jsonArray;
        QTextStream out (&file);
        for (int i = 0; i < table->rowCount(); i++) {

            QJsonArray jsonArray2;
            for (int j = 0; j < table->columnCount(); j++)
                jsonArray2.append(table->item(i,j)->text().trimmed());
            jsonArray.append(jsonArray2);
        }
        json["SCRIPT"] = jsonArray;
        QJsonDocument jdoc(json);
        out << jdoc.toJson(QJsonDocument::Indented);
        file.close();
    }
}


void
CREADWRITEFILE::
LoadFile(QTableWidget *table, const QString filename) {

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    else {
        // reset table
        table->setRowCount(0);

        // read file
        QByteArray byteArray = file.readAll();
        file.close();

        // read json document
        QJsonDocument jsonDocument = QJsonDocument::fromJson(byteArray);
        QJsonObject jsonObject = jsonDocument.object();
        QJsonArray jsonArray = jsonObject["SCRIPT"].toArray();

        // row count
        for (int i = 0; i < jsonArray.size(); i++) {

            // add table row
            table->insertRow(table->rowCount());

            // column count
            for (int j = 0; j < jsonArray[0].toArray().size(); j++) {
                QString value = jsonArray[i].toArray().at(j).toString();

                table->setItem(i,j,new QTableWidgetItem (value));
                table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }

        // SELECT ROW 0 FOR TEST MODE TO START AT ROW 0 BY DEFAULT
        table->setFocus();
        table->selectRow(0);
    }
}
