#ifndef SARSBOX_H
#define SARSBOX_H

#include <QWidget>
#include <QBoxLayout>
#include <QFrame>
#include <QLabel>

class SARSBox : public QWidget
{
    Q_OBJECT
public:
    explicit SARSBox(QWidget *parent = nullptr);
    void setSARSStyle(QString style);
private:
    QBoxLayout *VL;
    QBoxLayout *ARSStatusVL;
    QBoxLayout *ARSStatusTitleHL;
    QBoxLayout *ConnectionWithHeadquartersHL;
    QBoxLayout *ConnectionWithPresidentHL;
    QBoxLayout *StateOfSensorsHL;
    QFrame *ARSStatusVLF;
    QPixmap ARSStatusPixmap;
    QLabel *ARSStatusTitle;
    QLabel *ARSStatusTitlePict;
    QLabel *ConnectionWithHeadquartersText;
    QLabel *ConnectionWithHeadquartersData;
    QLabel *ConnectionWithPresidentText;
    QLabel *ConnectionWithPresidentData;
    QLabel *StateOfSensorsText;
    QLabel *StateOfSensorsData;
signals:

};

#endif // SARSBOX_H
