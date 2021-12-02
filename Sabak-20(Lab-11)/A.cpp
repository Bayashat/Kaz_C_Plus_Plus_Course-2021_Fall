#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI","SAT"};
    string ss;
    cin >> ss;
    for(int i = 0; i < 7; i++)
    {
        if(ss == s[i])
        {
            cout << 7-i; // 7 - 6 = 1
            return 0;
        }
    }



    return 0;
}