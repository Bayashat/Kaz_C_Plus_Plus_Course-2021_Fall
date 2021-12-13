#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    map<string,string> mp;
    for(int i = 0; i < n; i++)
    {
        string s,v;
        cin >> s >> v;
        mp[s] = v;
        mp[v] = s;
    }
    string tr;
    cin >> tr;
    cout << mp[tr];
    return 0;
}