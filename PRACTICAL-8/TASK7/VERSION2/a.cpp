#include <iostream>

using namespace std;
void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"Values after swap: "<<a<<"\t"<<b<<endl;
}

int main()
{
  int a=10,b=20;
  cout<<"Values before swap: "<<a<<"\t"<<b<<endl;
  swap(a,b);
  return 0;
}