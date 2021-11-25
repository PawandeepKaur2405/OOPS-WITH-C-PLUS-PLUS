#include<iostream>
using namespace std;
int main()
{
	string s1 = "Hello";
	cout<<s1<<"\n"<<&s1<<endl;
	s1[0]='J';
	cout<<s1<<endl;
	cout<<&s1<<endl;
	return 0;
}