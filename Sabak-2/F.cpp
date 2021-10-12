#include <iostream>
using namespace std;

int main()
{
    // 78 84 88 92 + ..   106       S = (1 + n)*n / 2  - бірден басталатын, +1-ге қосылып отыратын сандар тізбегінің қосындысын табу    
    int sum = 0;  // 6  
    int n;
    cin >> n;   // 3
    cout << (1 + n)*n / 2;   
    /*
    int i = 1;
    while(i <= n)
    {
        sum += i;
        i++;
    }
    */
    /*
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;  // sum += i;
    }
    */
    // cout << sum;


    return 0;
}