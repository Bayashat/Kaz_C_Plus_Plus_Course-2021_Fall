#include <bits/stdc++.h>
using namespace std;

string Remove_Vowels(string s)
{
    for(int i = 0; i < s.size();) 
    {
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' | s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' | s[i] == 'U') // 
        {
            s.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    return s;
}
int main()
{
    // a e i o u
    string s;
    getline(cin,s); // Lorem Ipsum Dolor Sit Amet
    cout << Remove_Vowels(s);


    return 0;
}