#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int i = -1;
int f()
{
    i++; // 2
    long long ans = 1;
    for(int j = 0; j < i; j++) // 
    {
        ans *= i; // 
    }
    return ans;
}
int main()
{
    int n;
    cin >> n; // 5  : (0,0) ~ (5,5)
    vector<int> v(n+1); // 

    generate(v.begin(), v.end(), f);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}