/*The c++ interfaces are implemented using abstract classes.a class is made abstract by declaring at least one of its functions as pure virtual function.
 *
 * The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate base class from which other classes can inherit .Abstract classes cannot be used to instantiate objects and serves only as an interface.
 * Thus,if a subclass of an ABC needs to be instantiated,it has to implement each of the virtual functions,which means that it supports the interface declared by the ABc.
 *
 */


#include <iostream>
using namespace std;

//base class
class Shape{
	public :

	//pure virtual function providing interfac framework
	virtual float  getArea() =0;
	
	void setWidth(int w){
		width=w;
	}

	void setHeight(int h){
		height = h;
	}

	protected:
	int width;
	int height;
};

//derived classes
class Rectangle : public Shape{
	public :
		float getArea(){
			return (width*height);
		}
};

class Triangle :public Shape{
	public :
		float getArea(){
			return (width * height)/2.0;
		}
};

int main(void ){
	Rectangle rect;
	Triangle tri;

	rect.setWidth(5);
	rect.setHeight(7);

	//print the area of the object.
	cout<<" total Reatangle area : "<<rect.getArea()<<endl;

	tri.setWidth(5);
	tri.setHeight(7);

	//print the area of the object
	cout<<" totao Triangle area : "<<tri.getArea()<<endl;
	
	return 0;
}






