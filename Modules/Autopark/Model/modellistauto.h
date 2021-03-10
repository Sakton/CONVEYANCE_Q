#ifndef MODELLISTAUTO_H
#define MODELLISTAUTO_H

#include <QAbstractListModel>

class ModelListAuto : public QAbstractListModel {
 public:
  explicit ModelListAuto( QObject *parent );

  // QAbstractItemModel interface
 public:
  int rowCount( const QModelIndex &parent ) const override;
  QVariant data( const QModelIndex &index, int role ) const override;

  // QAbstractItemModel interface
 public:
  //  QModelIndex index( int row, int column, const QModelIndex &parent ) const override;
  //  QModelIndex parent( const QModelIndex &child ) const override;
  //  int columnCount( const QModelIndex &parent ) const override;

  Qt::ItemFlags flags( const QModelIndex &index ) const override;
  QHash< int, QByteArray > roleNames( ) const override;

 private:
  QStringList listItems;
  QHash< int, QByteArray > roles;
};

#endif // MODELLISTAUTO_H
