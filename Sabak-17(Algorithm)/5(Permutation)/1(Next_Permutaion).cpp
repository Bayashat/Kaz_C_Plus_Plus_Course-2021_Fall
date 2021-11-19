/*          1. Next_permutation

// келесі тізбекті көрсетеді
: Next_permutation(first,last);

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int *a)
{
    for (int i = 0; i < 3; ++i)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    /*

    int a[] = {1,2,3};
    int len = sizeof(a) / sizeof(int);  // 12 / 4 = 3




    // келесі тізбегін ， 3!=6. сол үшін 6 ау бар

    next_permutation(a, a + 3);
    print(a);   // 1 3 2
    next_permutation(a, a + 3);
    print(a);   // 2 1 3
    next_permutation(a, a + 3);
    print(a);   // 2 3 1
    next_permutation(a, a + 3);
    print(a);   // 3 1 2
    next_permutation(a, a + 3);
    print(a);   // 3 2 1


        // 1. while арқылы：
    while(next_permutation(a,a+len))
    {
        for(int i = 0; i < len; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    //2. do while ：
    do{
        for(int i = 0; i < len; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a, a + len));
    */
    vector<int> v;
    for (int i = 1; i < 5; i++)// 4 ! = 4*3*2*1 = 24
    {
        v.push_back(i);
    }
    while(next_permutation(v.begin(), v.end()))
    {
        for(int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }    

    return 0;
}