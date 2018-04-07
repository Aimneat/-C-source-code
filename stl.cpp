/*
 * containers
 containsers are used to manage collections of objects of a certain kind.There are several different types of containers like deque,list,vector,map etc.
 * algorithms
 algorithms act on containers. They provide the means by which you will perform initialization,sorting,searching,and transforming of the contents of containers.
 * iterators
 iterators are used to step through the elements of collections of objects. These collections may be containers or subsets of containers.
 **/

#include<iostream>
#include<vector>
using namespace std;

int main(){

	//create a vector to store int
	vector<int> vec;
	int i;

	//display the original size of vec
	cout<<"vector size ="<<vec.size()<<endl;
	
	//push 5 values into the vector
	for(i=0;i<5;i++){
		vec.push_back(i);
	}

	//display extended size of vec
	cout<<"extended vector size ="<<vec.size()<<endl;

	//access 5 values from the vector
	for(i=0;i<5;i++){
		cout<<"value of vec["<<i<<"]="<<vec[i]<<endl;
	}
	//use iterator to access the values
	vector<int>::iterator v=vec.begin();
	while(v!=vec.end()){
		cout<<"value of v="<<*v<<endl;
		v++;
	}

	return 0;
}






