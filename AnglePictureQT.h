#ifndef AnglePictureQT_H
#define AnglePictureQT_H
 
#include <vtkSmartPointer.h>

#include <QMainWindow>
 
// Forward Qt class declarations
class Ui_AnglePictureQT;
 
class AnglePictureQT : public QMainWindow
{
  Q_OBJECT
public:
 
  // Constructor/Destructor
  AnglePictureQT(); 
  ~AnglePictureQT() {};
 
public slots:
 
  virtual void slotExit();

private:
 
  // Designer form
  Ui_AnglePictureQT *ui;
};
 
#endif
