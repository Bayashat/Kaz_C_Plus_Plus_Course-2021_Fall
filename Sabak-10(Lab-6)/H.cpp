#include <bits/stdc++.h>
using namespace std;

bool Valid_Number(int x)
{
    while(x != 0) // 425
    {
        if((x%10) % 2 != 0)
        {
            return false;
        }
        x /= 10;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(Valid_Number(n))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Not valid";
    }
    return 0;
}