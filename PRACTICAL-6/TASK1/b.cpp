#include <iostream>

using namespace std;

int main()
{
	int a,b;
	float c,d;
	string s1,s2;
	cout<<"Enter integer values: ";
	cin>>a>>b;
	cout<<"Enter float values: ";
	cin>>c>>d;
	cout<<"Enter string values: ";
	cin>>s1;
	cin>>s2;
	cout<<"Adding int and float: "<<a+c<<"\n";
	cout<<"Adding string and int: "<<a+s1<<"\n";
	return 0;
}