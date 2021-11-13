/*      6 vector 



 1. at(int idx);      //
 2. operator[];        //
 3. front();             //
 4. back();              //
*/
#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;       

    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }       
    // 1. [] қолдану арқылы ：
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;

    // 2.at：
    for(int i=0;i<v.size();i++)
    {
        cout << v.at(i) << " " ;
    }
    cout << endl;

    // 3.：
    cout << "first element is: " << v.front() << endl; // 0

    // 4.：
    cout << "end element is: " << v.back() << endl; // 9
    
}

int main()
{
    test01();
}
