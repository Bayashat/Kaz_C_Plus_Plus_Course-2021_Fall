/*
12 - 1100
Given decimal number, you need to convert it to Bianry
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    while(n != 0)
    {
        int x = n %2; // 0
        char c = char(x+48);
        n /= 2;
        s = c + s;
    }
    
    int cnt_Zero = 0;
    int cnt_One = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            cnt_Zero++;
        }
        else
        {
            cnt_One++;
        }
    }
    cout << cnt_Zero << endl;
    cout << cnt_One << endl;
    return 0;
}
