#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' or s[i] == 'e' | s[i] == 'o' | s[i] == 'i' | s[i] == 'u')
        {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}