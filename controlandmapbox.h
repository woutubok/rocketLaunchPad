#ifndef CONTROLANDMAPWIDGET_H
#define CONTROLANDMAPWIDGET_H

#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QRadioButton>
class ControlAndMapBox : public QWidget
{
    Q_OBJECT
public:
    explicit ControlAndMapBox(QWidget *parent = nullptr);
private:
    QBoxLayout *VL;
    QBoxLayout *MapDisplayModeTextHL;
    QBoxLayout *RadioBtnsHL;
    QBoxLayout *MapDisplayModeHL;
    QBoxLayout *FirstTwoBtnsHL;
    QBoxLayout *SecondTwoBtnsHL;
    QBoxLayout *ControlBtnsVL;
    QBoxLayout *ControlVL;
    QFrame *ControlBtnsVLF;
    QPushButton *ShowSensorsData;
    QPushButton *ShowSatelliteData;
    QPushButton *RequestOrbitalStationData;
    QPushButton *RequestRadarData;
    QPushButton *OpenFullMonitorModeBtn;
    QPushButton *OpenARSSettingsBtn;
    QPixmap WorldMapPixmap;
    QPixmap MapDisplayModePixmap;
    QLabel *WorldMap;
    QLabel *MapDisplayModeText;
    QLabel *MapDisplayModePict;
    QRadioButton *RbtnModeSatellite;
    QRadioButton *RbtnModeMap;
    QRadioButton *RbtnModeHybrid;
    QRadioButton *RbtnModeScheme;
    void setBtnsSizePolicy();
signals:

};

#endif // CONTROLANDMAPWIDGET_H
