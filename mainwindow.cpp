#include "mainwindow.h"

#include <QLabel>
#include <QMdiSubWindow>
#include <QMouseEvent>
#include <QTabWidget>
#include <QToolBar>

//#include "Modules/Orders/orderstable.h"
#include "Modules/Autopark/theautomobilform.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent ), ui( new Ui::MainWindow ) {
  ui->setupUi( this );
  addToolBar( Qt::TopToolBarArea, createTopToolBar( ) );
  setCentralWidget( ui->tabWidget );
  //  ui->tabWidget->setTabBarAutoHide( false );
  //  ui->tabWidget->clear( );
  ui->tabWidget->addTab( new TheAutomobilForm, "Auto" );

  statusBarOperations( );

  connect( ui->actionAdd, QOverload< bool >::of( &QAction::triggered ), this, QOverload<>::of( &MainWindow::slotAddTabWindow ) );
  connect( ui->tabWidget, QOverload< int >::of( &QTabWidget::tabCloseRequested ), this,
           QOverload< int >::of( &MainWindow::slotCloseTabWindow ) );
}

MainWindow::~MainWindow( ) { delete ui; }

void MainWindow::slotAddTabWindow( ) { /*ui->tabWidget->addTab( new OrdersTable, "lalala" );*/
}
void MainWindow::slotCloseTabWindow( int idx ) { ui->tabWidget->removeTab( idx ); }

QToolBar *MainWindow::createTopToolBar( ) {
  QToolBar *topToolBar = new QToolBar( "topToolBar", this );
  topToolBar->addAction( "AddTest", this, QOverload<>::of( &MainWindow::slotAddTabWindow ) );
  topToolBar->addAction( "|||" );
  topToolBar->addAction( "This" );
  topToolBar->addAction( "Is" );
  topToolBar->addAction( "Toolbar" );
  return topToolBar;
}

void MainWindow::statusBarOperations( ) {
  labelMouseX = new QLabel( statusBar( ) );
  labelMouseY = new QLabel( statusBar( ) );

  statusBar( )->addWidget( labelMouseX );
  statusBar( )->addWidget( labelMouseY );
}

void MainWindow::mouseMoveEvent( QMouseEvent *event ) {
  labelMouseX->setText( "This Status Bar X = " + QString( ).setNum( event->position( ).x( ) ) );
  labelMouseY->setText( "Y = " + QString( ).setNum( event->position( ).y( ) ) );
}
