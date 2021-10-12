/*          3. float and double

   Float      4 byte       7 санға дейін  5,614523         
   double     8 byte       15-16санға дейін   168,1245455666 
 
*/
#include <iostream>
#include <cmath>
#include <iomanip>  //
using namespace std;

int main()
{
///// 1
    
    float f1 = 3.1415926f;  
    cout << "f1 = " << f1 << endl;  // 3.14159

    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;  // 3.14159

    double p = 22/7.0;
    cout << p << endl; // 3.14286
    
    printf("%.6f",p); // 3.142857
    printf("%.10f",p);  // 3.1428571429

    // 2) Setprecision()
    cout << setprecision(2);    // үтірден соң 2 сан
    double num = 22/ 7.0;
    cout << num << endl;  // 3.14
//*********************************************************************************************************************************************
///// 2 . Two integers divide, how to get float number?
    int a = 5;
    int b = 2;
    double num = a / b;
    cout << num ;  // 2  

    // sol-1: 
    double num = (double)a / b;
    cout << num; // 2.5

    // sol-2
    double num = a * 1.0 / b;
    cout << num ;  // 2 .5

    // 3.sizeof
    cout << sizeof(f1) << endl; // 4
    cout << sizeof(d1) << endl; // 8

}