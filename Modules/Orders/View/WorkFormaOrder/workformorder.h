#ifndef WORKFORMORDER_H
#define WORKFORMORDER_H

#include <QWidget>

namespace Ui {
class WorkFormOrder;
}

class ModelOrderData;

class WorkFormOrder : public QWidget {
    Q_OBJECT

public:
    explicit WorkFormOrder( ModelOrderData *model, QWidget *parent = nullptr );
    ~WorkFormOrder( );

private:
    void connects( );

public slots:
    void slotOkButton( );
    void slotCancelButton( );

private:
    Ui::WorkFormOrder *ui;
    ModelOrderData *model_;
};

#endif // WORKFORMORDER_H
