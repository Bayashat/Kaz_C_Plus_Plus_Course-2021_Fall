#include <bits/stdc++.h>
using namespace std;

/*
    Continue - Жалғастыру
    
    функциясы : условия канагаттырылган жагдайда келесы цикл бырден отеды, калган кодтарды орындамайды . келесі циклга секыреды

*/

int main()
{ 
    for(int i = 0; i < 10; i++)
    {
        if(i == 6)
        {
            continue;
        }
        cout << i << " ";
    }   //  0 1 2 3 4 5 7 8 9

    return 0;
}