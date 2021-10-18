#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int n,m;
    cin >> s >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            a[i][j] = 'X';
        }
    }

    a[0][0] = '*';
    int x = 0, y = 0;
    for(int i = 0; i < s.size(); i++) //DDURRDDULD
    {
        if(s[i] == 'U')
        {
            y--;
        }
        else if(s[i] == 'D')
        {
            y++;
        }
        else if(s[i] == 'L')
        {
            x--;
        }
        else if(s[i] == 'R')
        {
            x++;
        }
        a[y][x] = '*';
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}