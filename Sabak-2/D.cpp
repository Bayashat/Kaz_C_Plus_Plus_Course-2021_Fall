#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;  // 13  7   => 4
    if( a <= b )
    {
        cout << 2;
    } 
    else 
    {
        if(a*2 % b == 0)
        {
            cout << (a * 2 / b);
        }
        else 
        {
            cout << (a * 2 / b) + 1; // 26 / 7 = 3 + 1 = 4 
        }
    }

    

    return 0;
}