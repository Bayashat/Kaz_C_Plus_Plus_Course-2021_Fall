/*
        7. deque 


    Өспелі: sort(iterator beg, iterator end)    /
    Кемімелі : sort(rbegin(), rend())
*/
#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);      // 200,100,10,20

    sort(d.begin(), d.end());
    printDeque(d);  // 10,20,100,200
}
int main()
{
    test01();

    return 0;
}
