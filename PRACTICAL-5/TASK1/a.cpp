#include<iostream>

using namespace std;

void charFunc()
{
       char c='A';
       cout<<c<<endl;
}
void boolFunc()
{
       bool b=(10>9);
       cout<<b<<endl;
}
void shortFunc()
{
       short s=23;
       cout<<s<<endl;
}
void intFunc()
{
       int i=199;
       cout<<i<<endl;
}
void longFunc()
{
       long l=111111111;
       cout<<l<<endl;
}
void floatFunc()
{
       float f=1.234f;
       cout<<f<<endl;
}
void doubleFunc()
{
       double d=1.23456;
       cout<<d<<endl;
}
void longDoubleFunc()
{
       long double ld=1.234567;
       cout<<ld<<endl;
}
void wideFunc()
{
       wchar_t w=L'A';
       cout<<w<<endl;
}
int main()
{
       charFunc();
       boolFunc();
       shortFunc();
       intFunc();
       longFunc();
       floatFunc();
       doubleFunc();
       longDoubleFunc();
       wideFunc();
       return 0;
}