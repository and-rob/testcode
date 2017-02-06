#ifndef GUITESTWAVEMAINWINDOW_H
#define GUITESTWAVEMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class guiTestWaveMainWindow;
}

class guiTestWaveMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit guiTestWaveMainWindow(QWidget *parent = 0);
    ~guiTestWaveMainWindow();

private:
    Ui::guiTestWaveMainWindow *ui;
};

#endif // GUITESTWAVEMAINWINDOW_H
