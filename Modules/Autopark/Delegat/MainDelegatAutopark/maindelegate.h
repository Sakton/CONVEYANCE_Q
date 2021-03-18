#ifndef MAINDELEGATE_H
#define MAINDELEGATE_H

#include <QStyledItemDelegate>

class MainDelegate : public QStyledItemDelegate {
  Q_OBJECT

 public:
  explicit MainDelegate( QObject* parent );

  // QAbstractItemDelegate interface
 public:
  void paint( QPainter* painter,
              const QStyleOptionViewItem& option,
              const QModelIndex& index ) const override;
  QSize sizeHint( const QStyleOptionViewItem& option,
                  const QModelIndex& index ) const override;
};

#endif // MAINDELEGATE_H
