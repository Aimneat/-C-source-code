//A friend function of a class is defined outside that class'scope but is has the right to access all private and protected members of the class.


#include<iostream>

using namespace std;

class Box{
	double width;
   public :
	friend void printWidth(Box box);
	void setWidth(double wid);
};

void Box::setWidth(double wid){
	width =wid;
}

//Note: printWidth() is not a member function of any class
void printWidth(Box box)
{
	//Because printWidth() is a friend of Box ,it can directly access any member of this class
	cout <<"width of box:"<<box.width<<endl;
}

int main(){
	Box box;

	box.setWidth(10.0);

	printWidth(box);

	return 0;
}

