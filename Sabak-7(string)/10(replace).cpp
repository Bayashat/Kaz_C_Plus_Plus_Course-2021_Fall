/*
            10. replace() 

    string& replace(int pos, int n, const string& str);   


*/
#include <iostream>
using namespace std;
void test01()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111"); // 
    cout << str1 << endl; // a1111efg
}

void test02()
{
    string http = "www.runoob.com";

    //
    http.append("/C++");
    cout << http << endl; // www.runoob.com/C++

    //
    int pos = http.find("/C++"); // 14
    cout << pos << endl; 

    http.replace(pos, 4, "");   //
    cout << http << endl;   // www.runoob.com
}
int main()
{
    test01();

    return 0;
}
