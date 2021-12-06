#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;  cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int x = 0; x < m; x++)
    {
        for(int y = 0; y < n; y++)
        {
            if( (a[x][y] == 0 && a[x][y+1] == 0 && a[x+1][y] == 0 && a[x+1][y+1] == 0) || (a[x][y] == 1 && a[x][y+1] == 1 && a[x+1][y] == 1 && a[x+1][y+1] == 1) )
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}