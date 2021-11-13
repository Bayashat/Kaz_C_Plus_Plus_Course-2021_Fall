/*


 1. deque<T> deqT;            
 2. deque(beg, end);           
 3. deque(n, elem);            
 4. deque(const deque &deq);  

*/
#include <iostream>
using namespace std;
#include <deque>

void printDeque(deque<int> &d)  //
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) // 
    {
        // *it = 100  
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1; //1
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1); // 0,1,2,3,4,5,6,7,8,9

    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2); // 0,1,2,3,4,5,6,7,8,9

    deque<int> d3(10, 100); // 10  100
    printDeque(d3); // 100,100,100,100,100,100,100,100,100,100

    deque<int> d4 = d3;
    printDeque(d4); // 100,100,100,100,100,100,100,100,100,100
}
int main()
{
    test01();
    system("pause");
    return 0;
}
// 