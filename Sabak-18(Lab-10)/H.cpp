#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n; // 3 
    int k;
    set<int> s;
    vector<int> v; // 1
    for(int i = 0; i < n; i++) // 1 1 1
    {
        int x;
        cin >> x; // 1
        k = s.size(); // 1
        s.insert(x); // 1
        if(k == s.size())
        {
            continue;
        }
        else
            v.push_back(x);
    }
    
    do{
        for(int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}