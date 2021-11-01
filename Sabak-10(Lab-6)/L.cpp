#include <iostream>
#include <algorithm>
using namespace std;

bool Valid(string s, int n)
{
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(cnt == n)
        {
            return true;
        }
        if(isdigit(s[i]))
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
    }
    return false;
}
int main()
{
    string s;
    int n;
    cin >> s >> n;
    if(Valid(s,n))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Not valid";
    }

}