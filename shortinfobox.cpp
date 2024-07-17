#include "shortinfobox.h"

ShortInfoBox::ShortInfoBox(QWidget *parent) : QWidget(parent)
{
    /* ShortInfo */
    ShortInfoTitleHL = new QBoxLayout(QBoxLayout::LeftToRight);
    ShortInfoTitle = new QLabel("Краткая информация");
    ShortInfoTitle->setObjectName("ShortInfoTitle");
    ShortInfoTitlePict = new QLabel();
    ShortInfoPixmap.load(":/img/res/monitoring_FILL0_wght400_GRAD0_opsz24.svg");
    ShortInfoTitlePict->setPixmap(ShortInfoPixmap);
    ShortInfoTitlePict->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ShortInfoTitlePict->resize(24, 24);
    ShortInfoTitleHL->addWidget(ShortInfoTitlePict);
    ShortInfoTitleHL->addWidget(ShortInfoTitle);
    ShortInfoTitleHL->setContentsMargins(9, 0, 9, 0);

    RocketStartCheckText = new QLabel("Вражеских ракетных запусков не обнаружено");
    RocketStartCheckText->setObjectName("RocketStartCheckText");

    TimeToFirstTargetHL = new QBoxLayout(QBoxLayout::LeftToRight);
    TimeToFirstTargetText = new QLabel("Примерное время прилета до первой цели:");
    TimeToFirstTargetData = new QLabel("нет данных");
    TimeToFirstTargetData->setAlignment(Qt::AlignRight);
    TimeToFirstTargetHL->addWidget(TimeToFirstTargetText);
    TimeToFirstTargetHL->addWidget(TimeToFirstTargetData);

    FirstTargetHL = new QBoxLayout(QBoxLayout::LeftToRight);
    FirstTargetText = new QLabel("Предположительно первая цель:");
    FirstTargetData = new QLabel("нет данных");
    FirstTargetData->setAlignment(Qt::AlignRight);
    FirstTargetHL->addWidget(FirstTargetText);
    FirstTargetHL->addWidget(FirstTargetData);

    ListFirstTargetsAndTimeText = new QLabel("Список предположительных целей и предположительное время прилета");
    ListFirstTargetsAndTimeText->setWordWrap(true);

    ListFirstTargetsAndTime = new QTextEdit("Нет данных");
    ListFirstTargetsAndTime->setReadOnly(true);

    ShortInfoVL = new QBoxLayout(QBoxLayout::TopToBottom);
    ShortInfoVL->addLayout(ShortInfoTitleHL);
    ShortInfoVL->addWidget(RocketStartCheckText);
    ShortInfoVL->addLayout(TimeToFirstTargetHL);
    ShortInfoVL->addLayout(FirstTargetHL);
    ShortInfoVL->addWidget(ListFirstTargetsAndTimeText);
    ShortInfoVL->addWidget(ListFirstTargetsAndTime);
    ShortInfoVL->setSpacing(10);

    ShortInfoVLF = new QFrame(this);
    ShortInfoVLF->setLayout(ShortInfoVL);
        //ShortInfoVLF->setStyleSheet("Background-color: red");
    VL = new QBoxLayout(QBoxLayout::TopToBottom, this);
    VL->addWidget(ShortInfoVLF);
    //VL->setMargin(0);
    VL->setContentsMargins(0, 0, 0, 0);


}

