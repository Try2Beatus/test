#include "widget.h"
#include "ui_widget.h"
#include "model.h"
#include "controller.h"

Widget* Widget::widget = nullptr;

Widget::Widget( QWidget* parent ) :
  QWidget( parent )
{
  setupUi( this );
}

Widget::~Widget()
{
  widget = nullptr;
}

Widget* Widget::getInstance()
{
  if ( widget==nullptr ) widget = new Widget;
  return( widget );
}

void Widget::on_pb1_clicked()
{
  Controller::getInstance()->pb1Clicked();
}

void Widget::on_pb2_clicked()
{
  Controller::getInstance()->pb2Clicked();
}

void Widget::on_pb3_clicked()
{
  Controller::getInstance()->pb3Clicked();
}

void Widget::on_pbExit_clicked()
{
  Controller::getInstance()->pbExitClicked();
}
