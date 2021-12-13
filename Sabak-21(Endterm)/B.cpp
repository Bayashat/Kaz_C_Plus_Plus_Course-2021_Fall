#include <bits/stdc++.h>
using namespace std;

bool icmp(vector<int> a , vector<int> b)
{
    if(a[0] < b[0])  return true;
    else if(a[0] > b[0])    return false;
    else
    {
        if(a[1] < b[1]) return true;
        else if(a[1] > b[1])    return false;
        else
        {
            if(a[2] < b[2]) return true;
            else if(a[2] > b[2]) return false;
        }
    }
}

bool dcmp(vector<int> a , vector<int> b)
{
    if(a[0] > b[0])  return true;
    else if(a[0] < b[0])    return false;
    else
    {
        if(a[1] > b[1]) return true;
        else if(a[1] < b[1])    return false;
        else
        {
            if(a[2] > b[2]) return true;
            else if(a[2] < b[2]) return false;
        }
    }
}
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    vector<vector<int> > v(n);
    for(int i = 0; i < n; i++)
    {
        v[i].resize(3);
        for(int j = 0; j < 3; j++)       
        {
            int x; cin >> x;
            v[i][j] = x;
        }
    }
    if(s == "inc")
    {
        sort(v.begin(), v.end(), icmp);
    }
    else
    {
        sort(v.begin(), v.end(), dcmp);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)       
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }    
    return 0;
}
