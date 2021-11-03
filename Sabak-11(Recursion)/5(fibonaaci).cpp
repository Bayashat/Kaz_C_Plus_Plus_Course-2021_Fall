#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34...
void fibonaaci(int x, int y, int n)
{
    cout << x << " " << y << " ";
    for(int i = 0; i < n-2; i++)
    {
        int k = x+y;
        cout << k << ' ';
        x = y;
        y = k;
    }
}

int fibonaaci_Recursion(int x, int y , int n, int i)
{
    if(i == n-2)
    {
        return 0;
    }
    if(i == 0)
    {
        cout << x << " " << y << " ";
    }
    int k = x+y;
    cout << k << " ";
    x = y;
    y = k;
    return fibonaaci_Recursion(x, y , n , i+1);
}
int main()
{
    int n;
    cin >> n;

    fibonaaci_Recursion(0,1, n, 0);

    return 0;
}