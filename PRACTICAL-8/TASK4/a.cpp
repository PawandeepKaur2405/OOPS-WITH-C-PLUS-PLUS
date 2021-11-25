#include<iostream>
using namespace std; 


long int fact(int n)
 {
  long ans = 1;
   for(int i = 1 ; i <= n ; i++)
   {
      ans*=i;
   }
   return ans;
 }

int main()
{
  int num;
  cout << "Enter the number : "<<endl;
  cin >> num;
  cout << fact(num) << endl;
  return 0;
}