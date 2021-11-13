/*
        3. set :

**

 *  : set -те  [] әдіс жоқ 

 1. using iterator
 2. use auto 
 3. use reverse iterator
*/
#include <iostream>
#include<set>
using namespace std;

// 1. ：
void printSet01(set<int> &s)
{
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 2.:
void printSet02(set<int> &s)
{
    for(auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}

// 3. 
void printSet03(set<int> &s)
{
    for(set<int>::reverse_iterator rit = s.rbegin(); rit != s.rend(); rit++)
    {
        cout << *rit << " ";
    }
}
int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);
    // 1. ：
    printSet01(s1); // 10 20 30 40

    // 2. :
    printSet02(s1); // 10 20 30 40

    // 3. 
    printSet03(s1); // 40 30 20 10
    return 0;
}