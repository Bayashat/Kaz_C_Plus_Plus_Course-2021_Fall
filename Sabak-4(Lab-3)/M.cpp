#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long sum = 0;

    int x;
    while(cin >> x) // 1 2 3
    {
        sum += x;   // 1 + 2 + 3 = 6
    }
    cout << sum;

    return 0;
}

