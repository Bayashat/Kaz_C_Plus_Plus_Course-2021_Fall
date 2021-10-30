/*

            11 substr()
 
* string substr (size_t pos = 0, size_t len = npos)

формула  ： string.substr(pos, len) 
        .substrpos)       ---- : do konsa

*/

#include <iostream>
using namespace std;

void test01()
{
    // 1.
    string s1 = "first second third";
    string sub_str = s1.substr(6, 6);   // 
    cout<< sub_str <<endl; // second

    string str = "ABCDbhvgcg" ;

    cout << str.substr(2);    //
    cout << str << endl;    // "CDbhvgcg" 

    // 2
    string email = "bayashat@gmail.com";

    // 
    int pos = email.find("@"); // 8

    string username = email.substr(0, pos);
    cout << "username: " << username << endl; // bayashat
}
int main()
{
    test01();

    return 0;
}
