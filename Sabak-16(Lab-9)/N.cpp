#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool in_Vector(vector<int> &v, int x)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(x == v[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(in_Vector(v, (v[i] ^ v[j])) == true)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}