#include "controlandmapbox.h"

ControlAndMapBox::ControlAndMapBox(QWidget *parent) : QWidget(parent)
{
    /* map */
    WorldMap = new QLabel();
    WorldMapPixmap.load(":/img/res/map.png");
    WorldMap->setPixmap(WorldMapPixmap);
    WorldMap->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    WorldMap->setScaledContents(true);
    WorldMap->setObjectName("WorldMap");
    /* map mode */
    MapDisplayModeTextHL = new QBoxLayout(QBoxLayout::LeftToRight);
    MapDisplayModePict = new QLabel();
    MapDisplayModePixmap.load(":/img/res/map_FILL0_wght400_GRAD0_opsz24.svg");
    MapDisplayModePict->setPixmap(MapDisplayModePixmap);
    MapDisplayModePict->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    MapDisplayModePict->resize(24, 24);
    MapDisplayModeText = new QLabel("Режим отображения карты");
    MapDisplayModeTextHL->addWidget(MapDisplayModePict);
    MapDisplayModeTextHL->addWidget(MapDisplayModeText);

    RadioBtnsHL = new QBoxLayout(QBoxLayout::LeftToRight);
    RbtnModeSatellite = new QRadioButton("Спутник");
    RbtnModeMap = new QRadioButton("Карта");
    RbtnModeHybrid = new QRadioButton("Гибрид");
    RbtnModeScheme = new QRadioButton("Схематический");
    RbtnModeScheme->setChecked(true);
    RadioBtnsHL->addWidget(RbtnModeSatellite);
    RadioBtnsHL->addWidget(RbtnModeMap);
    RadioBtnsHL->addWidget(RbtnModeHybrid);
    RadioBtnsHL->addWidget(RbtnModeScheme);

    MapDisplayModeHL = new QBoxLayout (QBoxLayout::LeftToRight);
    MapDisplayModeHL->addLayout(MapDisplayModeTextHL, 2);
    MapDisplayModeHL->addLayout(RadioBtnsHL, 3);

    /* control */
    FirstTwoBtnsHL = new QBoxLayout (QBoxLayout::LeftToRight);
    ShowSensorsData = new QPushButton(QIcon(":/img/res/earthquake_FILL0_wght400_GRAD0_opsz24.svg"), "Показадать данные сейсмографа");
    ShowSatelliteData = new QPushButton(QIcon(":/img/res/satellite_alt_FILL0_wght400_GRAD0_opsz24.svg"), "Показать данные со спутника");
    FirstTwoBtnsHL->addWidget(ShowSensorsData);
    FirstTwoBtnsHL->addWidget(ShowSatelliteData);

    SecondTwoBtnsHL = new QBoxLayout (QBoxLayout::LeftToRight);
    RequestOrbitalStationData = new QPushButton(QIcon(":/img/res/public_FILL0_wght400_GRAD0_opsz24.svg"), "Запросить данные с орбитальной станции");
    RequestRadarData = new QPushButton(QIcon(":/img/res/radar_FILL0_wght400_GRAD0_opsz24.svg"), "Запросить ланные с радара");
    SecondTwoBtnsHL->addWidget(RequestOrbitalStationData);
    SecondTwoBtnsHL->addWidget(RequestRadarData);

    OpenFullMonitorModeBtn = new QPushButton(QIcon(":/img/res/analytics_FILL0_wght400_GRAD0_opsz24.svg"), "Перейти в полный режим мониторинга");
    OpenARSSettingsBtn = new QPushButton(QIcon(":/img/res/settings_FILL0_wght400_GRAD0_opsz24.svg"), "Открыть настройки системы автоматического ответного удара");
    ControlBtnsVL = new QBoxLayout(QBoxLayout::TopToBottom);
    ControlBtnsVL->addLayout(FirstTwoBtnsHL);
    ControlBtnsVL->addLayout(SecondTwoBtnsHL);
    ControlBtnsVL->addWidget(OpenFullMonitorModeBtn);
    ControlBtnsVL->addWidget(OpenARSSettingsBtn);
    ControlBtnsVLF = new QFrame();
    ControlBtnsVLF->setLayout(ControlBtnsVL);
    setBtnsSizePolicy();

    ControlVL = new QBoxLayout(QBoxLayout::TopToBottom);
    ControlVL->addLayout(MapDisplayModeHL);
    ControlVL->addWidget(ControlBtnsVLF);
    VL = new QBoxLayout(QBoxLayout::TopToBottom, this);
    VL->addWidget(WorldMap, 2);
    VL->addLayout(ControlVL, 1);
    VL->setContentsMargins(9, 0, 9, 0);
    VL->setObjectName("VL");
}

void ControlAndMapBox::setBtnsSizePolicy()
{
        ShowSensorsData->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        ShowSatelliteData->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        RequestOrbitalStationData->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        RequestRadarData->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        OpenFullMonitorModeBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        OpenARSSettingsBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}
