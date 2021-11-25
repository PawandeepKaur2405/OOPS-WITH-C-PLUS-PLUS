#include <iostream>
using namespace std;
int main()
{
    string str;
    
    getline(cin,str);
 
    reverse(str.begin(), str.end());
 
    cout << str << "\n";
    return 0;
}