#include<iostream>
#include<assert.h>

using namespace std;

class Box{
  protected:
	  double width;
};

class SmallBox:Box{  //SmallBox is the derived class.
     public :
	     void setSmallWidth(double wid);
             double getSmallWidth(void);
};

//Member functions of child class
double SmallBox::getSmallWidth(void)
{
  return width;
}

void SmallBox::setSmallWidth(double wid){
  width=wid;
}


int main(){
  SmallBox box;

  box.setSmallWidth(5.0);
  cout<<box.getSmallWidth()<<endl;

  return 0;
} 



