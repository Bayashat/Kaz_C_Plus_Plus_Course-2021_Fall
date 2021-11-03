#include <bits/stdc++.h>
using namespace std;

int Multiplication(int a, int b)
{
    return add(a,b);
}

int add(int x, int y)
{
    return x+y;
}
int main()
{
    int a = 10;
    int b = 20;
    cout << Multiplication(a,b); // 30

    return 0;
}