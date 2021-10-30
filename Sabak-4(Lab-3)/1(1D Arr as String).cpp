#include <iostream>
using namespace std;

int main()
{
    char a[5] = {'+', '-', '1', 'p', ')'};

    cout << a[1]; // -

    string a[5] = {"-+", "qwe", "hello", "4578", "()_"};

    cout << a[2]; // hello

    return 0;
}