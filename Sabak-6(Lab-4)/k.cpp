#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m; 
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) 
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }
    /*
    1 2 4 6
    2 5 7 3
    1 4 5 94
    */
    for(int j = 0; j < m; j++) 
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += a[i][j]; // 2 + 5 + 7 + 3 
        }
        cout << "The sum of column number " << j + 1 << " is " << sum << endl;
    }

    return 0;
}