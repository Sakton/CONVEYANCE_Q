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

 private:
  QStringList listItems;
};

#endif // MODELLISTAUTO_H
