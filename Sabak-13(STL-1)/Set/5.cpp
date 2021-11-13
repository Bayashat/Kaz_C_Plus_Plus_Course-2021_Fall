/*      5. set insert + erase

**** 


*  insert(elem);           //
*  clear();                //
*  erase(pos);             //
*  erase(beg, end);    //
*  erase(elem);            //

*/
#include <iostream>
#include <set>
using namespace std;

// 
void printSet(set<int> &s)  
{
    for(set<int> :: iterator it = s.begin();it!= s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int> s1;
    // 1.
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1);   // 10 20 30 40 

    // 2. 
    s1.erase(s1.begin());   // 
    s1.erase(s1.end()); 
    printSet(s1);   // 20 30 

    s1.erase(s1.begin()+2); // only front or back

    // 2.1 ：
    s1.erase(30);   
    printSet(s1);   // 20 
    
    // 3. ：
    s1.clear();
    printSet(s1);   // 

    // 3.1. ：
    s1.erase(s1.begin(),s1.end());  // 
    
}

int main()
{
    test01();
}
