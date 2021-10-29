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
    int MAX = -1e9-1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] > MAX)
            {
                MAX = a[i][j];
            }
        }
    }   
    cout << MAX;


    return 0;
}