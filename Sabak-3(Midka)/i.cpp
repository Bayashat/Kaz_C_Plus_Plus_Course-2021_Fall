#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = 0, y = 0; // -2 1
    string s2 = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'F')
        {
            y++; // y = y+1   y += 1
        }
        else if(s[i] == 'B')
        {
            y--;    // y-=1   y = y-1
        }
        else if(s[i] == 'L')
        {
            x--; //
        }
        else if(s[i] == 'R')
        {
            x++;
        }
    }
    if(x > 0)
    {
        for(int i = 0; i < x; i++)
        {
            s2 += "L";
        }
    }
    else
    {
        for(int i = x; i < 0; i++) // -2 
        {
            s2 += "R";
        }
    }

    if(y > 0)
    {
        for(int i = 0; i < y; i++)
        {
            s2 += "B";
        }
    }
    else
    {
        for(int i = y; i < 0; i++)
        {
            s2 += "F";
        }
    }

    sort(s2.begin(), s2.end());
    cout << s2;
    return 0;
}