#include <bits/stdc++.h>
using namespace std;

int Find_Max(int a[], int n)
{
    int MAX = -1e9;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > MAX)
        {
            MAX = a[i];
        }
    }
    return MAX;
}

int Find_Max_Recursion(int MAX, int a[], int n, int i)
{
    if(i == n)
    {
        return MAX;
    }
    if(a[i] > MAX)
    {
        MAX = a[i];
    }
    return Find_Max_Recursion(MAX, a, n, i+1);
}


int main()
{
    int a[5] = {-1, 5 , 78, 4, -9};
    cout << Find_Max_Recursion(-1e9, a, 5, 0);

    return 0;
}