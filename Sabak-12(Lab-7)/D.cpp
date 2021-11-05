#include <bits/stdc++.h>
using namespace std;

long long Sum_Of_Digits(string s) // 5421
{
    long long sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        sum += int(s[i])- 48;
    }
    return sum;
}

long long Sum_Of_Digits_R(string s, int i, long long sum)
{
    if(i == s.size())
    {
        return sum;
    }
    sum += int(s[i])- 48;
    return Sum_Of_Digits_R(s, i+1, sum);
}
int main()
{
    string s;
    cin >> s;
    // cout << Sum_Of_Digits(s);
    cout << Sum_Of_Digits_R(s, 0, 0);

    return 0;
}