// Local and Global variable
#include <iostream>
using namespace std;

void Print_Array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }   
}

void Read_Array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += 10;
    }
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    /*
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    } 
    */
    Read_Array(a, n);
    Print_Array(a, n);

    return 0;
}