#include "md5window.h"
#include "ui_md5window.h"
#include "QCryptographicHash"
#include "QFile"
#include "QFileDialog"

MD5Window::MD5Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MD5Window)
{
    ui->setupUi(this);
}

MD5Window::~MD5Window()
{
    delete ui;
}

void MD5Window::on_pushButton_Browse_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),QDir::currentPath(),tr("PDF Files(*.pdf)"));
    ui->lineEdit_Browse->setText(fileName);
}


void MD5Window::on_pushButton_CalculateHashFile_clicked()
{
    // for output FILE
     QCryptographicHash CalculateMd5(QCryptographicHash::Md5);
    QFile file;
     file.setFileName(ui->lineEdit_Browse->text());
    if(!file.open(QIODevice::ReadOnly))
         return;
    CalculateMd5.addData(file.readAll());
        ui->lineEdit_Output_1->setText(CalculateMd5.result().toHex());
}

void MD5Window::on_pushButton_CalculateHashText_clicked()
{
    QCryptographicHash CalculateMd5(QCryptographicHash::Md5);
    QByteArray input;
    input += ui->textEdit_Input->toPlainText().toUtf8();
    CalculateMd5.addData(input);
    ui->lineEdit_Output_2->setText(CalculateMd5.result().toHex());
}
