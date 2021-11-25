#include <iostream>
#include<limits.h>
#include<float.h>

using namespace std;

void intfuc()
{
  cout<<"Int Size:"<<sizeof(int)<<"B\n";
  cout<<"Range:("<<INT_MIN<<" to "<<INT_MAX<<")\n";
}

void charfuc()
{
  cout<<"Char Size:"<<sizeof(char)<<"B\n";
  cout<<"Range:(0-255)\n";
}

void boolfuc()
{
  cout<<"Bool Size:"<<sizeof(bool)<<"B\n";
  cout<<"Range:((0/1),(T/F))\n";
}

void shortfuc()
{
  cout<<"ShortInt Size:"<<sizeof(short)<<"B\n";
  cout<<"Range:("<<SCHAR_MIN<<" to "<<SCHAR_MAX<<")\n";
}

void longfuc()
{
  cout<<"Long Size:"<<sizeof(long)<<"B\n";
  cout<<"Range:("<<LONG_MIN<<" to "<<LONG_MAX<<"\n";
}

void floatfuc()
{
  cout<<"Float:"<<sizeof(float)<<"B\n";
  cout<<"Range:("<<FLT_MIN<<" to "<<FLT_MAX<<")\n";
  cout<<"Float has 7 decimal digits of precision\n";
}

void doublefuc()
{
  cout<<"Double Size:"<<sizeof(double)<<"B\n";
  cout<<"Range:("<<DBL_MIN<<" to "<<DBL_MIN<<")\n";
  cout<<"Double has 15 decimal digits of precision";
}

void lodoubfuc()
{
  cout<<"Long Double Size:"<<sizeof(long double)<<"B\n";
  cout<<"Range:("<<LDBL_MIN<<" to "<<LDBL_MAX<<")\n";
}
 
void wcharfuc()
{
  cout<<"Wide Char Size:"<<sizeof(wchar_t)<<"B\n";
  cout<<"Range:("<<WCHAR_MIN<<" to "<<WCHAR_MAX<<")\n";
}

int main(void)
 {
   int cho=1;
   do
   {
    cout<<"\n1.Int\n2.Float\n3.Short\n4.Boolean\n5.Long\n6.Double\n7.Char\n8.Wide char\n9.Long Double\n0.Exit\n";
    cin>>cho;

    switch(cho)
    {
      case 1:
      intfuc();
      break;

      case 2:
      floatfuc();
      break;

      case 3:
      shortfuc();
      break;

      case 4:
      boolfuc();
      break;

      case 5:
      longfuc();
      break;

      case 6:
      doublefuc();
      break;

      case 7:
      charfuc();
      break;

      case 8:
      wcharfuc();
      break;

      case 9:
      lodoubfuc();
      break;

      case 0:
      return 0;

      default :
      cout<<"Invalid Option\n";
    }

  }while(cho);


 }