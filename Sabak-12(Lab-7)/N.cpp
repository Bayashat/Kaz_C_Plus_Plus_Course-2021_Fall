#include <bits/stdc++.h>
using namespace std;

bool Cheater(int *a, int n, int k)
{
    int cnt = 0;
    if(a[0] <= k)
    {
        cnt++;
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i-1] <= k)
        {
            cnt++;
        }
    }
    if(cnt >=2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Cheater_R(int *a, int n, int k, int i, int cnt)
{
    if(i == n)
    {
        if(cnt >= 2)
        {
            return true;
        }
        else return false;
    }
    if(a[i] - a[i-1] <= k)
    {
        cnt++;
    }    
    return Cheater_R(a, n, k, i+1, cnt);
}
int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    //  cout << (Cheater(a, n, k) ? "cheater" : "no");
    int cnt = 0;
    if(a[0] <= k)
    {
        cnt++;
    }
    cout << (Cheater_R(a, n, k, 1, cnt) ? "cheater" : "no");
    return 0;
}