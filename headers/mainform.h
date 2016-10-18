#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>

namespace Ui {
	class MainForm;
}

class MainForm : public QMainWindow
{
	Q_OBJECT

public :
	explicit MainForm(QMainWindow *parent = 0);
	~MainForm();
	
	void TestFunction();

private:
	Ui::MainForm *ui;
};

#endif // MAINFORM_H
