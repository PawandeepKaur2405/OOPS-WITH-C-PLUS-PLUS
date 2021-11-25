#include<iostream>
using namespace std;
class rem{
int a,b;
public:
rem(int a,int b)
{
  this->a=a;
  this->b=b;
  cout<<this->a/this->b;
}
};
int main()
{
 rem obj(78,23);
 }