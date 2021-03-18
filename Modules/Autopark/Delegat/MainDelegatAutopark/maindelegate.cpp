#include "maindelegate.h"

MainDelegate::MainDelegate( QObject* parent ) : QStyledItemDelegate( parent ) {}

void MainDelegate::paint( QPainter* painter,
                          const QStyleOptionViewItem& option,
                          const QModelIndex& index ) const {}

QSize MainDelegate::sizeHint( const QStyleOptionViewItem& option,
                              const QModelIndex& index ) const {
  return option.rect.size( );
}
