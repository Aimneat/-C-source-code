/*joining and detaching threads
 *
 * pthread_join(threadid,status)
 * pthread_detach(threadid)
 * The pthread_join() subroutine blocks the calling thread until the specified threadid thread terminates.When a thread is created,one of its attributes defines whether it is joinable or detached.Only threads that are created as joinabe can be joined.If a thread is created as detached,it can never be joined.
 *
 *
 **/


#include<iostream>
#include<cstdlib>
#include<pthread.h>
#include<unistd.h>

using namespace std;

#define NUM_THREADS 5

void *wait(void *t){
	int i;
	long tid;
	tid = (long )t;

	sleep(1);
	cout<<"sleeping in thread"<<endl;
        cout<<"thread with id:"<<tid<<"...exiting"<<endl;
	pthread_exit(NULL);
}

int main(){
	int rc;
	int i;
	pthread_t threads[NUM_THREADS];
	pthread_attr_t attr;
	void *status;

	//initialize and set thread joinable
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);

	for(i=0;i<NUM_THREADS;i++){
		cout<<"main():creating thread,"<<i<<endl;
		rc=pthread_create(&threads[i],NULL,wait,(void *)i);

		if(rc){
			cout<<"error:unable to create thread,"<<rc<<endl;
		}
	}

	//free attrivute and wait for the other threads
        pthread_attr_destroy(&attr);
	for(i=0;i<NUM_THREADS;i++){
		rc=pthread_join(threads[i],&status);
	if(rc){
		cout<<"error:unable to join,"<<rc<<endl;
		exit(-1);
	}

	cout<<"main:completedd thread id:"<<i;
	cout<<"exiting with status:"<<status<<endl;
	}

	cout<<"main:program exiting."<<endl;
	pthread_exit(NULL);
}







