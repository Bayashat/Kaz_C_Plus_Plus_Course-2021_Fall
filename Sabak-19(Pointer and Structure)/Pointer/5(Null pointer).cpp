#include <iostream>
using namespace std;

int main()
{
    // 0 
    int *p = nullptr; // NULL
    int a = 20;

    p = &a;
    cout << *p;

    return 0;
}