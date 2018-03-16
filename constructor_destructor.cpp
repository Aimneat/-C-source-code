#include<iostream>
using namespace std;

class Line{
  public:
    void setLength(double len);
    double getLength(void);
    Line(double len);  //This is the constructor declaration
    //A class constructor is a special member function of a class that is executed whenever we create new objects of that class.
    //A constructor will have exact same as the class and it does not have any return type at all,not even void.Contstuctors can be very useful for setting initial values for certain member variables.  
    ~Line(); //This is the destructor declaration
    //A destructor is executed whenever an object of it's class goes out of scope or whenever the delete expressin is applied to a pingter to the object of that class. 
    //A destructor can neither return a value not can ti take any parameters.
    
  private :
    double length;
};


Line::Line(double len):length(len){
  cout << "Object is being created,length=" << len << endl;
}

Line::~Line(void){
	cout << "Object is being deleted" << endl;
}

void Line::setLength(double len){
	length=len;
}
double Line::getLength(void){
	return length;
}

int main(){
   Line line(10.0);
   
   //get initially set length.
   cout << "Length of line :" << line.getLength() <<endl;
   
   line.setLength(6.0);
   cout << line.getLength() << endl;

   return 0;
}
















