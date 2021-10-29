
#include <iostream>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    /*
    if(s == t)
    {
        cout << "YES";
    } 
    else
    {
        cout << "NO";
    }
    */
    cout << ((s == t) ? "Yes" : "NO");  // formula : (Условия) ? код1 : код2

    return 0;
}