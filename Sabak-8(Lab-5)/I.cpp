#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    if(s.size() != t.size())
    {
        cout << "NO";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << ((s==t) ? "YES" : "NO");

    return 0;
}