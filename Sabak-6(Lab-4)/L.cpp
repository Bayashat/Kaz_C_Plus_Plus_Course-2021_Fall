#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    /*
    -1 2 3
    -2 -4 2
    */
    long long SUM = 0;
    cout << "coordinates of min elements:" << endl;
    for (int j = 0; j < m; j++)
    {
        int MIN = 1e9 + 1;
        int index_i, index_j;
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] < MIN)
            {
                MIN = a[i][j];
                index_i = i;
                index_j = j;
            }
        }
        cout << index_i + 1 << ";" << index_j + 1 << endl;
        SUM += MIN;  // -2 + -4 +2 = -4
    }
    cout << "Their sum:" << endl;
    cout << SUM;
    return 0;
}