#ifndef DDMWIDGET_H
#define DDMWIDGET_H

#include <QWidget>

namespace Ui {
class DdmWidget;
}

class DdmWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DdmWidget(QWidget *parent = nullptr);
    ~DdmWidget();

private:
    Ui::DdmWidget *ui;
};

#endif // DDMWIDGET_H
