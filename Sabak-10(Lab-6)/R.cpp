#include <iostream>
#include <algorithm>
using namespace std;

char To_Upper(char c)
{
    c = toupper(c);
    return c;
}
int main()
{
    char c;
    cin >> c;
    cout << To_Upper(c);
}