/*
        3 deque
    1. deque& operator=(const deque &deq);     //
    2. assign(beg, end);                       //
    3. assign(n, elem);                        //

*/
#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> &d) //
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) // 
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1); // 0,1,2,3,4,5,6,7,8,9

    // 1. opertaor= :
    deque<int> d2;
    d2 = d1;
    printDeque(d2); // 0,1,2,3,4,5,6,7,8,9

    // 2. Assighn :
    deque<int> d3;
    d3.assign(d1.begin(), d1.end());
    printDeque(d3); // 0,1,2,3,4,5,6,7,8,9

    // 3. Assign :
    deque<int> d4;
    d4.assign(10, 100);
    printDeque(d4); // 100,100,100,100,100,100,100,100,100,100
}
int main()
{
    test01();

    return 0;
}
//