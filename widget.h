#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include "ui_widget.h"

class Model;
class Controller;

class Widget : public QWidget, private Ui::Widget
{
  Q_OBJECT

public:
  ~Widget();
  static Widget* getInstance( void );

private:
  static Widget* widget;
  Widget( QWidget* parent = 0 );

public slots:
  void on_pb1_clicked();
  void on_pb2_clicked();
  void on_pb3_clicked();
  void on_pbExit_clicked();

};

#endif // WIDGET_H
