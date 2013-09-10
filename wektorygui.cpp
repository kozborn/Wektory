#include "wektorygui.h"
#include "ui_wektorygui.h"

WektoryGUI::WektoryGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WektoryGUI)
{
    ui->setupUi(this);
}

WektoryGUI::~WektoryGUI()
{
    delete ui;
}
