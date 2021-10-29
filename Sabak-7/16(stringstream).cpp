/*

    StringStream - ыдыс, көпір  : интежер немесе стринг типтеріндегі сандарды бірбірне ауыстырады
    >>     << 
    <<  арқылы StringStream-ға элемент салынады
    >> Ыдыстан шыгарылады

*/
#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    // 1. string -> int
    string s = "4562";
    stringstream ss; // создать еттік sstream обектысын "4562"
    ss << s;
    int a;
    ss >> a; // 4562
    cout << a + 10 << endl;

    // 2. int -> string
    int q = 7895;
    stringstream ss2;
    ss2 << q;
    string s2;
    ss2 >> s2;
    cout << s2;

    return 0;
}
