/*          2. Find_if

 : шарт бойынша ыздеу

** : find_if(iterator beg, iterator end, _Pred);

// beg 
// end 
// _Pred функция(bool типіндегі жасанды функция)
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;



bool GreaterFive(int val)
{
    return val > 5;
}

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i + 1);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive);
    if (it == v.end())
    {
        cout << "Not found!" << endl;
    }
    else
    {
        cout << "Greater than five is :" << *it << endl; // 6 7 8 9 10
    }
}


int main()
{

    test01();


    return 0;
}