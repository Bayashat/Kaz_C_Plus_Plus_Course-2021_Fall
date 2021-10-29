/*
    Given string.
    you need put it into +.

*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int x = s.size()+2; // 3
    while(x != 0) // 0
    {
        cout << '+'; // +++
        x--;
    }  
    cout << endl;

    cout<< '+' << s << '+' << endl;

    x = s.size()+2;
    while(x != 0) // 8
    {
        cout << '+'; // +++++++++
        x--;
    } 

    return 0;
}
