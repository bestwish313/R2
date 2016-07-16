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
    if (!file.open(QIODevice::ReadOnly))
        return;
    else {

        table->setRowCount(0); // RESET TABLE

        QTextStream in(&file);
        while (!in.atEnd()) {

            QString line = in.readLine();
            QStringList item = line.split("|");

            // INSERT A NEW ROW
            table->insertRow(table->rowCount());

            // SET ITEM AND ALIGN
            for (int j = 0; j < item.size(); j++) {
                table->setItem(table->rowCount()-1,j,new QTableWidgetItem (item[j]));
                table->item(table->rowCount()-1,j)->setTextAlignment(Qt::AlignCenter);
            }
        }

        // SELECT ROW 0 FOR TEST MODE TO START AT ROW 0 BY DEFAULT
        table->setFocus();
        table->selectRow(0);
        file.close();
    }
}
