#include <iostream>
using namespace std;
/*
         
&       1&1 = 1    1 & 0 = 0   0&1 = 0   0 & 0 =0 
|       0 | 1 = 1  1 | 0 = 1   1|1 = 1   0 | 0 = 0
^       0 ^ 0 = 0  0 ^ 1 = 1   1 ^ 0 = 1    1 ^ 1 =0 

*/

/*      AND  OR  XOR  
         &     |     ^

    &、 |  ^ table:
    a     b      a&b      a|b      a^b
    0     0       0        0        0
    0     1       0        1        1
    1     1       1        1        0
    1     0       0        1        1
*/

int main()
{
    
    cout << (4 & 5) << endl;     // 4

    
    /*
     4  100, 5  101
    100
    101
   =100
   so =  4 
   */
----------------------------------------------------------------------------------------------------------------------------------
    //

