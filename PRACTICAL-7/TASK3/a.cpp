#include <iostream>

using namespace std;

#define n 3 

void interchange(int m[][n])
{
    int rows = n;


    for (int i = 0; i < n; i++)
    {
        int t = m[0][i];
        m[0][i] = m[rows - 1][i];
        m[rows - 1][i] = t;
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
        for (int j = n-1; j >= 0; j--)
            cout << m[i][j] << " ";
        cout << endl;
    }
}