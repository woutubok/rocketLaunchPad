#ifndef ROCKETLAUNCHCONTROLWIDGET_H
#define ROCKETLAUNCHCONTROLWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QPlainTextEdit>
#include <QLabel>

class RocketLaunchControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RocketLaunchControlWidget(QWidget *parent = nullptr);
private:
    QBoxLayout *VL;
    QBoxLayout *ButtonsHL;
    QPushButton *ChooseTargetBtn;
    QPushButton *ChooseRocketTypeBtn;
    QPushButton *ChooseRockedLaunchStartBtn;
    QPushButton *LaterStartBtn;
    QPushButton *StartBtn;
    QPlainTextEdit *TerminalTextEdit;
    QLabel *TerminalTitle;
    QSize StartBtnLogoSize = QSize(29, 29);
    QSize BtnsLogoSize = QSize(20, 20);
    void setBtnsSizePolicy();
    void setBtnsLogoSize();
signals:

};

#endif // ROCKETLAUNCHCONTROLWIDGET_H
