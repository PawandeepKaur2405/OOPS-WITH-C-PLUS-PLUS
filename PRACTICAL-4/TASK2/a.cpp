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
using namespace first;
using namespace second;
int main()
{
   int a= add(5,2.2); 
   cout << " Sum of entered numbers is: " <<a<<endl;
   return 0;
}
   