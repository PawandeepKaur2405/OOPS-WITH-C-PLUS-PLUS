#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int main() 
{
    int num=1234;
    cout<<"This is the first line."<<endl;           // 'endl' goes to next line
    cout<<setw(15)<<setfill('*')<<num;              // 'setw' makes spaces and 'setfill' fills those spaces with the specified character
}