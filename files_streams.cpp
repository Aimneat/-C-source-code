#include<fstream>
#include<iostream>
using namespace std;

int main(){
	char data[100];

	//open a file in write mode
	ofstream outfile;
	outfile.open("afile.dat");

	cout<<"writing to the file"<<endl;
	cout<<"enter you name: ";
	cin.getline(data,100);

	//write inputted data into the file
	outfile<<data<<endl;

	cout <<"enter your age: ";
	cin >>data;
	cin.ignore();

	//again write inputted data into the file
	outfile<<data <<endl;

	//close the opened file
	outfile.close();

	//open a file in read mode
	ifstream infile;
	infile.open("afile.dat");
	
	cout<<"reading from the file"<<endl;
	infile >>data;

	//write the data at the screen
	cout<<data <<endl;

	//again read the data from the fiele and displayit
	infile >>data;
	cout<<data<<endl;

	//close the opened file
	infile.close();

	return 0;
}




/*getline() function to read the line form outside and ignore() function to ignore the extra characters left by previous read statement*/


?
/*Both istream and ostream provide member functionss for repositioning th file-position pointer.These member functions are seekg("seek get")for istream and seekp("seek put")for ostream.
 * The argument to seekg and seekp normally is a long integer. A second argument can be specified to indicate the seek direction. The seek direction can be ios::beg(the default)for positioning relative to the beginning of a stream or ios::end for positioning relative to the end of a stream.
