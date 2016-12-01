#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include "makeTestCases.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("MIPS Assembly Test Case Builder");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_submitButton_clicked()
{
    int numCases = ui->horizontalSlider->value();
    int memCase = ui->checkBox->isChecked() ? 1:0;
    int forwarding = 0;
    if (ui->lessButton->isChecked()) forwarding = 3;
    else if (ui->moreButton->isChecked()) forwarding = 2;
    else forwarding = 1;
    QString var1 = QString::fromStdString(makecases(numCases,memCase,forwarding));
    ui->textBrowser->setText(var1);
}
