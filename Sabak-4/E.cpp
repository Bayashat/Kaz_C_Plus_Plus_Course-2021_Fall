#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) // 2 7 3 3
    {
        cin >> a[i];
    }

    long long sum = 0;
    
    for(int i = 0; i < n; i++) // 2 7 3 3
    {
        sum += a[i]; // 0 + 2 + 7 + 3 + 3 = 15
    }
    cout << sum;


    return 0;
}