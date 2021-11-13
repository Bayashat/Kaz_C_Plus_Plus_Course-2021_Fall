/*      4. set өлшемі + ауысу

**** 

** : 


**: 

    *  size();       //
    *  empty();      //
    *  swap(st);     //
*/

#include <iostream>
#include <set>
using namespace std;

// :
void printSet(set<int> &s) 
{
    for(set<int> :: iterator it = s.begin();it!= s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 1. Size：
void test01()
{
    set<int> s1;
    
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    printSet(s1);   // 10 20 30 40
    // 1. ：
    if(s1.empty())
    {
        cout << "s1 is Empty" << endl;
    }
    else
    {
        cout << "s1 isn't empty" << endl;
        // 2. : 
        cout << "s1's size is " << s1.size() << endl; // 4
    }
}

// 2.swap：
void test02()
{
    // first: 
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    // second：
    set<int> s2;
    
    s1.insert(100);
    s1.insert(300);
    s1.insert(200);
    s1.insert(400);

    cout << "before:" << endl;
    printSet(s1);   // 10 20 30 40
    printSet(s2);   // 100 200 300 400

    cout << "After:" << endl;
    s1.swap(s2);    // 

    printSet(s1);   // 100 200 300 400
    printSet(s2);   // 10 20 30 40


}

int main()
{
    test02();
}
