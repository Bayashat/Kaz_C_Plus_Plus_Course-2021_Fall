/*

    Given 2 numbers.  If the result of second number divided by first is power of 2, then print out the degree. If no, then print "NO";
*/
#include <iostream>
using namespace std;

bool power_of_two(int x)
{
    if(x %2 == 1)
    {
        return false;
    }
    while(x != 0) // 1
    {
        if(x%2 != 0 && x != 1)
        {
            return false;
        }
        x /= 2;
    }
    return true;
}

int degree(int x) // 8
{
    int cnt = 0;
    while(x != 1)
    {
        x /= 2; // 1
        cnt++; // 3
    }
    return cnt;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int x = b/a; // 
    if(power_of_two(x) == true) // 25/5 = 5 
    {
        cout << degree(x);
    }
    else
    {
        cout << "No";
    }
    
    return 0;
}
