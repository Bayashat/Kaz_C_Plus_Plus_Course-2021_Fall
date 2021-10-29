#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    /*
    1 2 3  
    4 5 6
    7 8 9
    */    
    // i = 0
    // j = 3
    long long sum = 0; 
    for(int i = 0, j = n-1; i < n; i++, j--)
    {
        sum += a[i][j]; // 0 + 3 + 5 + 7  = 15
    }
    cout << sum;

    return 0;
}