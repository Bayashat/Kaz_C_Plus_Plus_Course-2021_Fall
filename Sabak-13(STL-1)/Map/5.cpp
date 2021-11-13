/*          4. map

    -  find(key);                  //
    -  count(key);                //

*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int>&m)
{
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    // 1. 
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos = m.find(3);// 

    if(pos != m.end()) 
        cout << "Found key= " << (*pos).first << " value= " << pos->second << endl;
    else 
        cout << "Not found" << endl;

    // 2.: 
    int num = m.count(3);       //
    cout << num << endl;        // 

  
int main()
{
    test01();

    return 0;
}
