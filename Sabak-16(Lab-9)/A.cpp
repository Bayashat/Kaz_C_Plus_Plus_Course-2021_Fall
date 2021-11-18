#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<int, int> > s;
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        s.insert(make_pair(x,y));
    }

    for(set<pair<int,int> > ::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }



    return 0;
}