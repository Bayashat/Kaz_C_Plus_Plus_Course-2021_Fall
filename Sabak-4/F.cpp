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

    /*   1-VARIANT
    for(int i = n-1; i >= 0; i--) // 2 7 3 3
    {
        cout << a[i] << " ";
    }
    */
    reverse(a, a+n);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }


    return 0;
}