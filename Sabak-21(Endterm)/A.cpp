#include <bits/stdc++.h>
using namespace std;

int Two_degree(int x) // 2
{
    int sum = 1; 
    for(int i = 0; i < x; i++)
    {
        sum *= 2;
    }
    return sum;
}
int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    long long sum = 0;
    for(int i = 0; i < s.size(); i++) // char
    {   
        int x = int(s[i])-48;
        sum += x * Two_degree(i);
    }
    cout << sum;

    return 0;
}
