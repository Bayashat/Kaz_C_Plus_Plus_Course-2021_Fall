#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    string s;
    cin >> s;

    char MAX = s[0]; // s
    for(int i = 1; i < s.size(); i++) // absdfe
    {
        MAX = max(s[i], MAX);
    }
    cout << MAX;
    /*
    sort(s.begin(), s.end());
    cout << s[s.size()-1];
    */
    
    return 0;
}