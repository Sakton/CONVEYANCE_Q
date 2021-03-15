#ifndef TEMPLATEFORMAUTO_H
#define TEMPLATEFORMAUTO_H

#include <QWidget>
#include <map>

namespace Ui {
class TemplateFormAuto;
}

class TemplateFormAuto : public QWidget {
  Q_OBJECT

 public:
  explicit TemplateFormAuto( QWidget* parent = nullptr );
  ~TemplateFormAuto( );

  std::map< QString, QString > readForm( ) const;
  void writeForm( const std::map< QString, QString >& data );

 public slots:
  void slotVinValidate( const QString& vin );

 private:
  static const QStringList ecoClasses;
  static const QStringList volumeNotation;
  Ui::TemplateFormAuto* ui;
};

#endif  // TEMPLATEFORMAUTO_H
