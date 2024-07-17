#include "rocketlaunchtrackingwidget.h"

RocketLaunchTrackingWidget::RocketLaunchTrackingWidget(QWidget *parent) : QWidget(parent)
{
    ShortInfoAndSARSVL = new QBoxLayout(QBoxLayout::TopToBottom);
    ShortInfo = new ShortInfoBox();
    SARS = new SARSBox();
    ShortInfoAndSARSVL->addWidget(ShortInfo, 2);
    ShortInfoAndSARSVL->addWidget(SARS, 1);

    HL = new QBoxLayout(QBoxLayout::LeftToRight, this);
    ControlAndMap = new ControlAndMapBox();
    HL->addLayout(ShortInfoAndSARSVL, 1);
    HL->addWidget(ControlAndMap, 2);
}


