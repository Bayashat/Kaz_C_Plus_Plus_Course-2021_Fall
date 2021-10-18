#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int Max = 0;

    for(int i = 0; i < s.size(); i++) // bbaaabb
    {
        for(int j = 0; j < i; j++) // bbaaabb
        {
            if(s[j] != s[i-j])
            {
                Max = i + 1; // 6
                break;
            }
        }
    }
    cout << Max;


    return 0;
}