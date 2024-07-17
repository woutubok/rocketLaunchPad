#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "rocketlaunchcontrolwidget.h"
#include "rocketlaunchtrackingwidget.h"
#include <QtWidgets>

class MainWindow : public QWidget
{
   Q_OBJECT
   QBoxLayout *MainWindowHL;
   QTabWidget *TabWid;
   RocketLaunchControlWidget *RocketLaunchControlTab;
   RocketLaunchTrackingWidget *RocketLaunchTrackingTab;
private:
   void SetApplicationStyle();
   void setMainWindowStyle();
private slots:

public:
   MainWindow(QWidget *parent = 0);
   ~MainWindow();
};

#endif // MAINWINDOW_H
