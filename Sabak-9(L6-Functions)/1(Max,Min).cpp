/*
    Max and Min functions , Екі датаны салыстырыпб кішісін не үлкенін көрсетеді
формулалары：
    1.Max(a,b);    Max(10,15) = 15
    2.Min(a,b);    Min(10,15) = 10

*/
#include <iostream>
using namespace std;

int main()
{
    // user enter any two numbers, you need output the biggest number
    int a,b;
    cin >> a >> b;
    cout << max(a,b) << endl;
    cout << min(a,b) << endl;

    return 0;
}