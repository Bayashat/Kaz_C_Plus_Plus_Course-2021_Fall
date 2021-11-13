
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
    int k;
    cin >> k; // 2
    /*  Method-1 - from Aida: 
    sort(v.begin(), v.end()); // 2 4 10 12
    long long sum = 0;
    for(int i = v.size()-k; i < v.size(); i++) // 10~12
    {
        sum += v[i];
    }
    cout << sum;
    */
    // Method-2 from Bayashat :
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    long long sum = 0;
    for(int i = 0; i < k; i++) // 10~12
    {
        sum += v[i];
    }
    cout << sum;    
    return 0;
}