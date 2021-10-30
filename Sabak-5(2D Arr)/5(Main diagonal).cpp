#include <bits/stdc++.h>
using namespace std;
/*
1 2 3
4 5 6          1     5       9      
7 8 9       [0][0]  [1][1]  [2][2]
*/
int main()
{
    int a[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                cout << a[i][j] << " ";
            }
        }
    }


    return 0;
}
