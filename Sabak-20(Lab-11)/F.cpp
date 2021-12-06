#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k;
    cin >> a >> b >> k; // 4 12 
    int x = min(a,b);
    vector<int> v; // 1 2 4
    for(int i = 1; i <= x; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            v.push_back(i);
        }
    }
    reverse(v.begin(), v.end());
    cout << v[k-1];



    return 0;
}