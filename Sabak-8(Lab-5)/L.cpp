#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string origin = s;
    sort(s.begin(), s.end());
    if(s == origin)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}