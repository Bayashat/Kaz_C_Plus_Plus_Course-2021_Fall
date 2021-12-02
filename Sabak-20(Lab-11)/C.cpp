#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool f(pair<string, double> p1, pair<string,double> p2)
{
    if(p1.second == p2.second)
    {
        return p1.first > p2.first;
    }
    return p1.second > p2.second;
}
int main()
{
    int n;
    cin >> n;
    long long total = 0;
    map<string, double> m;
    // 1. map ашып, элементтерін саламыз
    string s;
    double x;
    for(int i = 0; i < n; i++)
    {
        cin >> s >> x;
        total += x;
        m[s] += x;
    }
    vector<pair<string, double> > v;
    for(map<string,double> :: iterator it = m.begin(); it != m.end(); it++)
    {
        (*it).second = (*it).second * 100 / double(total);
        v.push_back(make_pair((*it).first, (*it).second));
    }
    sort(v.begin(), v.end(), f);

    for(vector<pair<string, double> > ::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << "%" << endl;
    }


    return 0;
}