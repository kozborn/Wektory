#ifndef WEKTORYGUI_H
#define WEKTORYGUI_H

#include <QMainWindow>
#include "punkt.h"
#include "wektor.h"
#include "vector"

namespace Ui {
class WektoryGUI;
}

class WektoryGUI : public QMainWindow
{
    Q_OBJECT
    
public:
    vector<Wektor> lista_wektorow;
    explicit WektoryGUI(QWidget *parent = 0);
    ~WektoryGUI();
    
private:
    Ui::WektoryGUI *ui;
};

#endif // WEKTORYGUI_H
