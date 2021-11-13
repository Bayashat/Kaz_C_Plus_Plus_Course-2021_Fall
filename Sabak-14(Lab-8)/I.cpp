#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Find_K(vector <int> v, int k)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    if(Find_K(v,k) == true)
    {
        cout << "Yes" ;
    }
    else
    {
        cout << "No";
    }
    // cout << (Find_K(v,k) == true ? "Yes" : "No");


    return 0;
}