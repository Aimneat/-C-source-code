/*Signals are the interrupts delivered to a process by the operating system which can terminate a program prematurely.
 *
 *void (*signal (int sig, void (*func)(int)))(int);
 *this function receives two arguments:first argumeny as an iinteger which represents signal number and second argument as a pointer to the signal-handling function.
 *
 * */

/*#include<iostream>
#include<csignal>
#include<unistd.h>
#include<cstdlib>

using namespace std;

void signalHandler(int signum){
	cout<<"interrupt signal ("<<signum<<")received.\n";
	//cleanup and close up stuff here
	//terminate program

	exit(signum);
}

int main(){
	//register signal SIGINT and signal handler
	signal(SIGINT,signalHandler);

	while(1){
		cout<<"going to sleep..."<<endl;
		sleep(1);
	}
	return 0;
}
*/


#include<iostream>
#include<csignal>
#include<cstdlib>
#include<unistd.h>

using namespace std;

void signalHandler(int signum){
	cout<<"interrupt signal("<<signum<<")received.\n";

	//cleanup and close up stuff here
	//terminate program
	
	exit(signum);
}

int main(){
	int i=0;
	//register signal SIGINT and signal handler
	signal (SIGINT,signalHandler);

	while(++i){
		cout<<"going to sleep..."<<endl;
		if(i==3){
			raise(SIGINT);
		}
		sleep(1);
	}
	return 0;
}










