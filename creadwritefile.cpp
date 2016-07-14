#include "creadwritefile.h"

#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
#include <QDir>

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
        QTextStream out (&file);
        QString line; // LINE CONTAINER
        for (int i = 0; i < table->rowCount(); i++) {
            for (int j = 0; j < table->columnCount(); j++)
                line.append(table->item(i,j)->text().trimmed()).append("|");
            line = line.left(line.length()-1); // REMOVE LAST "|"
            out << line.append("\n");
            line.clear();
        }
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
