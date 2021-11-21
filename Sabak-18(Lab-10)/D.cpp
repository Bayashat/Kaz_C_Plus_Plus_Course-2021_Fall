#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long Sum_Of_Vector(vector<int> v)
{
    long long sum = 0;
    for(int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}

bool f(vector<int> a, vector<int> b)
{
    if( Sum_Of_Vector(a) == Sum_Of_Vector(b) )
    {
        if(a.size() == b.size())
        {
            if(a[0] == b[0])
            {
                return true;
            }
            return a[0] < b[0];
        }
        return a.size() < b.size();
    }
    return Sum_Of_Vector(a) < Sum_Of_Vector(b);
}
int main()
{
    vector< vector<int> > vec;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m; cin >> m;
        vector<int> v1;
        for(int j = 0; j < m; j++)
        {
            int x; cin >> x;
            v1.push_back(x);
        }
        vec.push_back(v1);
    }

    sort(vec.begin(), vec.end(), f);

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }    

    return 0;
}