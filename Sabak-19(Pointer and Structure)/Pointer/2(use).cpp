#include <iostream>
using namespace std;

int main()
{
    //  Create pointer :
    //  int * Name = adress
    int a = 10;
    cout << a << endl; // 10
    cout << &a << endl; // 0x61ff0c

    int * p = &a;
    /*
    int *p;
    p = &a;
    */
    cout << p << endl; // 0x61ff0c
    cout << &p << endl; // 0x61ff08
    cout << *p << endl; // 10

    *p = 20;

    cout << a << endl; // 20 
    cout << *p << endl; // 20

    return 0;
}