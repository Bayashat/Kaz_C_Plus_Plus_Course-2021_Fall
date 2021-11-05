#include <bits/stdc++.h>
using namespace std;

int Degree(int n) // 3
{
    long long Answer = 1;
    for(int i = 0; i < n; i++)
    {
        Answer *= 2;  // 1*2*2*2 = 8
    }
    return Answer;
}

int Degree_R(int n) // 3 
{
    if(n == 0)
    {
        return 1;
    }
    return Degree_R(n-1) * 2; // ((1 * 2) * 2) * 2 = 8
}

int Degree_R2(int n, int Answer) // 0  8 
{
    if(n == 0)
    {
        return Answer;
    }
    Answer *= 2;
    return Degree_R2(n-1,Answer);
}

int main()
{
    int n;
    cin >> n;
    // cout << Degree_R(n);
    cout << Degree_R2(n, 1);

    return 0;
}