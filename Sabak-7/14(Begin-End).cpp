/*

    Begin and End
    we use these for Iterator
    Iterator : контайнердегі элементтермен жұмыс жасауға көмектеседі

*/
#include <iostream>
using namespace std;

int main()
{
    string s  ="Hello";
    string::iterator iter; // итераторлық обеькт создать еттым

    // Итератордың көмегімен стингтағы элементтерді терминалга шыгарамыз
    for(iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter ;
    }

    return 0;
}
