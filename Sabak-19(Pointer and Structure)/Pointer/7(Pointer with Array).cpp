#include <iostream>
using namespace std;

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    
    cout << a << endl; // 0x61fee8

    int *p = a;
    cout << *p << endl; // 1  
    p++;
    cout << *p << endl; // 2

    p = a;
    for(int i = 0; i < 9; i++)
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}