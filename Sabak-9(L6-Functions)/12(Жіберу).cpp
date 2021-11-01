/*
1. Value Мәнін жіберу
2, Адрестік жіберу
3, Reference 
*/
// Local and Global variable
#include <iostream>
using namespace std;

// 1.value 
void f1(int a, int b)
{
    a += 10; // 15
    b += 10; // 
}

// 2. Адрестік жіберу
/*
int *a - address of integer         
string *s - address of string

&x - айнымалының адресін алу

*/
void f2(int *a, int *b) // 
{
    *a += 10;
    *b += 10;   
}


int main()
{
    /*
    int x = 10; // 10
    int *a = &x; // 
    cout << a << endl; // 0x61ff08
    cout << *a << endl; // 10
    */
    /*
    RAM-ОЗУ:  Randomn Access Memory
    ROM-: 
    */
    int x,y;
    cin >> x >> y; // 5  6 
    f1(x,y);
    cout << x << " " << y << endl; // 15 16

    f2(&x, &y);
    cout << x << " " << y << endl; // 15 16
    
    return 0;
}