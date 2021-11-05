#include <bits/stdc++.h>
using namespace std;

bool Binary_search(int *a, int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return true;
        }
    }
    return false;
}

bool Binary_Search_R(int *a, int n, int x, int i)
{
    if(i == n)
    {
        return false;
    }
    if(a[i] == x)
    {
        return true;
    }
    return Binary_Search_R(a, n, x, i+1);
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x; cin >> x;
    /*
    if(Binary_search(a, n, x) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << (Binary_search(a, n, x) == true ? "Yes" : "No");
    */
    cout << (Binary_Search_R(a, n, x, 0) == true ? "Yes" : "No");
    return 0;
}