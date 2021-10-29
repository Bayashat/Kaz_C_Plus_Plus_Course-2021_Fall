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
            if(i == j)
            {
                if(a[i][j] > MAX)
                {
                    MAX = a[i][j];
                    index_i = i;
                    index_j = j;
                }
            }
        }
    }
    cout << "Maximum element is: " << MAX << " with coordinates: " << index_i+1 << ";" << index_j+1 << endl;


    return 0;
}