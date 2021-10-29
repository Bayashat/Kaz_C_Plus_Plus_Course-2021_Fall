#include <bits/stdc++.h>
using namespace std;
/*
    1. == арқылы салыстыра аламыз
     - 0 false
     - 1 true

    2, int X = s1.compare(s2) ;

      - 0     == 
      - 1      s1 != s2
  
*/
int main()
{
    int y = 5;
    int x = y;


    cout << boolalpha;
    cout << (x==y) << endl; // bool : true(1) , false(0) 

    string s1 = "xyz";
    string s2 = "xyz";
    int result = s1.compare(s2);
    cout << result << endl;

    if(s1 == s2)
    {
        cout << "Olar ten" << endl;
    }
    else
    {
        cout << "Olar ten emes" << endl;
    }
    
    return 0;
}