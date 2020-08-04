#include "ddmwidget.h"
#include "ui_ddmwidget.h"

DdmWidget::DdmWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DdmWidget)
{
    ui->setupUi(this);
}

DdmWidget::~DdmWidget()
{
    delete ui;
}
