#include <bits/stdc++.h>
using namespace std;

//  for   formulasy : for(бір ақ рет орындалатын код; условия ; постоянно кодтың соңында орындалатын код) 
int main()
{   
    // 0 1 2 3 4 5 6 7 8 9
    int i = 0;
    while(i < 10)   // 0 1 2 3 4 5 6 7 8 9
    {
        cout << i << " ";
        i++;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << i << " ";   // 0 1  2  3 4 5 6 7 8 9
    }
    cout << endl;

    // Esep-1 : 0~10 : 2 - 4 - 6 - 8 - 10
    for(int k = 2; k <= 10; k = k+2)  // k++ ,    k = k+1
    {
        cout << k << " " ;
    }
    cout << endl;

    //  Esep-3: 11 9 7 5 3 1 
    for(int o = 11; o >= 1; o-=2)
    {
        cout << o << " ";
    }

    return 0;
}