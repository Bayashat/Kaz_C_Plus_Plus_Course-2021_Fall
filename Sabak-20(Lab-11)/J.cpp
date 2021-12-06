#include <bits/stdc++.h>
using namespace std;

int x,y;

bool f(pair<int,int> p1, pair<int, int> p2)
{
    return sqrt(((p1.first - x) * (p1.first - x)) + ((p1.second - y) * (p1.second - y))) < sqrt(((p2.first - x) * (p2.first - x)) + ((p2.second - y) * (p2.second - y)));
}
int main()
{
    cin >> x >> y;
    int n; cin >> n;
    vector< pair<int, int> > v;
    for(int i = 0; i < n; i++)
    {
        int l,r;
        cin >> l >> r;
        v.push_back(make_pair(l,r));
    }
    sort(v.begin(), v.end(), f);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}