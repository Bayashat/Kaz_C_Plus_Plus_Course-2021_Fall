#include <iostream>
using namespace std;
int n=0;
// declaring functions
void foo1();
void foo2();

// defining recursive functions
void foo1() 
{ 
  if (n <= 20) 
  { 
    cout<<n<<" ";  // prints n
    n++;           // increments n by 1
    foo2();       // calls foo2() 
  } 
  else
    return; 
} 

void foo2() 
{ 
  if (n <= 20) 
  { 
    cout<<n<<" ";  // prints n
    n++;           // increments n by 1
    foo1();       // calls foo1()
  } 
  else
    return; 
} 

//  --- Tikeley:
void foo3()
{
    if(n <= 20)
    {
        cout << n << " ";
        n++;
        foo3();
    }
    else
    {
        return;
    }
}
// Driver Program 
int main() 
{ 
  foo3(); 
  return 0; 
} 