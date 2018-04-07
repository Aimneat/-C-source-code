/*throw - A program throws an exception when a problem shows up. this is done using a throw keyword.
 * catch - A program catches an exception with an exception with an exception handler at the place in a program where you want to handle the problem.the catch keyword indicates the catching of an exception.
 * try - A try block identifies a block of code for which particular exceptions will be activated.It's followed by one or more catch blocks
 * */

#include<iostream>
#include<exception>
using namespace std;

struct MyException : public exception
{
	const char * what () const throw()
	{
		return "c++ exception ";
	}
};

int main(){
	try{
		throw MyException();
	}
	catch(MyException & e)
	{
		std::cout<<"myexception caught"<<std::endl;
		std::cout <<e.what()<<std::endl;
	}
	catch(std::exception &e)
	{
		//other errors
		
	}
}



