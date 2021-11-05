#include <bits/stdc++.h>
using namespace std;

string To_Knary(int n, int k)
{
    string Answer;
    if(n < k)
    {
        if(k > 10)
        {
            Answer = char(n + 55);
        }
        else
        {
            Answer = char(n + 48);
        }
    }
    else
    {
        while(n != 0)
        {
            int x = n % k; // 10
            if(x >= 10)
            {
                Answer = char(x + 55) + Answer;
            }
            else
            {
                Answer = char(x + 48) + Answer;
            }
            n /= k;
        }
        return Answer;
    }
    return Answer;
}

string To_Knary_R(int n, int k, string Answer)
{
    if(n == 0)
    {
        return Answer;
    }
    int x = n % k; // 10
    if(x >= 10)
    {
        Answer = char(x + 55) + Answer;
    }
    else
    {
        Answer = char(x + 48) + Answer;
    }    
    return To_Knary_R(n/k, k, Answer);
}
int main()
{
    int n,k;
    cin >> n >> k;
    // cout << To_Knary(n,k);
    string Answer = "";
    if(n < k)
    {
        if(k > 10)
        {
            Answer = char(n + 55);
        }
        else
        {
            Answer = char(n + 48);
        }
        cout << Answer;
    }
    else
        cout << To_Knary_R(n, k , Answer);
    return 0;
}