#include <bits/stdc++.h>
using namespace std;

void Infinite()
{
    long long sum = 0;
    int x = -1;
    while(x != 0)
    {
        cin >> x;
        sum += x;
    }
    cout << sum;
}
long long Infinite_R(int x, long long sum)
{
    if(x == 0)
    {
        return sum;
    }
    sum += x;
    cin >> x;
    return Infinite_R(x, sum);
}
int main()
{
    // Infinite();
    int x;
    cin >> x;
    cout << Infinite_R(x, 0);
    return 0;
}