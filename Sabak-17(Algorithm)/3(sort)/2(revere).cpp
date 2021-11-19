/*              4. Reverse

:  reverse(iterator beg, iterator end);

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void myPrint(int val)   
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    cout << "do ： " << endl;
    for_each(v.begin(), v.end(), myPrint); // 10 30 50 20 40
    cout << endl;

    cout << "posle： " << endl;
    reverse(v.begin(), v.end());

    for_each(v.begin(), v.end(), myPrint); // 40 20 50 30 10
    cout << endl;
}
int main()
{
    test01();

    return 0;
}
//