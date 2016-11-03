#include <QApplication>
#include "AnglePictureQT.h"
 
int main( int argc, char** argv )
{
  // QT Stuff
  QApplication app( argc, argv );
 
  AnglePictureQT AnglePictureQT;
  AnglePictureQT.show();
 
  return app.exec();
}
