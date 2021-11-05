#include <bits/stdc++.h>
using namespace std;

int Fibonaaci(int n) // 1
{
    // 0 1 1 2 3
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    int x = 0;
    int y = 1;
    int Answer;
    for(int i = 0; i < n-2; i++) // 0 1 2 
    {
        Answer = x+y; // 3
        x = y; // 1
        y = Answer; // 2
    }
    return Answer;
}

int Fibonaaci_R(int n, int Answer, int x, int y) // 2 1  1  1
{
    if(x == 0)
    {
        if(n == 1) return 0;
        if(n == 2) return 1;
    }
    if(n == 2)
    {
        return Answer;
    }

    Answer = x+y;
    x = y;
    y = Answer;
    return Fibonaaci_R(n-1, Answer,x, y);
}

int main()
{
    int n;
    cin >> n;
    // cout << Fibonaaci(n);
    cout << Fibonaaci_R(n, 0, 0 , 1);
    return 0;
}