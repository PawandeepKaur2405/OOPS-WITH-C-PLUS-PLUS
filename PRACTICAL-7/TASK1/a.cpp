#include<iostream>
using namespace std;
int main()
{
   int ch;
   cin >> ch;
   switch(ch)
   {
      case 1: cout << "Year = 2021"<<endl ;
                  break;
      case 2: cout << "Month = October" <<endl;
                  break;
      case 3: cout << "Date: 13" <<endl;
                  break;
      default: cout <<"Invalid Choice"<<endl;
                   break;
     }
}