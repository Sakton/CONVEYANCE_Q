#include "delegateauto.h"

#include <QLineEdit>

#include "DelegatForm/thedelegateformaauto.h"

DelegateAuto::DelegateAuto( QObject *parent ) : QStyledItemDelegate( parent ) { qDebug( ) << "DelegateAuto::DelegateAuto"; }

QWidget *DelegateAuto::createEditor( QWidget *parent, const QStyleOptionViewItem & /*option*/, const QModelIndex &index ) const {
  qDebug( ) << "DelegateAuto::createEditor";
  return new TheDelegateFormaAuto( parent );
}

void DelegateAuto::setEditorData( QWidget *editor, const QModelIndex &index ) const {}

void DelegateAuto::paint( QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index ) const {
  //  TheDelegateFormaAuto df;
  //  df.show( );
  // return QStyledItemDelegate::paint( painter, option, index );
}

// QSize DelegateAuto::sizeHint( const QStyleOptionViewItem &option, const QModelIndex &index ) const {
//  return QStyledItemDelegate::sizeHint( option, index );
//}

void DelegateAuto::updateEditorGeometry( QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index ) const {
  editor->setGeometry( option.rect );
}
