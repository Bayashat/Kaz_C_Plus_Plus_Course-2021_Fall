/*      2. set 

**** 

* 1. set<T> st;               // 
* 2. set(const set &st);      //



*  set& operator=(const set &st);   //
*/
#include <iostream>
#include <set>
using namespace std;

// :
void printSet(set<int> &s)
{
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    // 1：
    set<int> s1;
    // элемент салудың тек insert әдісі бар
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);

    // :

    printSet(s1);    // 10 20 30 40

    //  2.копия:
    set<int>s2(s1); 
    printSet(s2);    // 10 20 30 40

    //  3.мән беру
    set<int> s3;
    s3 = s2;
    printSet(s3);   // 10 20 30 40
}

int main()
{
    test01();
}
/*

*/