#include <iostream>
#include <algorithm>
using namespace std;

int positive(int x)
{
    return abs(x);
}

int main()
{
    int x;
    cin >> x;
    cout << positive(x);

}