#include "widget.h"
#include "ui_widget.h"
#include "TStack.h"
#include "TCalculator.h"
#include "TDStack.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    tmp = ui->lineEdit->text();

    _tmp=tmp.toStdString();

    TCalculator calc;

    calc.SetExpr(_tmp);

    double res = calc.calc();

    ui->label_2->setText(QString::number(res));
}


void Widget::on_lineEdit_returnPressed()
{
    tmp = ui->lineEdit->text();

    _tmp=tmp.toStdString();

    TCalculator calc;

    calc.SetExpr(_tmp);

    double res = calc.calc();

    ui->label_2->setText(QString::number(res));
}

