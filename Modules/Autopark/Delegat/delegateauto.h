#ifndef DELEGATEAUTO_H
#define DELEGATEAUTO_H
#include <QStyledItemDelegate>

class DelegateAuto : public QStyledItemDelegate {
 public:
  explicit DelegateAuto( QObject *parent );

  // QAbstractItemDelegate interface
 public:
  QWidget *createEditor( QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index ) const override;
  void setEditorData( QWidget *editor, const QModelIndex &index ) const override;
  void paint( QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index ) const override;
  QSize sizeHint( const QStyleOptionViewItem &, const QModelIndex & ) const override;
  void updateEditorGeometry( QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index ) const override;
};

#endif // DELEGATEAUTO_H
