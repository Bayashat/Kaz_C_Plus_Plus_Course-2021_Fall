#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

string common(string s1, string s2) // bella roller
{
    string answer = ""; // ell
    int x = min(s1.size(), s2.size()); // 1
    if(s1.size() > s2.size())
    {
        swap(s1,s2);
    }
    for(int i = 0; i < x; i++) 
    {
        if(s2.find(s1[i]) != string::npos)
        {
            answer += s1[i];
        }
    }
    return answer;
}

int main()
{
    int n; cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string sss = common(v[0], v[1]); // ell
    for(int i = 2; i < n; i++)
    {
        sss = common(sss, v[i]);
    }
    
    if(sss.empty())
    {
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    set<char> c; // e l
    for(int i = 0; i < sss.size(); i++)
    {
        c.insert(sss[i]);
    }
    for(set<char>::iterator it = c.begin(); it != c.end(); it++)
    {
        cout << (*it) << " ";
    }
    
    return 0;
}
/*
bella
label
roller
*/