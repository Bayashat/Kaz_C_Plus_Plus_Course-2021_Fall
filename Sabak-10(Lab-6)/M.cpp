#include <iostream>
#include <algorithm>
using namespace std;


void Reverse_Array(int *a, int n)
{
    reverse(a, a+n);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }   
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Reverse_Array(a, n);   


}