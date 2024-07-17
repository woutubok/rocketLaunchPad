#ifndef SHORTINFOBOX_H
#define SHORTINFOBOX_H

#include <QWidget>
#include <QBoxLayout>
#include <QFrame>
#include <QLabel>
#include <QTextEdit>

class ShortInfoBox : public QWidget
{
    Q_OBJECT
public:
    explicit ShortInfoBox(QWidget *parent = nullptr);
    QFrame *ShortInfoVLF;
private:
    QBoxLayout *VL;
    QBoxLayout *ShortInfoVL;
    QBoxLayout *ShortInfoTitleHL;
    QBoxLayout *TimeToFirstTargetHL;
    QBoxLayout *FirstTargetHL;
    QPixmap ShortInfoPixmap;
    QLabel *ShortInfoTitlePict;
    QLabel *ShortInfoTitle;
    QLabel *RocketStartCheckText;
    QLabel *TimeToFirstTargetText;
    QLabel *TimeToFirstTargetData;
    QLabel *FirstTargetText;
    QLabel *FirstTargetData;
    QLabel *ListFirstTargetsAndTimeText;
    QTextEdit *ListFirstTargetsAndTime;

signals:

};

#endif // SHORTINFOBOX_H
