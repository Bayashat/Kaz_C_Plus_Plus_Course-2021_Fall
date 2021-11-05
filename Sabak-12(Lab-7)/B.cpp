#include <bits/stdc++.h>
using namespace std;

string To_Binary(int n) // 8  -    1000 
{
    string s = "";
    while(n != 0) 
    {
        int x = n % 2;   // 0   
        n /= 2;
        s = char(x+48) + s; 
    }
    return s;
}

string To_Binary_R(int n, string s) // 0
{
    if(n == 0)
    {
        return s;
    }
    s = char(n%2 + 48) + s; // 1000
    return To_Binary_R(n/2, s);
}

int main()
{
    int n;
    cin >> n;
    // cout << To_Binary(n);
    cout << To_Binary_R(n, "");

    return 0;
}