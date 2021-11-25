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
	cout<<"Adding integer values: "<<a+b<<"\n";
	cout<<"Adding float values: "<<c+d<<"\n";
	cout<<"Adding string values: "<<s1+s2<<"\n";
	return 0;
}