#include <bits/stdc++.h>
using namespace std;
/*

*/
int main()
{
    char W = 'A';
    int r = W; // 65

    // char->number
    char ch = '9';
    int x = ch; // 57 - 48 = 9
    cout << x-48 << endl;
    cout << int(ch)-48 << endl;

    // number->char
    x = 5;  // 5 + 48 = 53
    cout << char(x+48) << endl; // '5

    // 3. 
    int q = 4562;
    string res = ""; // "4562"

    while(q != 0)
    {
        int k = q % 10; // 0~9
        q /= 10;

        char z = char(k+48); // 
        res = z + res; 
    }
    cout << res << endl;

    // 4. 
    string s = "7894"; // 

    int result = 0; // 7894
    int p = 1000;
    for(int i = 0; i < s.size(); i++)
    {
        char e = s[i]; // '7'
        int t = int(e)-48; // 7
        result += t*p; // 7000 +800 + 90 + 4
        p /= 10;
    }
    cout << result;

    return 0;
}