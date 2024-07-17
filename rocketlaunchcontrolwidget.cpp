#include "rocketlaunchcontrolwidget.h"

RocketLaunchControlWidget::RocketLaunchControlWidget(QWidget *parent) : QWidget(parent)
{
    ButtonsHL = new QBoxLayout(QBoxLayout::LeftToRight);
    ChooseTargetBtn = new QPushButton(QIcon(":/img/res/location_on_FILL0_wght400_GRAD0_opsz24.svg"), "Задать цель");
    ChooseRocketTypeBtn = new QPushButton(QIcon(":/img/res/tune_FILL0_wght400_GRAD0_opsz24.svg"), "Выбор типа ракет");
    ChooseRockedLaunchStartBtn = new QPushButton(QIcon(":/img/res/flight_takeoff_FILL0_wght400_GRAD0_opsz24.svg"), "Выбор способа запуска ракет");
    LaterStartBtn = new QPushButton(QIcon(":/img/res/timer_FILL0_wght400_GRAD0_opsz24.svg"), "Отложенный запуск");
    StartBtn = new QPushButton(QIcon(":/img/res/warning_FILL0_wght400_GRAD0_opsz24.svg"), "ПУСК");
    StartBtn->setObjectName("StartBtn");
    setBtnsSizePolicy();
    setBtnsLogoSize();

    ButtonsHL->addWidget(ChooseTargetBtn, 2);
    ButtonsHL->addWidget(ChooseRocketTypeBtn, 2);
    ButtonsHL->addWidget(ChooseRockedLaunchStartBtn, 3);
    ButtonsHL->addWidget(LaterStartBtn, 3);
    ButtonsHL->addWidget(StartBtn, 3);

    VL = new QBoxLayout(QBoxLayout::TopToBottom, this);
    TerminalTitle = new QLabel("Терминал");
    TerminalTextEdit = new QPlainTextEdit();
    TerminalTextEdit->setReadOnly(1);

    VL->addWidget(TerminalTitle);
    VL->addWidget(TerminalTextEdit, 9);
    VL->addLayout(ButtonsHL, 1);
}

void RocketLaunchControlWidget::setBtnsSizePolicy()
{
    ChooseTargetBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ChooseRocketTypeBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ChooseRockedLaunchStartBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    LaterStartBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    StartBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void RocketLaunchControlWidget::setBtnsLogoSize()
{
    ChooseTargetBtn->setIconSize(BtnsLogoSize);
    ChooseRocketTypeBtn->setIconSize(BtnsLogoSize);
    ChooseRockedLaunchStartBtn->setIconSize(BtnsLogoSize);
    LaterStartBtn->setIconSize(BtnsLogoSize);
    StartBtn->setIconSize(StartBtnLogoSize);
}
