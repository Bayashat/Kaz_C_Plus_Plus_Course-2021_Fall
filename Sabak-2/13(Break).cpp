#include <bits/stdc++.h>
using namespace std;

/*
    Break; continue
    
    қолданамыз тек циклда

*/

int main()
{  
    //  1. Break - тоқтау, демалыс
    // функциясы - какойто быр условияга келгенде, циклымызды кенеттен токтату ушын
    //   0 1 2 3 4 5 6 7 8 9
    // 6-саны кезыккен кезде , циклды токтат
    for(int i = 0; i < 10; i++)
    {
        if(i == 6)
        {
            break;
        }
        cout << i << " ";   // 0 1 2 3 4 5 
    }

    int b = 10;
    while(b > 0)    
    {
        if(b == 6)
        {
            break;
        }
        cout << b << " ";
        b--;
    }

    return 0;
}