/*The stack - All variables declared inside the function will take up memory from the stack
 * The heap - This is unused memory of the program and can be used to allocate the memory dynamically when program runs.
 *
 *
 * You can allocate memory at run time within the heap for the variable of a given type using a special operator in c++ which returns the address of the space allocated.This operator is called new operator
 *
 *
 * new data-type;
 * Here,data-type could be any built-in data type including an array or any user defined data types include class or structure.
 *
 *
 * */


#include<iostream>
using namespace std;

class Box{
	public:
	Box(){
		cout<<"constructor called"<<endl;
	}
	~Box(){
		cout<<"destructor called"<<endl;
	}
};

int main(){
	int i,j,k;
       //char** pvalue=new char [4][8];
       double*** pvalue =NULL;
       pvalue = new double **[9];

       for(i=0;i<9;i++){
	       pvalue[i]=new double *[10];
	       for(j=0;j<10;j++)
		       pvalue[i][j]=new double[4];
       }

       for(i=0;i<9;i++)
       {
		for(j=0;j<10;j++){
			for(k=0;k<4;k++)
			{
			   pvalue[i][j][k]=j+i+k;
			   cout<<pvalue[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
       }

        //print data
/*	for(i=0;i<9;i++)
		for(j=0;j<10;j++){
			if(j==0)
				cout<<endl;
			cout<<pvalue[i][j]<<"\t";
		}*/

	for(i=0;i<9;i++){
		for(j=0;j<10;j++)
		{
		delete [] pvalue[i][j];
		}
	}
	for(i=0;i<2;i++)
		delete [] pvalue[i];
	delete [] pvalue;


        Box *myBoxArray=new Box[2];
	delete [] myBoxArray; //delete array


	return 0;
}







