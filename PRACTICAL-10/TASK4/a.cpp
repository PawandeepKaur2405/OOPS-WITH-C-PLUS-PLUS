#include <iostream>

using namespace std;
 
class lessthan 
{
    private:
        int feet;        
    public:
        lessthan(int f) 
        {
            feet = f;
        }
        friend lessthan operator <(const lessthan&, const lessthan&); 
};

lessthan operator <(const lessthan& d1, const lessthan& d2) 
{
    if(d1.feet < d2.feet) 
        cout<<"N2 is greater";
    else
        cout<<"N1 is greater";
    return 0; 
}


int main() 
{
    int a,b;
    cout<<"Enter N1 and N2 respectively: \n";
    cin>>a>>b;
    lessthan N1(a), N2(b);
    N1 < N2;
    return 0;
}