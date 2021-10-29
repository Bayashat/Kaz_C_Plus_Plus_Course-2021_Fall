/*
1234 
 - 1+3 = 4
 - 2+4 = 6

 2222
 - 2+2=4
 - 2+2=4
*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long long sum_even = 0;
    long long sum_odd = 0;
    for(int i = 0; i < s.size(); i = i+2) // 45781226
    {
        sum_even += s[i];
    }
    for(int i = 1; i < s.size(); i = i+2) // 45781226
    {
        sum_odd += s[i];
    }
    if(sum_odd == sum_even)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // cout << ((sum_odd == sum_even) ? "YES" : "NO");
    return 0;
}