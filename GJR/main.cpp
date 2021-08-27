#include "./controllers/loginScreen.h"
#include <QApplication>

QSqlDatabase bdd = QSqlDatabase::addDatabase("QSQLITE");

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginScreen w;


    QString db_path = QDir::currentPath();
    db_path = db_path + "/../../GJR/database/db_GJR.db";
    bdd.setDatabaseName(db_path);
    if (!bdd.open()){
        QMessageBox::information(&w, "Erro", "Não foi possível abrir o banco de dados!", QMessageBox::Close);
        exit(1);
    }

    w.show();
    return a.exec();
}
