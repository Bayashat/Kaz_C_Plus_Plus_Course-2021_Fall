#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // 6

    int Odd = 0;
    int Even = 3;
    for(int i = 0; i < n; i++)  // 1 5 3 4 7 2
    {
        int x;
        cin >> x;   // 
        if(x % 2 == 0)
        {
            Even++; // Even = Even + 1;   Even += 1;
        }
        else
        {
            Odd++;
        }
    }
    cout << Even << " " << Odd;
    

    return 0;
}