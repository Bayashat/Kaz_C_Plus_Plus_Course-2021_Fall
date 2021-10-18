#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int numbers[1001];
    for(int i = 0; i < 1001; i++)
    {
        numbers[i] = 0;
    }

    for(int i = 0; i < n; i++) // 1 2 2 9 8 9 6 6 7 6
    {
        int d = a[i]; // 1
        numbers[d]++; // 
    }

    int Max = -1e9;
    for(int i = 0; i < 1001; i++)
    {
        if(numbers[i] > Max)
        {
            Max = numbers[i];
        }
    } 
    for(int i = 1001; i > 0; i--)
    {
        if(numbers[i] == Max)
        {
            cout << i << " ";
        }
    } 


    return 0;
}