#include "model.h"
#include "controller.h"
#include "widget.h"

Model* Model::model = nullptr;

Model::Model( QObject* parent ) : QObject( parent )
{}

Model::~Model()
{
  model = nullptr;
}

Model* Model::getInstance()
{
  if ( model==nullptr ) model = new Model;
  return( model );
}
