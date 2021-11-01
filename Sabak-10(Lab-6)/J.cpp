#include <bits/stdc++.h>
using namespace std;

void Max(int *a)
{
    int MAX = -1e9;
    for(int i = 0; i < 4; i++)
    {
        if(a[i] > MAX)
        {
            MAX = a[i];
        }
    }    
    cout << MAX;
}
int main()
{
    int a[4];
    for(int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    Max(a);



    return 0;
}