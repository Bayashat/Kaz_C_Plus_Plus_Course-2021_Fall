#include <bits/stdc++.h>
using namespace std;

int Factorial(int n) // 3
{
    int res = 1;
    for(int i = n; i > 0; i--) 
    {
        res *= i; // 3 * 2 * 1 
    }
    return res;
}

int Factorial_R(int n) // 3
{
    if(n == 0)
    {
        return 1;
    }
    return Factorial_R(n-1) * n; // 3 * 2 * 1
}


int Factorial_R2(int n, int res) // 1   3 * 2
{
    if(n == 0)
    {
        return res;
    }
    res *= n;
    return Factorial_R2(n-1, res);
}
int main()
{
    int n;
    cin >> n;
    // cout << Factorial(n);
    // cout << Factorial_R(n);
    cout << Factorial_R2(n, 1);
    return 0;
}