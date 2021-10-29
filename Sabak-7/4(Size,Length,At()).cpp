#include <bits/stdc++.h>
using namespace std;

//  
int main()
{
    string s = "hello world";
    cout << s.size() << endl; // 11
    s[0] = 'q';  // qello world
    s[1] = 'w';  // qwllo world

    s.at(0) = 'h';
    s.at(1) = 'e';

    string s2 = "Kazakhtan is the best!!!";
    cout << s2.length() << endl;  // 24 



    for(int i = 0; i < s.size(); i++) // 11
    {
        cout << s.at(i) << " "; 
    }    
    
    return 0;
}
// h
// e
// l

// d
// 
