#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;        // 80
    int z = sqrt(x); // 8
    if (z * z == x)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}