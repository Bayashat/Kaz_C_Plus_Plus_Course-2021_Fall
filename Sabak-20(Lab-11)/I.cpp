#include <bits/stdc++.h>
using namespace std;

bool is_Palindrome(string s)
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s; cin >> s; // jojo
    do
    {

        if(is_Palindrome(s))
        {
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while(next_permutation(s.begin(), s.end()));

    cout << "JOJO";
    return 0;
}