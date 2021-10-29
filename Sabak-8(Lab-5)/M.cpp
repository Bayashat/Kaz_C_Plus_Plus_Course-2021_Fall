#include <iostream>
using namespace std;

int main()
{
    string s;
    char c;
    int n;
    cin >> s >> c >> n;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == c)
        {
            cnt++;
        }
    }
    if(cnt == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}