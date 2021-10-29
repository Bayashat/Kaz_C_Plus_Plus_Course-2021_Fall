/*

    Given 1D Array
    don't use sort() function to sort it in increasing order.
*/
#include <iostream>
using namespace std;

int main()
{
    /*
    int a[2] = {4,2};
    if(a[0] > a[1])
    {
        int temp = a[0];
        a[0] = a[1]; 
        a[1] = temp;
    }
    */
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1]; 
                a[j+1] = temp;
            }            
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
