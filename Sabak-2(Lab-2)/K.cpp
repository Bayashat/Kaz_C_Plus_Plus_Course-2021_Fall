#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;   // 16 -  1  4  9   16   
     
    for(int i = 1; i*i <= x; i++)
    {
        cout << i*i << endl;
    }   


    return 0;
}