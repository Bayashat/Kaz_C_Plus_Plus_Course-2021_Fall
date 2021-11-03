#include <bits/stdc++.h>
using namespace std;

int Find_Min(int a[], int n)
{
    int MIN = 1e9;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < MIN)
        {
            MIN = a[i];
        }
    }
    return MIN;
}

int Find_Min_Recursion(int a[], int n, int MIN, int i)
{
    if(i == n)
    {
        return MIN;
    }
    if(a[i] < MIN)
    {
        MIN = a[i];
    }
    return Find_Min_Recursion(a, n, MIN, i+1);
}
int main()
{
    int a[5] = {-1, 5 , 78, 4, -9};
    cout << Find_Min(a, 5) << endl;
    cout << Find_Min_Recursion(a, 5 , 1e9, 0);

    return 0;
}