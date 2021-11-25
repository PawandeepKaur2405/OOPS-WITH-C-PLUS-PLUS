#include <iostream>

using namespace std;
 
int main()
{
    char arr[4][4];
    int spaces=0;
    for(int i=0;i<4;i++)
    {
        for(int k=4;k>=i;k--)
        {
            arr[i][k]='*';
        }
        for(int j=0;j<=spaces-1;j++)
        {
            arr[i][j]=' ';
        }
        spaces++;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}