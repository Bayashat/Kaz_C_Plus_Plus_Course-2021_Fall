#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;   // 5

    int cnt = 0;    // counter

    for(int i = 0; i < n; i++)      // 1 2 3 4 5
    {
        int x;
        cin >> x;   // 
        if(x % 10 == 7)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}