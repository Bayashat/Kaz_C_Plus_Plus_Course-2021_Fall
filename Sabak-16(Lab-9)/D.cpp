#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<int, int> m; // key value
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    
    cout << m[k];
    return 0;
}