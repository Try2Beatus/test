#ifndef MODELL_H
#define MODELL_H

#include <QObject>

class Controller;
class Widget;
class Settings;

class Model : public QObject
{
  Q_OBJECT
public:
  ~Model( void );
  static Model* getInstance( void );

private:
  Model( QObject* parent = nullptr );
  static Model* model;
};

#endif // MODELL_H
