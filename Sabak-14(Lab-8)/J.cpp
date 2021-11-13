#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    // 7 4 6 8 1 
    // Sort : 1 4 6 7 8
    // Min - v[0] (1)
    // Max - v[v.size()-1] (8)
    cout << v[v.size()-1] - v[0];


    return 0;
}#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    // 7 4 6 8 1 
    // Sort : 1 4 6 7 8
    // Min - v[0] (1)
    // Max - v[v.size()-1] (8)
    cout << v[v.size()-1] - v[0];


    return 0;
}