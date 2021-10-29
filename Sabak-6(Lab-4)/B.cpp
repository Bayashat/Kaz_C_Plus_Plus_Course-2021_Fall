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
    int SECOND = -1e9-1;
    /*
    2 2 2 
     2 2 2
    */
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) // -1 7 3
        {
            if(a[i][j] > MAX)
            {
                SECOND = MAX; // -1e9-1
                MAX = a[i][j]; // 2
            }
            if(a[i][j] < MAX && a[i][j] > SECOND)
            {
                SECOND = a[i][j];
            }
        }
    }   
    if(SECOND == -1e9-1)    // it's for the same elements in Array
    {
        cout << 0;
    }
    else
        cout << SECOND;


    return 0;
}