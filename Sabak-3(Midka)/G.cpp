#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++)   // programminglanguage
    {
        for(int j = 0; j < i; j++) // programminglangua
        {
            if(s[i] == s[j])
            {
                cout << s[i];
                break;
            }
        }
    }
    return 0;
}