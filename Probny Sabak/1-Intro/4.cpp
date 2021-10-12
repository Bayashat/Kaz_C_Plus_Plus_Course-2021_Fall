/*          3. Тұрақты айнамалы - constant variable

    * 1. #define 
    
      formula：#define "Атауы" "Мәні"

    * 2.  const 

    formula:  const "Data type" "Атауы" = "Мәні"

*/
#include <iostream> 
using namespace std;
    // example-1
    
#define Day 7

int main()
{
    cout << "one week has: " << Day << " day" << endl; // 7

    // Example-2
    const int month = 12;

    cout << "one year has " << month << " months" << endl; // 12


    return 0;
}