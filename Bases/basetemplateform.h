#ifndef BASETEMPLATEFORM_H
#define BASETEMPLATEFORM_H

#include <QWidget>

#include "IBaseForm.h"
// #include "Utility/AllConstants.h"

class BaseTemplateForm : public QWidget, public IBaseForm {
    Q_OBJECT

public:
    explicit BaseTemplateForm( QWidget *parent = nullptr );

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

    //private:
    //WARNING !!!
protected:
    Line data_;
};

#endif // BASETEMPLATEFORM_H
