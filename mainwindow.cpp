#include "mainwindow.h"

#include <QLabel>
#include <QMdiSubWindow>
#include <QMouseEvent>
#include <QTabWidget>
#include <QToolBar>

//#include "Modules/Orders/orderstable.h"
#include "Modules/Autopark/View/MainFormAutopark/mainformautopark.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent ), ui( new Ui::MainWindow ) {
  ui->setupUi( this );
  ui->tabWidget->clear( );
  addToolBar( Qt::TopToolBarArea, createTopToolBar( ) );
  setCentralWidget( ui->tabWidget );
  statusBarOperations( );
  connect( ui->tabWidget, QOverload< int >::of( &QTabWidget::tabCloseRequested ), this,
           QOverload< int >::of( &MainWindow::slotCloseTabWindow ) );
}

MainWindow::~MainWindow( ) { delete ui; }

void MainWindow::slotAddTabWindow( ) {
  ui->tabWidget->addTab( new MainFormAutopark, tr( "Автопарк" ) );
}

void MainWindow::slotCloseTabWindow( int idx ) { ui->tabWidget->removeTab( idx ); }

QToolBar *MainWindow::createTopToolBar( ) {
  QToolBar* topToolBar = new QToolBar( "TopToolBar", this );
  topToolBar->addAction( tr( "Автопарк" ), this,
                         QOverload<>::of( &MainWindow::slotAddTabWindow ) );
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
