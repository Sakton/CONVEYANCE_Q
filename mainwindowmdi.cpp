#include "mainwindowmdi.h"

#include <QMdiSubWindow>

#include "ui_mainwindowmdi.h"

MainWindowMdi::MainWindowMdi(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindowMdi)
{
  ui->setupUi(this);
//  ui->mdiArea->setViewMode( QMdiArea::TabbedView );
//  ui->mdiArea->setTabShape( QTabWidget::Triangular );
//  ui->mdiArea->setTabsClosable( true );
//  ui->mdiArea->setTabsMovable( true );
//  ui->mdiArea->setDocumentMode(true);
  //ui->mdiArea->set
  // ui->mdiArea->setSi
  
  QMdiSubWindow *sub1 = new QMdiSubWindow(ui->mdiArea);
  sub1->setAttribute( Qt::WA_DeleteOnClose );
//  QMdiSubWindow *sub2 = new QMdiSubWindow(ui->mdiArea);
//  sub2->setAttribute( Qt::WA_DeleteOnClose );
  
  ui->mdiArea->addSubWindow( sub1 );
  //sub1->setMaximumSize(ui->mdiArea->size());
 // ui->mdiArea->addSubWindow( sub2 );
 //  sub1->setS
}

MainWindowMdi::~MainWindowMdi()
{
  delete ui;
}
