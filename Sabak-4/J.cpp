#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int target_index;
    for(int i = 0; i < n; i++)  // 13 : 1 3 5 12 14
    {
        if(a[i] <= m)
        {
            target_index = i+1; // 4
        }
    }
    cout << target_index;


    return 0;
}

