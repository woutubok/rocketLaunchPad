#ifndef ROCKETLAUNCHTRACKINGWIDGET_H
#define ROCKETLAUNCHTRACKINGWIDGET_H

#include <QWidget>
#include "shortinfobox.h"
#include "sarsbox.h"
#include "controlandmapbox.h"

class RocketLaunchTrackingWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RocketLaunchTrackingWidget(QWidget *parent = nullptr);
     ShortInfoBox *ShortInfo;
     SARSBox *SARS;
     ControlAndMapBox *ControlAndMap;
private:
    QBoxLayout *HL;
    QBoxLayout *ShortInfoAndSARSVL;

signals:

};

#endif // ROCKETLAUNCHTRACKINGWIDGET_H
