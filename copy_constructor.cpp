
//The copy constructor is a constructor which creates an object by initializing it with an object of the same class,which has been created previouly.

/*
  The copy constructor is used to -

 *Initialize one object from another of the same type

 *Copy an object to pass it as an argument to a function

 *Copy an object to return it from a function
 
 */

#include<iostream>

using namespace std;

class Line{
	public :
		int getLength(void);

		//simple constructor
		Line(int len); 

		//copy constructor
		Line(const Line &obj);

		//destructor
                ~Line();
	private :
		int *ptr;
};

Line::Line(int len){
	cout << "Normal constructor allocating ptr" << endl;

	//allocate memory for the pointer;
	ptr=new int;
	*ptr = len;
}

Line::Line(const Line &obj){
	cout << "Copy constuctor allocating ptr." << endl;
	ptr = new int ;
	*ptr =*obj.ptr;  //copy the value
}

Line::~Line(void){
	cout << "Freeing memory" << endl;
	delete ptr;
}

int Line::getLength(void){
	return *ptr;
}

void display(Line obj){
	cout << "Length of line :" << obj.getLength()<<endl;
}

int main(){
	Line line1(10);

	Line line2=line1; //This also calls copy constructor

	display(line1);
	display(line2);
	
	return 0;
}



