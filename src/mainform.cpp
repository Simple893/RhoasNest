#include "headers/mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QMainWindow *parent) :
	QMainWindow(parent), ui(new Ui::MainForm)
{
	ui->setupUi(this);
}

MainForm::~MainForm()
{
	delete ui;
}

void MainForm::TestFunction()
{
	// Do something here
	// Doing something here
}
