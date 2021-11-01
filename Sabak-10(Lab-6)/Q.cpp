#include <iostream>
#include <algorithm>
using namespace std;

double Percent(int n, int m)
{
    double x = (100*m) / (n*1.0);
    return x;
}
int main()
{
    int n,m;
    cin >> n >> m;
    cout << Percent(n,m);
}