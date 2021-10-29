#include <iostream>
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
    int MIN = 1e9+1;
    int index;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        if(sum < MIN)
        {
            MIN = sum;
            index = i;
        }
    }   
    cout << index + 1; 
    return 0;
}