/*Templates are the foundation of generic programming,wihich involves writin code in a way that is independent of any particular type.
 * A template is a blueprint or formula for creatin a generic class or a function. The library containers like iterators and algorithms are examples of generic programming and have been developed using template concept.
 * There is a single definition of each container, such as vector, but we can define many different kinds of vectors for example,vector<int> or vector<string>.
 *
 *
 *class template
 template <class type> class class-name{
 .
 .
 }
 here,type is the placeholder type name, which will be specified when a class is instantiated. You cna define more than one generic data type by using a comma-separated list.
 *
 *
 * */


#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<stdexcept>

using namespace std;

template <typename T>
inline T const&Max(T const& a,T const & b){
	return a<b?b:a;
}

template <class T>
class Stack{
	private:
		vector <T> elems; //elements
	
	public:
		void push(T const&);  //push element
		void pop();      
		T top() const;  //return true if empty

		bool empty() const{  //return true if empty
			return elems.empty();
		}
};

template <class T>
void Stack<T>::push (T const& elem){
	//append copy of passed element
	elems.push_back(elem);
}

template <class T>
void Stack<T>::pop(){
	if (elems.empty()){
			throw out_of_range("Stack<>::pop():empty stack");
			}

			//remove last element
			elems.pop_back();
}

template <class T>
T Stack<T>::top() const{
  if (elems.empty()){
		  throw out_of_range("Stack<>::top():empty stack");
		  }

		  //return copy of last element
		  return elems.back();
 }

int main(){
	int i =39;
	int j=20;
	cout<<"max(i,j):"<<Max(i,j)<<endl;

	double f1=13.5;
	double f2=20.7;
	cout<<"max(f1,f2):"<<Max(f1,f2)<<endl;

	string s1="hello";
	string s2="world";
	cout<<"max(s1,s2):"<<Max(s1,s2)<<endl;


	try {
		Stack <int> intStack;  //stack of ints
		Stack<string> stringStack; //stack of strings
		//manipulate int stack
		intStack.push(7);
		cout<<intStack.top()<<endl;

		//manipulate string stack
		stringStack.push("hello");
		cout<<stringStack.top()<<std::endl;
		stringStack.pop();
		stringStack.pop();
	}catch(exception const& ex){
		cerr<<"exception:"<<ex.what()<<endl;
		return -1;
	}


	return 0;
}







