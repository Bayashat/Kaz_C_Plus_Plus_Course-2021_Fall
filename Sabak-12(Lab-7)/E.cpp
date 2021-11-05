#include <bits/stdc++.h>
using namespace std;

bool Unique_Divider(int n) // 32 / 2 = 16 / 2 = 8 / 2 = 4 / 2= 2 / 2= 1 
{
    while(n != 1)
    {
        if(n % 2 != 0)
        {
            return false;
        }
        n /= 2;
    }
    return true;
}

bool Unique_Divider_R(int n)
{
    if(n == 1)
    {
        return true;
    }
    if(n % 2 != 0)
    {
        return false;
    }
    return Unique_Divider_R(n /2);
}
int main()
{
    int n;
    cin >> n;
    // cout << (Unique_Divider(n) ? "Yes" : "No");
    cout << (Unique_Divider_R(n) ? "Yes" : "No");
    return 0;
}