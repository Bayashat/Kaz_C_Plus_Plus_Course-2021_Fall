/*                4.  map插入和删除
  
  insert(elem) 
 1. m.insert(a, b);
 2. m.insert(pair<int,int>( a, b));
 3. m.insert(make_pair( a, b));
 4. m.insert(map<int,int>::value_type( a, b));
 5. m[a] = b;

    -  clear();        
    -  erase(pos);      
    -  erase(beg, end); 
    -  erase(key);     
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
    map<int,int> m;
    // 1.:
    

    m.insert(pair<int,int>(1,10));

        // ：
    m.insert(make_pair(2,20));

        // ：
    m.insert(map<int,int>::value_type(3,30));

        // :
    m[4] = 40;          // 

    cout << m[5] << endl; // 0  

    printMap(m);    // (1 10), (2 20), (3 30), (4 40) (5 0)

    // 2. ：
    m.erase(m.begin());
    printMap(m);    //  (2 20), (3 30), (4 40) (5 0)

    m.erase(3);     // 
    printMap(m);    //  (2 20), (4 40) (5 0)

    // ：
    m.erase(m.begin(),m.end()); 

    m.clear(); 
    printMap(m); //
}
   
int main()
{
    test01();

    return 0;
}
