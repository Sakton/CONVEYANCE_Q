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
  int rowCount( const QModelIndex &parent ) const override;
  int columnCount( const QModelIndex &parent ) const override;
  QVariant data( const QModelIndex &index, int role ) const override;

 public:
  void readDataFromDb( );

 private:
  AllConstatnts::Table tables_;
};

#endif // MODELORDERDATA_H
