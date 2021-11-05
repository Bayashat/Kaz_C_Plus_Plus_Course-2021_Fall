#include <bits/stdc++.h>
using namespace std;

int Max_Digit(string s)
{
    int MAX = -1e9; 
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = int(s[i])-48;
        if(s[i] > MAX)
        {
            MAX = s[i];
        }
    }
    return MAX;
}

int Max_Digit_R(string s, int i, int MAX)
{
    if(i == s.size())
    {
        return MAX;
    }
    s[i] = int(s[i])-48;
    if(s[i] > MAX)
    {
        MAX = s[i];
    }
    return Max_Digit_R(s, i+1, MAX);
}
int main()
{
    string s;
    cin >> s;
    // cout << Max_Digit(s);
    cout << Max_Digit_R(s, 0, -1e9);

    return 0;
}