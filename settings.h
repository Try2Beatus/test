#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QSettings>

const QString SETTINGSFILE = "settings";

class Settings : public QObject
{
  Q_OBJECT
public:
  ~Settings();
  static Settings* getInstance();
  void             saveSettings();
  void             loadSettings();

private:
  Settings( QObject* parent = nullptr );
  static Settings* settings;
};

#endif // SETTINGS_H
