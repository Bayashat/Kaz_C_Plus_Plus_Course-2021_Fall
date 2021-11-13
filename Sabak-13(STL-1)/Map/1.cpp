/*          2.  map

*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
// 1.map：

    // ：
    map<int,int> m;
    // : 

    m.insert(pair<int,int>(3,30));  
    m.insert(make_pair(2, 20));     // 
    m.insert(map<int,int>::value_type(4,40));
    m[5] = 50;

    // pr：
    printMap(m);   

// 2.: 
    map<int,int>m2(m);
    printMap(m2);

// 3.: 
    map<int,int>m3;
    m3 = m2;
    printMap(m3);

    m[5] = 50;  // 
}
int main()
{
    test01();

    return 0;
}

