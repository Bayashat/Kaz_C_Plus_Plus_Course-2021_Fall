#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) // 1 2 3 4 5
    {
        cin >> a[i];
    }

    sort(a, a+n);
    reverse(a,a+n);

    for(int i = 0; i < n; i++) // 1 2 3 4 5
    {
        cout << a[i] << " ";
    }

    return 0;
}
