#include "mainwindow.h"

#include <QLabel>
#include <QMdiSubWindow>
#include <QMouseEvent>
#include <QScreen>
#include <QTabWidget>
#include <QToolBar>

#include "Modules/Autopark/View/MainFormAutopark/mainformautopark.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent ), ui( new Ui::MainWindow ) {
  ui->setupUi( this );
  ui->tabWidget->clear( );
  ui->tabWidget->setTabBarAutoHide( false );
  addToolBar( Qt::TopToolBarArea, createTopToolBar( ) );
  setCentralWidget( ui->tabWidget );
  statusBarOperations( );
//  connect( ui->tabWidget,
//           QOverload< int >::of( &QTabWidget::tabCloseRequested ), this,
//           QOverload< int >::of( &MainWindow::slotCloseTabWindow ) );
  connect( ui->tabWidget, QOverload<int>::of( &QTabWidget::tabBarClicked ), this, QOverload<int>::of( &MainWindow::slotSetCurrentChildrenWidget ));
  connect( ui->tabWidget,
           QOverload< int >::of( &QTabWidget::tabCloseRequested ), this, QOverload<int>::of( &MainWindow::slotSetCurrentChildrenWidget ));
  connect( ui->tabWidget,
           QOverload< int >::of( &QTabWidget::tabCloseRequested ), this, QOverload<int>::of( &MainWindow::slotCloseChildrenWidgetOnTabClose ));
  // setGeometry( screen( )->geometry( ) );  //на полный экран
}

MainWindow::~MainWindow( ) { delete ui; }

void MainWindow::slotAddTabWindow( ) {
}

void MainWindow::slotCloseTabWindow( int idx ) { ui->tabWidget->removeTab( idx ); }

void MainWindow::slotAddAutopark( int pos ) {
  ui->tabWidget->addTab( new MainFormAutopark,
                         tr( "Автопарк" ) );
  Q_UNUSED(pos)
}

void MainWindow::slotCloseChildrenWidget( int index ) {
  slotSetCurrentChildrenWidget(index);
}

void MainWindow::slotSetCurrentChildrenWidget( int index )
{
  currentWidget = ui->tabWidget->widget(index);
  //qDebug() << "MainWindow::slotSetCurrentChildrenWidget(int index) " << currentWidget;
}

void MainWindow::slotCloseChildrenWidgetOnTabClose(int index)
{
  if(currentWidget) {
    qDebug() << "currentWidget = " << currentWidget;
    currentWidget->deleteLater();
  }
  slotCloseTabWindow( index );
}

QToolBar *MainWindow::createTopToolBar( ) {
  QToolBar* topToolBar = new QToolBar( "TopToolBar", this );
  topToolBar->addAction( tr( "Автопарк" ), this,
                         QOverload< int >::of( &MainWindow::slotAddAutopark ) );
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
