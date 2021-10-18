#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int MAX = -1e9-1; // 7
    for(int i = 0; i < n; i++) // 2 7 3 3
    {
        if(a[i] > MAX)
        {
            MAX = a[i];
        }
    }
    cout << MAX;


    return 0;
}