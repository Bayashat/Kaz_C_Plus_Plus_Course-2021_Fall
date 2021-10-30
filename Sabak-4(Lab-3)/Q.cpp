/*
    Балалық шаққа саяхат : 
    -      1 
    - 1. жай сан : 2,3,5, 7 , 11, 13, 17,19
    - 2. Құрама сан : 4, 6, 8,9,10,12,14,15,16,18,20

    4 : 1, 2, 4
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for(int i = 2; i < x; i++) // 19 :    2~18 - 
    {
        if(x % i == 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
