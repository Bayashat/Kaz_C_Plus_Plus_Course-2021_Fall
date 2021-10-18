#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) // 2 7 3 3
    {
        cin >> a[i];
    }
    int MAX = 0;
    int MIN = 1e9+1; // 10^9 + 1

    for(int i = 0; i < n; i++)
    {
        if(a[i] > MAX)
        {
            MAX = a[i];
        }
        if(a[i] < MIN)
        {
            MIN = a[i];
        }
    } 

    for(int i = 0; i < n; i++) // 2 7 3 3 
    {
        if(a[i] == MAX)
        {
            a[i] = MIN;
        }
    }

    for(int i = 0; i < n; i++) // 2 7 3 3 
    {
        cout << a[i] << " ";
    }


    return 0;
}