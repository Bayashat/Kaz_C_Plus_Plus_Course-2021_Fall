#include <iostream>
using namespace std;

bool check_palindrom(string s) // abba
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size()-1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s; // abb
    for(int i = 0; i <= s.size(); i++)  //  0 1 2
    {
        s.insert(i,"*");
        s[i] = s[s.size() - 1 - i];
        if(check_palindrom(s) == true)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            s.erase(i,1);
        }
    }
    cout << "NO";
    
    return 0;
}