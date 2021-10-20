#include <bits/stdc++.h>
using namespace std;
/*

1 2 3
4 5 6         
7 8 9   

3         [0][2]                      j-i = 2         
2 6       [0][1]  [1][2]              j-i = 1
1 5 9     [0][0]  [1][1]  [2][2]      j-i = 0
4 8       [1][0]  [2][1]              j-i = -1
7         [2][0]                      j-i = -2
*/
int main()
{
    int n = 3;
    int a[n][n];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << a[0][n-1] << endl;
    int x = 2;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j - i == 1)
            {
                cout << a[i][j] << " ";
            }
        }
    }  
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j - i == 0)
            {
                cout << a[i][j] << " ";
            }
        }
    }  
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j - i == -1)
            {
                cout << a[i][j] << " ";
            }
        }
    } 
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j - i == -2)
            {
                cout << a[i][j] << " ";
            }
        }
    } 

    return 0;
}
