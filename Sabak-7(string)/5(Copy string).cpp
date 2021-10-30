#include <bits/stdc++.h>
using namespace std;
/*
    1. string New_string_name(old_string_name);
    2. string New_string_name = _old_string_name;
*/
int main()
{
    string s1 = "Hello";
    
    string s2(s1);
    cout << s2 << endl; // Hello

    string s3 = s2;
    cout << s3; // hello
    
    return 0;
}