#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string,int> m;
    int n;
    cin >> n;
    string ss[n];
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(m[s] == 0)
        {
            ss[i] = "new user added";   
        }
        else
        {
            ss[i] = "user already exists";
        }
        m[s] = 1;
    }
    for(int i = 0; i < n; i++)
    {
        cout << ss[i] << endl;
    }
    return 0;
}