/*
        5. deque 
    1. push_back(elem); //
    2. push_front(elem); //
    3. pop_back(); /
    4. pop_front(); //
2. 
    1. insert(pos,elem); //
    2. insert(pos,n,elem); //
    3. insert(pos,beg,end); //
    4. clear(); //
    5. erase(beg,end); //
    6. erase(pos); //

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
// 1.
void test01()
{
    deque<int> d;
    // 1.
    d.push_back(10);
    d.push_back(20);

    // 2.
    d.push_front(100);
    d.push_front(200);
    printDeque(d); // 200,100,10,20

    // 3.
    d.pop_back(); // 20

    // 4.
    d.pop_front(); // 200
    printDeque(d); // 100,10
}
// 2.
void test02()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);  // 200,100,10,20

    // 1.::
    d.insert(d.begin(), 1000); // 1000
    printDeque(d);  // 1000,200,100,10,20

    // 2.:
    d.insert(d.begin(), 2, 10000); //  10000
    printDeque(d);  // 10000,10000,1000,200,100,10,20

    // 3.:
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d.insert(d.begin(), d2.begin(), d2.end()); 
    printDeque(d); // 1,2,3,10000,10000,1000,200,100,10,20
}
// 3.
void test03()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);  // 200,100,10,20

    // 1.-1:
    d.erase(d.begin());  
    printDeque(d);      // 100,10,20

    // 2.-2:
    d.erase(d.begin() + 1); // 
    printDeque(d); // 100,20  

    // 3.-3:
    deque<int>::iterator it = d.begin();
    it+=2;
    d.erase(it); // 

    // 4.:
    d.erase(d.begin(), d.end());

    // 5. :
    d.clear();
    printDeque(d); // 

}
int main()
{
    //test01();
    //test02();
    test03();

    return 0;
}
