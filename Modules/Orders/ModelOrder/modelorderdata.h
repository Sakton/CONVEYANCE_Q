#ifndef MODELORDERDATA_H
#define MODELORDERDATA_H
#include <Utility/AllConstants.h>

#include <QAbstractTableModel>

class ModelOrderData : public QAbstractTableModel {
    Q_OBJECT

public:
    using Table1 = AllConstatnts::Table1;
    using LineHash = AllConstatnts::LineHash;
    enum OrderRoles { ID = Qt::UserRole + 1 };

    explicit ModelOrderData( QObject *parent = nullptr );

    // QAbstractItemModel interface
public:
    QVariant data( const QModelIndex &index, int role ) const override;
    QVariant headerData( int section, Qt::Orientation orientation,
        int role ) const override;
    int rowCount( const QModelIndex & ) const override;
    int columnCount( const QModelIndex & ) const override;

    //MyMethods
    void insert( const LineHash &data );

public:
    void addRecord( );
    void updateRecord( );
    void removeRecord( );

private:
    void selectFromDb( );

signals:
    void tmpDataCh( );

private:
    Table1 tableData_;
};

#endif // MODELORDERDATA_H
