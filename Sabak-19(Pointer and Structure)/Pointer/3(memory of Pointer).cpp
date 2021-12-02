#include <iostream>
using namespace std;

int main()
{
    // кез келген типтегі Поинтер памятта 4 байт орын алады
    int a = 10;
    cout << sizeof(a) << endl; // 4

    int *p = &a;
    cout << sizeof(a) << endl; // 4


    return 0;
}