#ifndef MODELORDERDATA_H
#define MODELORDERDATA_H
#include <Utility/AllConstants.h>

#include <QSqlTableModel>

class ModelOrderData : public QSqlTableModel {
 public:
  enum OrderRoles { ID = Qt::UserRole + 1 };

  ModelOrderData( QObject *parent = nullptr );

  // QAbstractItemModel interface
 public:
  QVariant data( const QModelIndex &index, int role ) const override;
  QVariant headerData( int section, Qt::Orientation orientation,
                       int role ) const override;

 private:
  void init( );
};

#endif // MODELORDERDATA_H
