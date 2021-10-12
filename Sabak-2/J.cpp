#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;   // 5

    int cnt = 0;    // counter

    for(int i = 1; i <= n; i++)      // 1 2 3 4 5
    {
        int x;
        cin >> x;   // 
        
        while(x != 0)
        {
            if(x % 10 == 0) // соңғы цифры 0 ма жокпа аныктайды
            {
                cnt++;
            }
            x /= 10;
        }
    }
    cout << cnt;

    return 0;
}