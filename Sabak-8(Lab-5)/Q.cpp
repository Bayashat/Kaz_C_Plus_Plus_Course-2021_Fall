#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    string s; // abc
    string t; // abcabcabc
    cin >> s >> t;

    string origin = s;
    while(s.size() < t.size())
    {
        s += origin; // abc + abc +abc
    }
    if(s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    
    return 0;
}