#include <bits/stdc++.h>
using namespace std;

int Even(string s) // 1234567
{
    int cnt = 0; // 3
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] % 2 == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int Even_R(string s, int cnt, int i)
{
    if(i == s.size())
    {
        return cnt;
    }
    if(s[i] % 2 == 0)
    {
        cnt++;
    }
    return Even_R(s, cnt, i+1);
}
int main()
{
    string s;
    cin >> s;
    // cout << Even(s);
    cout << Even_R(s, 0, 0);

    return 0;
}