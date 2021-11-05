#include <bits/stdc++.h>
using namespace std;

int Heater_Almat(int n) // 8
{
    int sum = 0;
    while(n != 0)
    {
        sum += (n %10) / 2; // 0 + 2 + 3 + 4
        n /= 10;
    }
    return sum;
}

int Heater_Almat(int n, int sum)
{
    if(n == 0)
    {
        return sum;
    }
    sum += (n %10) / 2;
    return Heater_Almat(n/10, sum);
}
int main()
{
    int n;
    cin >> n;
    // cout << Heater_Almat(n);
    cout << Heater_Almat(n, 0);
    return 0;
}