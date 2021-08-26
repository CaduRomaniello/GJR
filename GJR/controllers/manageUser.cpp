#include "manageUser.h"
#include "ui_manageUser.h"

ManageUser::ManageUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageUser)
{
    this->setFixedSize(800, 600);
    ui->setupUi(this);
    this->parent = parent;

    QTableWidget* tableUser = ui->table_users;

    tableUser->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableUser->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableUser->setStyleSheet("QTableView {selection-background-color: gray}");

    QSqlQuery query;
    query.prepare("select * from users");

    int count = 0;
    if (query.exec()){
        int userCount = 0;
        tableUser->setColumnCount(1);

        while(query.next()) {
            tableUser->insertRow(userCount);
            tableUser->setItem(userCount, 0, new QTableWidgetItem(query.value(0).toString()));
            count++;
        }
    }
}

ManageUser::~ManageUser()
{
    delete ui;
}

void ManageUser::on_button_back_clicked()
{
    this->parent->show();
    this->close();
}


void ManageUser::on_button_create_user_clicked()
{
    CreateUser* user = new CreateUser(this);
    this->hide();
    user->show();
}


void ManageUser::on_button_update_user_clicked()
{
    QTableWidget* table = ui->table_users;

    if(table->currentItem() != 0) {
        int currentRow = table->currentRow();
        QTableWidgetItem* user = table->item(currentRow, 0);

        QString username = user->text();

        this->hide();
        UpdateUser* updateUser = new UpdateUser(this, username);
        updateUser->show();
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}


void ManageUser::on_button_delete_user_clicked()
{
    QTableWidget* table = ui->table_users;

    if(table->currentItem() != 0) {

        QMessageBox::StandardButton teste = QMessageBox::information(this, "Alert", "Do you really want to delete the user?", QMessageBox::Ok, QMessageBox::Cancel);

        if(teste == 1024) {
            int currentRow = table->currentRow();

            // necessario excluir do banco
            table->removeRow(currentRow);
        }
    }

    else {
        QMessageBox::information(this, "Error", "Invalid selected item", QMessageBox::Close);
    }
}

void ManageUser::showEvent(QShowEvent *e)
{
    this->reloadTable();
}

void ManageUser::reloadTable(){

    QTableWidget* tableUser = ui->table_users;
    tableUser->clearContents();

    QSqlQuery query;
    query.prepare("select * from users");

    int count = 0;
    if (query.exec()){
        int userCount = 0;
        tableUser->setColumnCount(1);

        while(query.next()) {
            tableUser->insertRow(userCount);
            tableUser->setItem(userCount, 0, new QTableWidgetItem(query.value(0).toString()));
            count++;
        }
    }
}

