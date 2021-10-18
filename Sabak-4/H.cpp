#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int l,r;
    cin >> l >> r;
    int a[n];
    for(int i = 0; i < n; i++) //  9 3 7        4 1 5 7 8 2 1 4 5 3 6 
    {
        cin >> a[i];
    }

    long long sum = 0;

    l--;
    r--;
    for(int i = l; i <= r; i++) //  2 3 4 5 
    {
        sum += a[i];
    }
    cout << sum;

    return 0;
}


// 