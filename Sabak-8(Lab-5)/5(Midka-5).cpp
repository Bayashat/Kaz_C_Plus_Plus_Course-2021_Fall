/*
    Given an array in какой то зандылык, табу керек қай сан жоқ
    1 3 7 9 11
*/
#include <iostream>
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
    int x = a[n-1] - a[n-2]; // 2
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i-1] != x)
        {
           cout << a[i-1] + x; 
        }
    }   

    return 0;
}
