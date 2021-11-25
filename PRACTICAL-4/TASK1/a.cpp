#include<iostream>
using namespace std;
namespace first
{
   int add(int a, int b)
     {
        return a+b;
     }
}
namespace second
{
    float add(float a, float b)
      {
        return a+b;
      }
}
int main()
{
   int a= first::add(5,2);
   float b = second::add(3.2,2.1); 
   cout << " Sum of entered numbers is: " <<a<<" "<<b<< endl;
   return 0;
}