#include <iostream>
using namespace std;

// isalnum - тексереді берілген символ сан,әріп
// ispunct - тексереді тыныс белгісі, белгілер
int main()
{
    /*
    string s = "#4g5.8tr";

    for(int i = 0; i < s.size(); i++)
    {
        if(isalnum(s[i]))
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    */
    string s = " #12abc-+/@^&% "; // 
    for (int i = 0; i < s.size(); i++)
    {
        if (ispunct(s[i]))
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}