/*      
            4. deque
    1. deque.empty();        /
    2. deque.size();         //
    3. deque.resize(num);    //
                            //
    4. deque.resize(num, elem); //
                                //

*/
#include <iostream>
using namespace std;
#include <deque>

void printDeque(deque<int> &d) // 
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) // 
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

    // 1.
    if (d1.empty())
    {
        cout << "d1 is empty!" << endl;
    }
    else
    {
        cout << "d1 is not empty !" << endl;
        // 2.
        cout << "d1's size ：" << d1.size() << endl; // 10
    }

    // 3
    d1.resize(15);
    printDeque(d1); // 0,1,2,3,4,5,6,7,8,9,0,0,0,0,0

    d1.resize(5);
    printDeque(d1); // 0,1,2,3,4
}
int main()
{
    test01();

    return 0;
}
