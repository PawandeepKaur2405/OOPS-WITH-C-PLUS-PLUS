#include <iostream>

using namespace std;
 
int main()
{
    char arr[4][4];
    for(int i=3; i>=0; i--)
    {
      for(int j=0; j<4; j++)
      {
        if (j>i)
        {
          arr[3-i][j]=' ';
        }
        else
        {
          arr[3-i][j]='*';
        }
      }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}