#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Hello world!");
    this->resize(1250, 700);

    RocketLaunchControlTab = new RocketLaunchControlWidget();
    RocketLaunchTrackingTab = new RocketLaunchTrackingWidget();

    TabWid = new QTabWidget();
    QFont font = TabWid->font();
    font.setBold(1);
    font.setPixelSize(13);
    TabWid->setFont(font);
    TabWid->addTab(RocketLaunchControlTab, "Управление ракетным запуском");
    TabWid->addTab(RocketLaunchTrackingTab, "Отслеживание ракетного запуска");
    TabWid->setCurrentWidget(RocketLaunchTrackingTab);

    MainWindowHL = new QBoxLayout(QBoxLayout::LeftToRight, this);
    MainWindowHL->addWidget(TabWid);

    SetApplicationStyle();

}

MainWindow::~MainWindow()
{
}


void MainWindow::SetApplicationStyle()
{
    this->setMainWindowStyle();
    TabWid->setStyleSheet("QTabBar::tab{"
                          "background-color: rgb(0,0,0);"
                          "color:white;"
                          "padding: 3px 15px 3px 15px;"
                          "border:1px solid white;"
                          "border-top-left-radius: 10px;"
                          "border-top-right-radius: 10px;"
                          "border-radius:10px;"
                          "margin-right:3px;"
                          "}"

                          "QTabBar::tab:first{"
                             " margin-left:10px;"
                          "}"

                          "QTabBar::tab:selected{"
                          "background-color: rgb(66,66,66);"
                          "}"
                          "QTabBar::tab:hover{"
                          "background-color: rgb(57,57,57);"
                          "}"
                          "QTabBar{"
                          "    background-color: none;"
                          "}"

                          "QTabWidget::pane{"
                          "    border:none;"
                          "}");
    RocketLaunchControlTab->setStyleSheet("QLabel{"
                                          "font-size:18px;"
                                          "color:white;"
                                          "background-color:none;}"
                                          "QPushButton{"
                                          " color:white;"
                                          " font-size:15px;"
                                          " font-weight:bold;"
                                          " background-color: rgb(66, 66, 66);"
                                          " border: 1px solid white;"
                                          " border-radius:10px;"
                                          "}"

                                          "QPushButton:hover{"
                                          "  background-color:rgb(109, 109, 109);"
                                          "}"

                                          "QPushButton:pressed{"
                                          "  background-color: rgba(255,255,255, 80);"
                                          "}"
                                          "QPushButton#StartBtn{"
                                            "color:black;"
                                            "font-weight:bold;"
                                            "font-size:25px;"
                                            "background-color: rgb(255, 234, 0);"
                                            "border: 2px solid black;"
                                            "border-radius:10px;"
                                          "}"

                                          "QPushButton#StartBtn:hover{"
                                            "background-color: red;"
                                          "}"

                                           "QPushButton#StartBtn:pressed{"
                                            "background-color: rgb(255, 234, 0);"
                                           "}"
                                          "QPlainTextEdit{"
                                          "  border-radius: 10px;"
                                          "  background-color:rgb(122, 122, 122);"
                                          "  border:1px solid white;"
                                          "  color:white;"
                                          "  font-size:20px;"
                                          "}");
    RocketLaunchTrackingTab->ShortInfo->ShortInfoVLF->setStyleSheet("QFrame{"
                                                                        "background-color:rgb(0, 0, 0);"
                                                                        "border-radius:10px;"
                                                                    "}"
                                                                    "QLabel{"
                                                                        "background-color:none;"
                                                                        "color:white;"
                                                                        "font-size:16px;}"
                                                                    "QLabel#ShortInfoTitle{"
                                                                        "font-size:24px;}"
                                                                    "QLabel#RocketStartCheckText{"
                                                                        "color:rgb(0, 255, 0);}"
                                                                    "QTextEdit{"
                                                                    "background-color:grey;"
                                                                    "font-size:15px;}");
    RocketLaunchTrackingTab->SARS->setSARSStyle("QFrame{"
                                                     "background-color:rgb(0,0,0);"
                                                    "border-radius:10px;}"
                                                "QLabel{"
                                                    "background-color:none;"
                                                    "color:white;"
                                                    "font-size:15px;}"
                                                "QLabel#ARSStatusTitle{"
                                                "font-size:18px;}"
                                                "QLabel#ConnectionWithHeadquartersData{"
                                                "color:rgb(0, 255, 0);}"
                                                "QLabel#ConnectionWithPresidentData{"
                                                "color:rgb(0, 255, 0);}"
                                                "QLabel#StateOfSensorsData{"
                                                "color:rgb(0, 255, 0);}");
    RocketLaunchTrackingTab->ControlAndMap->setStyleSheet( "QLabel#WorldMap{"
                                                            "border:1px solid black;"
                                                            "border-radius:10px;"
                                                            "background-color:none}"
                                                            "QFrame{"
                                                            "background-color:rgb(0, 0, 0);"
                                                            "border-radius:10px;"
                                                             "}"
                                                          "QLabel{"
                                                            "color:black;"
                                                            "font-size:18px;"
                                                            "background-color:none;}"
                                                          "QRadioButton{"
                                                            "color:black;"
                                                            "font-size:18px;}"
                                                          "QPushButton{"
                                                            "color:white;"
                                                            "font-size:15px;"
                                                            "background-color: rgba(255,255,255, 60);"
                                                            "border: 1px solid white;"
                                                            "border-radius: 5px;"
                                                          "}"
                                                            "QPushButton:hover{"
                                                            "background-color: rgba(255,255,255, 70);"
                                                          "}"
                                                          "QPushButton:pressed{"
                                                            "background-color: rgba(255,255,255, 80);"
                                                          "}");
}

void MainWindow::setMainWindowStyle()
{
    this->setStyleSheet("MainWindow{"
                        "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"
                        "}");
}



















