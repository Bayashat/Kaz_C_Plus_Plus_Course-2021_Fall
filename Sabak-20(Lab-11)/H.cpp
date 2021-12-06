#include <bits/stdc++.h>
using namespace std;

char shift(char c, int n) // Y 2
{
    int k = 0; // 
    while(k != n) // 2 != 2
    {
        if(c == 'Z')
        {
            c = 'A';
            k++;
        }
        else
        {
            c += 1; // Z
            k++; 
        }

    }
    return c;
}
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = shift(s[i], n);
    }
    cout << s;
    return 0;
}