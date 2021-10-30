#include <iostream>
using namespace std;

/*
1. y = x^2
2. функция - жиі қолданылатын кодтарды жинап қойып қолдану, чтобы код жазуды кыскарту

*/

/* 1. definition:
1. Типім    - int
2. Параметр - int a, int b  : Әр айнымалыға типін бөлек жазамыз
3. денесі / body - a+b.....
4. return типі - return sum

formula:

Тип Функция_Атауы(Параметр)
{
    body

    return Айнымалы
}
*/

// 2 санды косатын функция:
int Add(int a, int b, int c)
{
    int sum = a + b + c;

    return sum;
}

int main()
{
    int x,y;
    cin >> x >> y; // 1 2
    // Call function
    // Function_Name(Param)
    cout << Add(x,y,5); // 1 + 2 + 5 = 8





    return 0;
}