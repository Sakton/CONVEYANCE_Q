#ifndef TEMPLATEFORMAUTO_H
#define TEMPLATEFORMAUTO_H

#include <QDate>
#include <QWidget>
#include "Utility/AllConstants.h"

// Одна запись, по сути это строка таблицы БД, в такой форме

namespace Ui {
class TemplateFormAuto;
}

class TemplateFormAuto : public QWidget {
  Q_OBJECT

  using Line = AllConstatnts::Line;

 public:
  explicit TemplateFormAuto( QWidget* parent = nullptr );
  ~TemplateFormAuto( );

  const Line& dataForm( );
  void writeForm( const Line& data );
  void clearForm( ) const;
  void setVinNoChange( ) const;

 private:
  void read( );
  void readConstDataForm( );

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
  Line autoData;
};

#endif  // TEMPLATEFORMAUTO_H
