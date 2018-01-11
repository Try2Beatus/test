#include "settings.h"
#include "widget.h"

Settings* Settings::settings = nullptr;

Settings::Settings( QObject* parent ) : QObject( parent )
{}

Settings::~Settings()
{
  settings = nullptr;
}

Settings* Settings::getInstance()
{
  if ( settings==nullptr ) settings = new Settings;
  return( settings );
}

void Settings::saveSettings()
{
  QSettings qsetting( "settings.txt", QSettings::IniFormat, this );
  Widget*   widget = Widget::getInstance();
  qsetting.setValue( "maximized", widget->isMaximized() );
  if ( !Widget::getInstance()->isMaximized() )
  {
    qsetting.setValue( "size", widget->size() );
    qsetting.setValue( "pos",  widget->pos() );
  }
}

void Settings::loadSettings()
{
  QSettings qsetting( "settings.txt", QSettings::IniFormat, this );
  Widget*   widget = Widget::getInstance();
  if ( qsetting.value( "maximized", widget->isMaximized() ).toBool() )
  {
    widget->showMaximized();
  }
  else
  {
    widget->resize( qsetting.value( "size", widget->size() ).toSize() );
    widget->move( qsetting.value( "pos", widget->pos() ).toPoint() );
  }
}
