#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n]; // 100001 100001 10001 10001 100001 10001 7
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                a[i] = 100001;
                a[j] = 100001;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 100001)
        {
            cout << a[i];
        }
    }
    return 0;
}
