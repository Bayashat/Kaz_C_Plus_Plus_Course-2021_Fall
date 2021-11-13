/*      6. set 


**:
    * find(key);                 //
    * count(key);                //

*/
#include <iostream>
#include <set>
using namespace std;

// 1. 
void test01()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    set<int>::iterator pos = s1.find(30); // табылса да табылмаса да итератормен қабылдау керек, табылмаса - s.end()-ке тен;

    if (pos != s1.end()) // 
    {
        cout << "found " << *pos << endl; // 30:  
    }
    else
    {
        cout << "NO" << endl;
    }
}


// 2.
void test02()
{
    set<int> s2;
    s2.insert(10);
    s2.insert(30);
    s2.insert(20);
    s2.insert(40);

    // 30 numbers:
    cout << s2.count(30) << endl; // 0 1 
}
int main()
{
    test02();

    return 0;
}
