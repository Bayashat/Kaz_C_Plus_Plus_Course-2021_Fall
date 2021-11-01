#include <bits/stdc++.h>
using namespace std;

double Hypotenuse(int a, int b)
{
    double num = sqrt(a*a + b*b);
    return num;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << setprecision(4);
    cout << Hypotenuse(a,b);

    return 0;
}