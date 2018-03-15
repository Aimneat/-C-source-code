#include<iostream>
using namespace std;
int main()
{
  int a=0b00101;

  cout << a << endl;
  a&=~(1<<2);
  cout<<a<<endl;

  return 0;
}
