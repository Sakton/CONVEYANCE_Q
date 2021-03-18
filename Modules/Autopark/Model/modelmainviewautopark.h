#ifndef MODELMAINVIEWAUTOPARK_H
#define MODELMAINVIEWAUTOPARK_H
#include <QAbstractListModel>
#include "../../../Utility/AllConstants.h"

class ModelMainViewAutopark : public QAbstractListModel {
  Q_OBJECT

  using Table = AllConstatnts::Table;
  using MapAuto = AllConstatnts::Line;

 public:
  explicit ModelMainViewAutopark( QObject* parent );

 private:
  void readDataFrokmDb( );

  // QAbstractItemModel interface
 public:
  int rowCount( const QModelIndex& parent ) const override;
  QVariant data( const QModelIndex& index, int role ) const override;
  //  Qt::ItemFlags flags( const QModelIndex& index ) const override;

 private:
  Table data_;
};

#endif // MODELMAINVIEWAUTOPARK_H
