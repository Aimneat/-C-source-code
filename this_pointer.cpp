//Every object in C++ has access to its own address through an important pointer called this pointer.The this pointer is an implicit parameter to all member functions.Therefore ,inside a member function, this may be used to refer to the invoking object.
//Friend functions do not have a this pointer ,because firends are not members of a class.


#include<iostream>

using namespace std;

class Box{
     public:
	//constructor definitoin
	Box(double l=2,double b=2,double h=2){
		cout << "constructor called." <<endl;
		length=l;
		breadth=b;
		height=h;
	}
	double Volume(){
		return length*breadth*height;
	}
	int compare(Box box){
		return this->Volume()>box.Volume();
	}

     private:
	double length;
	double breadth;
	double height;
};

int main(void){
	Box box1(3.3,1.2,1.5);
	Box box2(8.5,6.0,2.0);
	Box *ptrBox;    //delare pointer to a class

	ptrBox = &box1;

	//Now try to access a member using member access operator
	cout<< "volume of box1:"<< ptrBox->Volume()<<endl;


	if (box1.compare(box2)){
		cout <<" box2 is smaller than box1" <<endl;
	}
	else{
		cout <<"box2 is equal to or larger than box1" <<endl;
		return 0;
	}
}
