#include <bits/stdc++.h>
using namespace std;

bool Valid_String(string s, int x)
{
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            cnt++;
        }
    }
    if(x <= cnt)
        return true;
    else
        return false;
}

int main()
{
    string s;
    int x;
    cin >> s >> x;
    if(Valid_String(s,x))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}