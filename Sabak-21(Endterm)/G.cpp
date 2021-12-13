#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 0;
    do
    {
        cnt++;
    } while (next_permutation(s.begin(), s.end()));
    cout << cnt;
    
    return 0;
}
