#include <iostream>
using namespace std;

// isalpha - тексереді берілген символдың әріппа еместігін
// isdigit - тексереді цифр ма жоқпа 
int main()
{
    string s = "hh1254";
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            cout << 1 << endl;
        }
        if(isdigit(s[i]))
        {
            cout << 2 << endl;
        }
    }

    return 0;
}