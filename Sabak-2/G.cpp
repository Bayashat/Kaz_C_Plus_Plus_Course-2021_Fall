#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // 6

    int MAX = -1e9;  //  - 10 ^ 9
    for(int i = 0; i < n; i++)  // 1 5 3 4 7 2
    {
        int x;
        cin >> x;   // 3 
        if(x > MAX)
        {
            MAX = x; 
        }
    }
    cout << MAX ;

    return 0;
}