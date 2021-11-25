#include<iostream>

using namespace std;
 
string isPalindrome(string S)
{
   
    string P = S;
 
    reverse(P.begin(), P.end());
 

    if (S == P) 
    {
        return "Yes\n";
    }
    else 
    {
      	return "No\n";
    }
}
 
int main()
{
    string S;
    getline (cin, S);
    cout << isPalindrome(S);
    return 0;
}