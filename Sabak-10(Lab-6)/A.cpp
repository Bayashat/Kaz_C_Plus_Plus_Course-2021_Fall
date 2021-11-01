#include <bits/stdc++.h>
using namespace std;

int Add(int a, int b)
{
    return a+b;
}

void Add2(int a, int b)
{
    cout << a+b;
}

int main()
{
    int a,b; // 2 3
    cin >> a >> b;
    //cout << a+b;

    // cout << Add(a,b);
    Add2(a,b);

    return 0;
}