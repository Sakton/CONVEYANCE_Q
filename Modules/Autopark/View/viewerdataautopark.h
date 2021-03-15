#ifndef VIEWERDATAAUTOPARK_H
#define VIEWERDATAAUTOPARK_H

#include <QWidget>
#include <set>
#include <unordered_map>

class QListWidgetItem;
class TheDelegateFormaAuto;

namespace Ui {
class ViewerDataAutopark;
}

class ViewerDataAutopark : public QWidget
{
  Q_OBJECT

  using MapAuto = std::map< QString, QString >;
  using HashAuto = std::unordered_map< QString, MapAuto >;

 public:
  explicit ViewerDataAutopark(QWidget *parent = nullptr);
  ~ViewerDataAutopark( );

 public slots:
  void slotClickCancelButton( );
  void slotClickedOkButton( );
  void slotClickedAutoItem( QListWidgetItem *item );

 private:
  void setElementsWidget( );
  void readAutosFromDb( );
  void saveChangesToDb( );

 private:
  HashAuto autobase;  //организация прокси
  TheDelegateFormaAuto *currentDelegate;
  Ui::ViewerDataAutopark *ui;
};

#endif // VIEWERDATAAUTOPARK_H
