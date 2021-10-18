#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; 
    int m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  // 1 2 3 4 5
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)  // 6 7 8 9 10
    {
        cin >> b[i];
    }

    int c[n+m];
    for(int i = 0; i < n; i++) // 
    {
        c[i] = a[i];
    }

    for(int i = n, j = 0; i < n+m; i++, j++) //  i = 6    5 < 10
    {
        c[i] = b[j];
    }
    sort(c, c + n + m);
    
    for(int i = 0; i < n + m; i++) // 
    {
        cout << c[i] << " ";
    }

    
    //  6   7   8   9   10
    //  1   2   3   4   5 
    // [1] [2] [3] [4] [5] [6] [7] [8] [9] [10]
    return 0;
}
