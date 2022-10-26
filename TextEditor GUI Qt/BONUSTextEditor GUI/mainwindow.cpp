#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <bits/stdc++.h>
#include <fstream>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>
#include <QInputDialog>

using namespace std;


QString currentFile = ""; string f;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
        ui->textEdit->setText(QString());
}


void MainWindow::on_actionAdd_text_triggered()
{

        QString fileName = QFileDialog::getOpenFileName(this, "Add Text to the File");
        QFile file(fileName);
        if(!file.open(QIODevice::Append | QFile::Text)){
            QMessageBox::warning(this, "Warning", "Cannot open File : " + file.errorString());
            return;
        }
        currentFile = fileName;
        setWindowTitle(fileName);
        QTextStream app(&file);
        QString text= ui->textEdit->toPlainText();
        app << text;
        file.close();

}


void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(filename);
    currentFile=filename;
    if(!file.open(QIODevice::ReadOnly|QFile:: Text)){
       QMessageBox::warning( this, "Warning", "Cannot open file:"+file.errorString());
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text=in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void MainWindow::on_actionEmpty_triggered()
{
    currentFile.clear();
        ui->textEdit->setText(QString());
}


void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file:"+file.errorString());
        return;
    }
    currentFile=fileName;
    setWindowTitle(fileName);
    QTextStream out (&file);
    QString text= ui->textEdit->toPlainText();
    out << text;
    file.close();
}


void MainWindow::on_actionEncrypt_triggered()
{
    string lowerPlainAlphabet = "abcdefghijklmnopqrstuvwxyz", capitalPlainAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", cipherText, plainText;
    QString plain = ui->textEdit->toPlainText();
    plainText = plain.QString::toStdString();
    for (int i = 0; i < plainText.length(); i++) {
        if (isalpha(plainText[i]) && islower(plainText[i])) {
            cipherText += lowerPlainAlphabet[25 - (plainText[i] - 'a')];
        } else if (isalpha(plainText[i]) && isupper(plainText[i])) {
            cipherText += capitalPlainAlphabet[25 - (plainText[i] - 'A')];
        } else {
            cipherText += plainText[i];
        }
    }
    QString cipher = QString::fromStdString(cipherText);
    ui->textEdit->setText(cipher);
}


void MainWindow::on_actionDecrypt_triggered()
{
    on_actionEncrypt_triggered();
}


void MainWindow::on_actionUpper_case_triggered()
{
    string plainText;
       QString upperText;
       QString plain = ui->textEdit->toPlainText();
       plainText = plain.QString::toStdString();
       upperText = plain.toUpper();
       ui->textEdit->setText(upperText);
}


void MainWindow::on_actionLower_case_triggered()
{
    string plainText;
       QString lowerText;
       QString plain = ui->textEdit->toPlainText();
       plainText = plain.QString::toStdString();
       lowerText = plain.toLower();
       ui->textEdit->setText(lowerText);
}

void Title(string &word) {
    string titleWord;
    titleWord += toupper(word[0]);
    for (int i = 1; i < word.size(); i++) {
        titleWord += tolower(word[i]);
    }
    word = titleWord;
}

void MainWindow::on_action1st_Upper_triggered()
{
    string plainText, word, whole;

    QString plain = ui->textEdit->toPlainText();
    plainText = plain.QString::toStdString();
    for(int i = 0; i < plainText.length(); i++){
        if(plainText[i] == ' ' || plainText[i] == '\n'){
             if(word != ""){
                Title(word);
                whole += word;
             }
             word = "";
             if(plainText[i] == ' ')
                 whole += " ";
             else if(plainText[i] == '\n')
                 whole += "\n";


    }
        else{
            word += plainText[i];

        }

}
    QString title = QString::fromStdString(whole);
    ui->textEdit->setText(title);
}

void MainWindow::on_actionLines_triggered()
{
    string plainText; int count = 1;
    QString plain = ui->textEdit->toPlainText();
    plainText = plain.QString::toStdString();
    for (int i = 0; i < plainText.length(); i++) {
        if(plainText[i] == '\n')
            count++;
    }

    QMessageBox msg;
    msg.information(this,"Count", "Number of lines : " + QString::number(count));


}

void MainWindow::on_actionWords_triggered()
{
  string plainText, word;
  int count = 1;

            QString plain = ui->textEdit->toPlainText();
            plainText = plain.QString::toStdString();
            for(int i = 0; i < plainText.length(); i++){
                if(plainText[i] == ' ' || plainText[i] == '\n'){
                     if(word != ""){
                        count++;
                     }
                     word = "";

            }
                else{
                    word += plainText[i];

                }
            }

    QMessageBox msg;
    msg.information(this,"Count", "Number of words : " + QString::number(count));

}



void MainWindow::on_actionCharacters_triggered()
{
    string plainText; int count = 0;
    QString plain = ui->textEdit->toPlainText();
    plainText = plain.QString::toStdString();
    for (int i = 0; i < plainText.length(); i++) {
        if(plainText[i] != ' ' && plainText[i] != '\n')
            count++;
    }

    QMessageBox msg;
    msg.information(this,"Count", "Number of characters : " + QString::number(count));
}



void MainWindow::on_actionSearch_triggered()
{
    on_pushButton_clicked();

    string find = f;
    string plainText, word; bool flag = false;
    QString plain = ui->textEdit->toPlainText();
    plainText = plain.QString::toStdString();
    for(int i = 0; i < plainText.length(); i++){
       if(plainText[i] == ' ' || plainText[i] == '\n'){
            if(word == find){
                 flag = true;}
            word = "";
        }
       else{
           word += plainText[i];
        }

    }
    if(flag){
        QMessageBox msg;
        msg.information(this,"Search", "Word was found"); }
    else{
        QMessageBox msg;
        msg.information(this,"Search", "Word was not found"); }
    }





void MainWindow::on_actionWord_repetition_triggered()
{
    on_pushButton_clicked();

    string find = f; int count;
    string plainText, word;
    QString plain = ui->textEdit->toPlainText();
    plainText = plain.QString::toStdString();
    for(int i = 0; i < plainText.length(); i++){
       if(plainText[i] == ' ' || plainText[i] == '\n'){
            if(word == find){
                 count++;}
            word = "";
        }
       else{
           word += plainText[i];
        }

}
    QMessageBox msg;
    msg.information(this,"Result", "Number of repetitions : "+ QString::number(count));
}


void MainWindow::on_pushButton_clicked()
{
  QString word = QInputDialog:: getText(this, "Search", "Enter word : ");
    f = word.toStdString();
}

