#include <iostream>
using namespace std;

int main()
{
    // void типіндегі поинтерлардың ерекшелігі : кез келген тип тегі айнымалының адресін сақтай алады
    int a = 20;
    int *p = &a;

    string s = "Hello";
    string *p3 = &s;

    void *p2 = &s;
    

    return 0;
}