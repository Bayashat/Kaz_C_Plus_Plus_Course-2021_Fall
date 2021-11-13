#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int x) // 13 : 1 13   // 14 
{
    for(int i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;

    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(isPrime(v[i]) && v[i] >= k)
        {
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}