/*C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.
 *
 *
 * Virtual Functioin
 *
 * A virtual function is a function in a vase class that is declared using the keyword virtual. 
 * Defining in a base class a virtual function,with another version in a derived class,signals to the compiler that we don't want static linkage for this function.
 *What we do want is the selection of the function to be called at any given point in the program to be based on the kind of object for which it is called,This sort of operation is referred to as dynamic linkage,or late binding.
 *
 * */




#include<iostream>

using namespace std;

class Shape{
	protected:
		int width,height;

	public:
		Shape(int a=0,int b=0){
			width = a;
			height =b;
		}
		int area(){
			cout << "parent class area: " <<endl;
			return 0;
		}
};
class Rectangle : public Shape{
	public :
		Rectangle(int a=0 ,int b=0) : Shape(a,b){}  // I DON'T UNDERSTAND

		int area(){
			cout << "rectangle class area: "<<endl;
			return (width *height);
		}
};

class Triangle: public Shape{
	public :
		Triangle(int a=0,int b=0) :Shape(a,b){}

		int area(){
			cout<<"triangle class area: "<<endl;
			return (width*height/2);
		}
};

int main(){
	Shape *shape;
	Rectangle rec(10,7);
	Triangle tri(10,5);

	//store the address of Rectangle
	shape=&rec;

	//call rectangle area.
	shape->area();

	shape = &tri;

	shape->area();
	
	return 0;
}




