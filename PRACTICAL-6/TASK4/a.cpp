#include<iostream>
using namespace std;
 
void relationalOperation(string s1, string s2)
{
 
    if (s1 != s2)
        cout << s1 << " is not equal to " << s2 << endl;
    else
        cout << s1 << " is equal to " << s2 << endl;
}
 
// Driver code
int main()
{
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    relationalOperation(s1, s2);
    return 0;
}