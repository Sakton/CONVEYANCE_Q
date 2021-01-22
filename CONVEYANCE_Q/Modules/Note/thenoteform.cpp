#include "thenoteform.h"

#include "ui_thenoteform.h"

TheNoteForm::TheNoteForm( QWidget *parent ) : QWidget( parent ), ui( new Ui::TheNoteForm ) { ui->setupUi( this ); }

TheNoteForm::~TheNoteForm( ) { delete ui; }
