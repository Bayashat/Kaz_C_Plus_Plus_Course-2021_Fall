#include <iostream>
using namespace std;

// islower, isupper - тексереді берілген әріптің кіші немесе үлкен әріп екенін
// tolower, toupwer - өзгертеді

int main()
{
    string s = "hElElo";
    int cnt_Lower = 0;
    int cnt_Upper = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(islower(s[i]))
            cnt_Lower++;
        else
            cnt_Upper++;
    }
    cout << cnt_Upper << " " << cnt_Lower << endl;

    for(int i = 0; i < s.size(); i++)
    {
        if(islower(s[i]))
            s[i] = toupper(s[i]);  // A
    }
    cout << s << endl;

    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);  // A
    }
    cout << s;


    return 0;
}