#include <bits/stdc++.h>
using namespace std;

bool Palindrom(string s)
{
    for(int i = 0, j = s.size()-1; i < s.size() / 2; i++, j--)
    {
        if(s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}
bool Palindrom_R(string s, int i, int j)
{
    if(i == s.size()/2)
    {
        return true;
    }
    if(s[i] != s[j])
    {
        return false;
    }
    return Palindrom_R(s, i+1, j-1);
}
int main()
{
    string s;
    cin >> s;
    // cout << (Palindrom(s) ? "Yes" : "No");
    cout << (Palindrom_R(s, 0, s.size()-1) ? "Yes" : "No");
    return 0;
}