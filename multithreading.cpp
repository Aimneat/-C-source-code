/**Process-based multitasking handles the concurrent execution of programs. 
 * *Thread-based multitasking deals with the concurrent execution of pieces of the same program.
 *
 * A multithreaded progam contains tow or more parts that can run concurrently. Each part of such a program is called a thread, and each thread defines a separate path of execution.
 *
 *
 *#include<pthread.h>
 pthread_create(thread,attr,start_routine,arg)
 *Here,pthread_create creates a new thread and makes it executable.
 *thread:an opaque,unique identifier for the new thread returned by the subroutine
 *attr:an opaque attrubute object that may be used to set thread attributes. You can specify a thread attributes object,or NULL for the default values.
 *arg:a single argument that may be passed to start_routine . it must be passed by reference as a pointer cast of type void .NULL may be used if no argument is to be passed.
 *
 *
 *
 * 
*/

#include<iostream>
#include<cstdlib>
#include<pthread.h>

using namespace std;

#define NUM_THREADS 5

struct thread_data{
	int thread_id;
	char *message;
};

void *PrintHello(void *threadarg){
	struct thread_data *my_data;
	my_data=(struct thread_data *)threadarg;

	cout<<"thread id:"<<my_data->thread_id;
	cout<<"message:"<<my_data->message<<endl;

	pthread_exit(NULL);
}

int main(){
	pthread_t threads[NUM_THREADS];
	struct thread_data td[NUM_THREADS];
	int rc;
	int i;

	for(i=0;i<NUM_THREADS;i++){
		cout<<"main():creating thread,"<<i<<endl;
		td[i].thread_id=i;
		td[i].message ="this is messagge";
		rc=pthread_create(&threads[i],NULL,PrintHello,(void *)&td[i]);
		if(rc){
			cout<<"error:unable to create thread,"<<rc<<endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
}
















