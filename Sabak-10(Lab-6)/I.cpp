#include <bits/stdc++.h>
using namespace std;

string Capital_Even(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(i%2 == 0)
        {
            s[i] = toupper(s[i]);
        }
    }
    /*
    for(int i = 0; i < s.size(); i += 2)
    {
        s[i] = toupper(s[i]);
    }
    */
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << Capital_Even(s);
    return 0;
}