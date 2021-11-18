#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string,int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m.insert(make_pair(s, i+1));
    }
    
    for(map<string,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}