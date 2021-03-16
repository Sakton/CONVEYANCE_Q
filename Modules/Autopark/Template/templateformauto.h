#ifndef TEMPLATEFORMAUTO_H
#define TEMPLATEFORMAUTO_H

#include <QDate>
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

  void readConstDataForm( );
  const std::map< QString, QString >& dataForm( ) const;
  void writeForm( const std::map< QString, QString >& data );
  void clearForm( );

 public slots:
  void slotVinValidate( const QString& vin );
  void slotDateChangedNextTech( QDate d );
  //**
  void slotReadBrand( );
  void slotReadSeries( );
  void slotReadModel( );
  void slotReadGosNumber( );
  void slotReadVin( );
  void slotReadLenth( );
  void slotReadWidth( );
  void slotReadHeight( );
  void slotReadSpace( );
  void slotReadMaximalCarring( );
  void slotReadComments( );

 private:
  static const QStringList ecoClasses;
  static const QStringList volumeNotation;
  Ui::TemplateFormAuto* ui;
  std::map< QString, QString > autoData;
};

#endif  // TEMPLATEFORMAUTO_H
