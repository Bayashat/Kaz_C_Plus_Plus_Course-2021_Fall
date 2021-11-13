#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s; 
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) // 1 2 1 3 3 
    {
        int x;
        cin >> x;
        s.insert(x); // 1 2 3
    }
    cout << s.size(); // 3


    return 0;
}