#include <iostream>
using namespace std;

int main()
{
    int d[4][3] = {{10,55,47}, {49,38,12},{66,78,52},{51,74,10}};

    int a[3] = {1,2,3};  
    cout << a[0]; // 1

    // 1.sizeof()
    cout << sizeof(d) << endl; // 4 * 12 = 48 byte
    cout << sizeof(d[0]) << endl; // 4 * 3 = 12 byte
    cout << d[0][0] << endl;  // 10

    // 2. Address: &Variable 
    cout << int(&(d[0][0])) << endl; // 6422240
    cout << int(&d[0]) << endl; // 6422240
    cout << int(&d[0][1]) << endl;  // 6422244
    cout << int(&d[1]) << endl; // 6422252
    cout << int(&d[3]) << endl; // 40 + 9*4 = 76 
    cout << int(&d[3][2]) << endl;  // 76 + 4 + 4 = 84
    return 0;
}