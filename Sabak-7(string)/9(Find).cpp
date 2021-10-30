/*         find(str,pos) 


find() 
    * size_t find (const string& str, size_t pos = 0) const;
    * s1.find(s2,pos)

    if we don't write the position, it will start with 0 index. 
    return the corresponding pos.
    
    Файнды қолданғанда егер Стинг табылмаса:
    1, cout арқылы істегенде, ол қайтарады Өте үлкен санды  ：  string::npos  (-1) (4294967295)
    2, егер ізделінді жауапты айнымалыға сақтасақ, -1 қайтарады
*/
#include <iostream>
using namespace std;

void test01()
{
    string s1 = "first second abcde  second third"; // 31 
    string s2 = "second";

    cout << s1.find(s2) << endl; // 6
    cout << s1.find(s2,4) << endl; // 6
    cout << s1.find(s2,7) << endl; // Big number

    int x = s1.find(s2, 25); // -1

    if(s1.find(s2, 25) < s1.length())
    {
        cout << "Tabyldy" << endl;
    }
    else
    {
        cout << "tabylmady";
    }


    string s1 = "first second third";
    
    int pos = s1.rfind("ir");
    if(pos != string::npos)
    {
        cout <<  pos << endl; // 15
    }
    else
    {
        cout << "Not found";
    }
    
    cout << s1.rfind("ir", 7); // 1


}
