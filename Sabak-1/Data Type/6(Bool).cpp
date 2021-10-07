//      7.bool - boolean

// True ---- шын(1)
// False ---- Өтірік(0)

// 1 byte
#include <iostream>
using namespace std;

int main()
{
    //  1.Создать
    bool flag = true;  // 
    cout << flag << endl;   // 1

    flag = false;  //
    cout << flag << endl;   // 0


    //  2.sizeof
    cout << "bool's size is " << sizeof(bool) << endl;  // 1 byte
    
    //  3. 
    cout << boolalpha;
    cout << (15 > 89) << endl;  // false
    cout << (27 < 55) << endl;  // true


    return 0;
}