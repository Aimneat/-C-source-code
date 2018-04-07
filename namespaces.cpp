/*
 * a namespace define a scope
 *
 * You can also avoid prepending of namespaces with the using directive. This directive tells the compiler that the subsequent code is making use of names in the specified namespace.
 *
 * */

#include<iostream>
using namespace std;

//first name space
namespace first_space{
	void func(){
		cout<<"inside first_space"<<endl;
	}


    //second name space
    namespace second_space{
	void func(){
		cout<<"inside second_space"<<endl;
	}
    }
}

using namespace first_space::second_space;

int main(){
	//this calls function from second name space.
	func();

	return 0;
}




