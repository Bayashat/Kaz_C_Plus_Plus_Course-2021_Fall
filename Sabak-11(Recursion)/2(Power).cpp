#include <bits/stdc++.h>
using namespace std;
/*    2.Power

2   3

2^3 = 8

*/

int Power(int x, int y) // 2  3 
{
    int Answer = 1;
    int i = 1;
    while(i != y+1)
    {
        Answer *= x; // 1 * 2 *2 * 3 = 8
        i++;
    }
    return Answer;
}

int Power_Recursion_2(int x, int y, int Answer) // 2 0  1 
{
    if(y == 0)
    {
        return Answer;
    }
    Answer *= x; // 8
    return Power_Recursion_2(x, y-1, Answer); //
}


int Power_Recursion(int x, int y) // 2 1
{
    if(y == 0)
    {
        return 1;
    }
    return x * Power_Recursion(x, y-1); // 2 * (2 * (2 * 1 )) = 8 
}
int main()
{
    int x,y;
    cin >> x >> y;
    cout << Power_Recursion(x,y) << endl;
    cout << Power_Recursion_2(x,y,1) << endl;

    return 0;
}