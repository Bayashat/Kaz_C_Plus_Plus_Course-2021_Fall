#include <iostream>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    if(s.find(t) != string::npos)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    
    return 0;
}