#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QtCore>
#include <QObject>

class Model;
class Widget;

class Controller : public QObject
{
  Q_OBJECT
public:
  static Controller* getInstance();
  void               pb1Clicked( void );
  void               pb2Clicked( void );
  void               pb3Clicked( void );
  void               pbExitClicked( void );

private:
  Controller( QObject* parent = nullptr );
  static Controller* controller;
};

#endif // CONTROLLER_H
