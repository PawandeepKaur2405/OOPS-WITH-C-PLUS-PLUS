#include <iostream>

using namespace std;

struct structure
{
   int x=7;
   int y=8;
   int z=9;
};
struct structure st;

class myclass
{
    public:
        int a=1, b=2, c=3;
};

int main() 
{
    myclass s;
    int total1=st.x+st.y+st.z;
    int total2=s.a+s.b+s.c;
    cout<<total1<<" "<<total2<<endl;
    return 0;
}