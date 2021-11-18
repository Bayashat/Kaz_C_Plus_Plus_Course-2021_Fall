#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        int sum = x+y;
        m[sum] = i+1;
    }
    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).second << " ";
    }
    return 0;
}