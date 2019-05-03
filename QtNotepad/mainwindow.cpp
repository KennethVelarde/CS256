#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this-> setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    //clear the screen
    currentfile.clear();
    // make new text window
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(fileName);
    currentfile = fileName;
    if(!file.open(QIODevice:: ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Warning","Can't open file: " + file.errorString());
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save the File");
     QFile file(fileName); //object creating for read/write of files(Here for writing)

     if(!file.open(QFile:: WriteOnly | QFile::Text))
     {
         QMessageBox::warning(this,"Warning","Can't open file: " + file.errorString());
     }

     //store current file
     currentfile = fileName;

    //set window title to name of file
     setWindowTitle(fileName);

     //when writing out we are actually writing to file on line 65 below
     QTextStream out(&file);


     //copy text in textEdit widgets convert to plain text
     QString text = ui->textEdit ->toPlainText();

     //write to file
     out << text;

     file.close();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}



void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
ui ->textEdit->redo();
}
