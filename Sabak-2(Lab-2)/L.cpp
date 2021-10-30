#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;   // 16 -  1 2 4 8 16 
     
    for(int i = 0; i <= x; i++)
    {
        cout << pow(2, i) << " ";
    }   


    return 0;
}