#ifndef WEKTORYGUI_H
#define WEKTORYGUI_H

#include <QMainWindow>

namespace Ui {
class WektoryGUI;
}

class WektoryGUI : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WektoryGUI(QWidget *parent = 0);
    ~WektoryGUI();
    
private:
    Ui::WektoryGUI *ui;
};

#endif // WEKTORYGUI_H
