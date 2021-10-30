#include <iostream>
using namespace std;
/*
1. сан берыледы, сол санга дейынгы прайм сандарды шагыру керек 
16 : 2,3,5,7,11,13
*/

bool check_Prime(int x) // 5
{
    for(int i = 2 ; i < x; i++) // i : 2~4
    {
        if(x%i == 0)
        {
            return false;
        }
    }
    return true;
}

void Prime(int x) // 8
{
    for(int i = 2; i <= x; i++) // 2~8 
    {
        if(check_Prime(i) == true) 
        {
            cout << i << " ";  // 2 3 5 7 
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Prime(n);


    return 0;
}