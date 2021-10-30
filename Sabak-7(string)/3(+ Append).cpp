/*
        5. 
    2.  append()
    2.1 - str.Append("abcd") //  str-дің артына жалғайды "abcd"
    2.2 - str.append(str1) // str-дің артына жалғайды Str1
    2.3 - str.append("Game LOl", 4) // str-дің артына жалғайды "Game Lol"-дың алғашқы 4 символын
    2.4 - str.append("Game LOl", 5 ,3) // str-дің артына жалғайды "Game LOL"-дың 5-ші символынан бастап ұзындығы 3-ке тең болатын символын.  
*/
#include <iostream>
using namespace std;

void test01()
{
    // 1. + +=:
    string s1 = "first ";
    string s2 = "second ";
    string s3 = "third ";
    string s4 = "fourth ";
    char ch = '@';

    string s5 = s1 + s2; // first second
    string s6 = s1 + s3; // first third
    string s7 = s1 + s4; // first fourth
    string s8 = s1 + ch; // first @


    // 2.append():
    string str2 = "LOL DNF";
    string str3 = "I";
    str3.append(" love ");
    cout << str3 << endl; // I love 

    str3.append("game abcde", 4); // 
    cout << str3 << endl; // I love game

    str3.append(str2);
    cout << str3 << endl; // I love game LOL DNF

    str3 = "I love game ";

    str3.append(str2, 4, 3); // 
    cout << str3 << endl;  // I love game DNF
}
int main()
{
    test01();

    return 0;
}
