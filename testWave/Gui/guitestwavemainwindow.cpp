#include "guitestwavemainwindow.h"
#include "ui_guitestwavemainwindow.h"

guiTestWaveMainWindow::guiTestWaveMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::guiTestWaveMainWindow)
{
    ui->setupUi(this);
}

guiTestWaveMainWindow::~guiTestWaveMainWindow()
{
    delete ui;
}
