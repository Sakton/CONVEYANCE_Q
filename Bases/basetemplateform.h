#ifndef BASETEMPLATEFORM_H
#define BASETEMPLATEFORM_H

#include <QWidget>

#include "Utility/AllConstants.h"

class BaseTemplateForm : public QWidget
{
  Q_OBJECT

 public:
  using Line = AllConstatnts::Line;
  explicit BaseTemplateForm( QWidget *parent = nullptr );

  // overload operations
  virtual void readDataOfForm( ) = 0;
  virtual void setDataInForm( const Line &dataLine ) = 0;
  virtual void clearForm( ) const = 0;

  // common operations
  const Line &dataForm( ) {
    readDataOfForm( );
    return data_;
  };

  void setData( const Line &data ) {
    data_.clear( );
    data_ = data;
  }

 protected:
  void add( const QString &key, const QString &val ) { data_[ key ] = val; }
  const QString &val( const QString &key ) { return data_[ key ]; }

 private:
  Line data_;
};

#endif // BASETEMPLATEFORM_H
