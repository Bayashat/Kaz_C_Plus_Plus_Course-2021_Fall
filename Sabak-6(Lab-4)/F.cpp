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
    int index_i, index_j;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] > MAX)
            {
                MAX = a[i][j];
                index_i = i+1;
                index_j = j+1;
            }
        }
    }   
    cout << index_i << " " << index_j;


    return 0;
}