/*
        13  insert(pos,str)
    қыстырғанда позицияға дейінгі орында қыстырамыз
* string& insert(int pos, const string& str);   //
* string& insert(int pos, int n, char c);       //  n ұзындықтағы c символын pos орнынан бастап қыстыру

*/
#include <iostream>
using namespace std;

void test01()
{
    string s1, s2, s3;
    s1 = s2 = "1234567890";
    s3 = "aaa";

    // 1.
    s1.insert(5, s3);
    cout<< s1 <<endl;   // 12345aaa67890

    // 2. 
    s2.insert(5, "bbb");
    cout<< s2 <<endl;   // 12345bbb67890

    // 3.
    s2.insert(0, 5, 'x');
    cout << s2;         // xxxxx12345bbb67890
    
}

void test02()
{
    string str = "to be question";
    string str2 = "the ";
    string str3 = "or not to be";

    str.insert(6,str2);                 // to be (the ) question        
    str.insert(6,str3,3,4);             // to be (not ) the question      
    str.insert(10,"that is cool",8);    // to be not (that is ) the question 
    str.insert(10,"to be ");            // to be not (to be ) that is the question   
    str.insert(15,1,':');               // to be not to be (:) that is the question   /
}

int main()
{
    test01();
    test02();

    return 0;
}
