#include "sarsbox.h"

SARSBox::SARSBox(QWidget *parent) : QWidget(parent)
{
    ARSStatusTitleHL = new QBoxLayout(QBoxLayout::LeftToRight);
    ARSStatusTitle = new QLabel("Состояние систем автоматического ответа");
    ARSStatusTitle->setObjectName("ARSStatusTitle");
    ARSStatusTitlePict = new QLabel();
    ARSStatusPixmap.load(":/img/res/bigtop_updates_FILL0_wght400_GRAD0_opsz24.svg");
    ARSStatusTitlePict->setPixmap(ARSStatusPixmap);
    ARSStatusTitlePict->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ARSStatusTitlePict->resize(24, 24);
    ARSStatusTitleHL->addWidget(ARSStatusTitlePict);
    ARSStatusTitleHL->addWidget(ARSStatusTitle);

    ConnectionWithHeadquartersHL = new QBoxLayout(QBoxLayout::LeftToRight);
    ConnectionWithHeadquartersText = new QLabel("Связь со штабом:");
    ConnectionWithHeadquartersData = new QLabel("В норме");
    ConnectionWithHeadquartersData->setObjectName("ConnectionWithHeadquartersData");
    ConnectionWithHeadquartersData->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ConnectionWithHeadquartersHL->addWidget(ConnectionWithHeadquartersText);
    ConnectionWithHeadquartersHL->addWidget(ConnectionWithHeadquartersData);

    ConnectionWithPresidentHL = new QBoxLayout(QBoxLayout::LeftToRight);
    ConnectionWithPresidentText = new QLabel("Связь с офисом президента:");
    ConnectionWithPresidentData = new QLabel("В норме");
    ConnectionWithPresidentData->setObjectName("ConnectionWithPresidentData");
    ConnectionWithPresidentData->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ConnectionWithPresidentHL->addWidget(ConnectionWithPresidentText);
    ConnectionWithPresidentHL->addWidget(ConnectionWithPresidentData);

    StateOfSensorsHL = new QBoxLayout(QBoxLayout::LeftToRight);
    StateOfSensorsText = new QLabel("Состояние сейсмологических датчиков:");
    StateOfSensorsData = new QLabel("В норме");
    StateOfSensorsData->setObjectName("StateOfSensorsData");
    StateOfSensorsData->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    StateOfSensorsHL->addWidget(StateOfSensorsText);
    StateOfSensorsHL->addWidget(StateOfSensorsData);

    ARSStatusVL = new QBoxLayout(QBoxLayout::TopToBottom);
    ARSStatusVL->addLayout(ARSStatusTitleHL);
    ARSStatusVL->addLayout(ConnectionWithHeadquartersHL);
    ARSStatusVL->addLayout(ConnectionWithPresidentHL);
    ARSStatusVL->addLayout(StateOfSensorsHL);

    ARSStatusVLF = new QFrame();
    ARSStatusVLF->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ARSStatusVLF->setLayout(ARSStatusVL);
    VL = new QBoxLayout(QBoxLayout::TopToBottom, this);
    VL->addWidget(ARSStatusVLF);
    //VL->setMargin(0);
    VL->setContentsMargins(0, 0, 0, 0);
}

void SARSBox::setSARSStyle(QString style)
{
    this->ARSStatusVLF->setStyleSheet(style);
}
