#include <bits/stdc++.h>
using namespace std;

void Simple_Recursion(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

void Simple_Recursion_R(int n, int x) // 4   4
{
    if(x == n)
    {
        cout << x;
        return ;
    }
    cout << x << " "; //  1  2  3 
    return Simple_Recursion_R(n, x+1);
}
int main()
{
    int n;
    cin >> n;
    // Simple_Recursion(n);
    Simple_Recursion_R(n, 1);
    return 0;
}