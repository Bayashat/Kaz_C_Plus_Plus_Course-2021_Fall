#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string,int> ma;

    long long sum = 0;

    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m; cin >> m;
        for(int j = 0; j < m; j++)
        {
            string s;
            int x;
            cin >> s >> x;
            sum += x;
            ma[s] += x;
        }
    }

    for(map<string,int>::iterator it = ma.begin(); it != ma.end(); it++)
    {
        double procent = (it->second * 100.0) / double(sum);
        cout << it->first << " " << procent << endl;
    }
    return 0;
}