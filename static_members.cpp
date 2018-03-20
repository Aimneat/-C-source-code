/*when we declare a member of a clas as static it means no maatter how many objects of the class are created,thereis only one copy of the statix member.
 *
 * A static member is shared by all objects of the class.All static data is initialized to zero when the first object is created,if no other initialization is present. We can't put it in the class definition but it can be initialized outside the class as done in the following example by reduclaring the static variable,using the scope resolution resolution operator::to identify which class it belongs to.
 *
 *
 * By declaring a function member as static ,you make it independent of any particular object of the class .A static mamber function can be called even if no objects of the clss exist and the static functions are accessed using only the class name and the scope resolution opertor ::.
 * A static member function can only access static data member ,other static member functions and any othe functions from outside the class.
 *Static member functions have a class scope and they do not have access to the this pointer of the class. You could use a static member function to determine whether some objects of hte class have been created or not.
*/


#include<iostream>

using namespace std;

class Box{
	public :
		static int objectCount;

		Box (double l=2,double b=2,double h=2){
			cout << "constructor called." << endl;
			length=l;
			breadth=b;
			height=h;

			//increase every time object is created
			objectCount++;
		}

		double Volume(){
			return length*breadth*height;
		}
		static int getCount(){
			return objectCount;
		}
	private :
		double length;
		double breadth;
		double height;

};

//initialize static member of class Box
int Box::objectCount=0;

int main(void){
	//print total number of objects before creating object.
	cout<<"inital stage count:"<<Box::getCount()<<endl;

	Box box1(3.3,1.2,1.5);
	Box box2(8.5,6.0,2.0);

	//print total nember of objects after creating object.
	cout << " final stage count "<< Box::getCount()<<endl;
	return 0;
}
