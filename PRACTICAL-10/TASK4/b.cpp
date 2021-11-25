#include <iostream>

using namespace std;

class sum 
{
    public:
        int x;
    void getdata(int a) 
    {
        x=a;
    }
    void display() 
    {
        cout<<"\nSum of X:"<<x;
    }
    void operator+(sum &);
};

void sum::operator+(sum &ob) 
{
    x=x+ob.x;
    display();
}

int main() 
{
   sum ob1, ob2;
   ob1.getdata(10);
   ob2.getdata(20);
   ob1+ob2;
}