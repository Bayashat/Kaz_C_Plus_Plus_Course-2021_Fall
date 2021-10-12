#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;   // 12

    int a = x%2;    // 0
    x = x / 2;  // x/=2;    x = 6

    int b = x%2;    // 0
    x = x/2;    // 3

    int c = x%2;     // 1
    x = x/2;    // 1

    int d = x%2;    // 1
    x = x/2;    // 0

    int sum = (a * 2*2*2) + (b * 2*2) + (c * 2) + (d * 1);
    cout << sum;

    return 0;
}