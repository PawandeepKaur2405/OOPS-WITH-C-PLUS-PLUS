#include <iostream>

using namespace std;

#define n 3 

void interchange(int m[n][n])
{
    int rows = n;


    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
			    m[i][j]=10-m[i][j];
		    }
    }
}


int main()
{

    int m[n][n] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    interchange(m);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
