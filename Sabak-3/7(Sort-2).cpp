/*              Sort - 2
    
Warning : need add <algorithm>

*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int); // 5
                // 1.  өспелі сорттау

                // 1.1 sort функциясы

    sort(arr,arr+n);   //  алдымен массив атын, сосын қай орынға дейін сорттаймыз

                // 1.2 sort - 2 

    sort(arr, arr+n, less<int>());


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                // 2. Кемімелі сорттау

                // 2.1 Reverse:
    reverse(arr, arr+n); //    

                // 2.2 
    sort(arr, arr + n, greater<int>());

                // 2.3 Print using 
    // 5 4 3 2 1 
    for(int i = n-1; i >0; i--)
    {
        cout << arr[i] << " ";    // 1 2 3 4 5
    }     
        
}

