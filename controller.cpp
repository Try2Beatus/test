#include "controller.h"
#include "model.h"
#include "widget.h"
#include "settings.h"

Controller* Controller::controller = nullptr;

Controller::Controller( QObject* parent ) : QObject( parent )
{
  Widget::getInstance()->show();
  Model::getInstance();
  Settings::getInstance()->loadSettings();
}

Controller* Controller::getInstance()
{
  if ( controller==nullptr ) controller = new Controller;
  return( controller );
}

void Controller::pb1Clicked()
{
  qDebug() << "1 klicked";
}

void Controller::pb2Clicked()
{
  qDebug() << "2 klicked";
}

void Controller::pb3Clicked()
{
  qDebug() << "3 klicked";
}

void Controller::pbExitClicked()
{
  Settings::getInstance()->saveSettings();
  qApp->quit();
}

/*Dies ist ein Test*/
/*Dies ist ein zweiter Test*/
