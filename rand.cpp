#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#define MAX 10

using namespace std;

int main()
{
 int number[MAX]={0};
 int i;
 unsigned seed;
 cin>>seed;
 srand(seed);
 for(i=0;i<MAX;i++)
 {
   number[i]=rand()%100;
   cout<<" "<<number[i]<<endl;
 }
}
