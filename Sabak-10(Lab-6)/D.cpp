#include <bits/stdc++.h>
using namespace std;

void Read_Array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

bool Check(int *a, int n, int x) // 1 2 3 4 5       7
{
    for(int i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n; cin >> n;
    int a[n];
    Read_Array(a,n);
    int x; cin >> x;
    if(Check(a,n,x) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    // cout << ((Check(a,n,x) == true) ? "Yes" : "No");
    return 0;
}