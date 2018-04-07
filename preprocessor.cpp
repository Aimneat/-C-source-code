/*the # operator causes a replacement-text token to be converted to a string surrounded by quotes.
 *
 * The ## operator is used to concatenate two tokens.
 *
 **/

#include<iostream>
using namespace std;

#define DEBUG

#define MIN(a,b) (((a)<(b))?a:b)

#define MKSTR(x) #x 

#define concat(a,b) a##b

int main(){
	int i,j;

        int xy=100;

	i=100;
	j=30;

#ifdef DEBUG
	cerr <<"trace: inside main function"<<endl;
#endif

#if 0
	//this is commented part
	cout<<MKSTR(HELLO C++) <<endl;
#endif
	cout<<"the minimum is "<<MIN(i,j)<<endl;

#ifdef DEBUG
	cerr<<"trace: coming out of main function"<<endl;
#endif

	cout<<MKSTR(HELLO C++) <<endl;

	cout<<concat(x,y);


	cout<<"value of __LINE__:"<<__LINE__<<endl;
	cout<<"value of __FILE__:"<<__FILE__<<endl;
	cout<<"value of __DATE__:"<<__DATE__<<endl;
	cout<<"value of __TIME__:"<<__TIME__<<endl;

	return 0;
}



