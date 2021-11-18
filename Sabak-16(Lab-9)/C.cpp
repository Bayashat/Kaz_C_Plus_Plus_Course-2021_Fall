#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<int, int> m; // key value
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int cnt = 0;
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if((*it).second >= 2)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}