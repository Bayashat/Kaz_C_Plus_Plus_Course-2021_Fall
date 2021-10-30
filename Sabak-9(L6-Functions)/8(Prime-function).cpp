#include <iostream>
using namespace std;

bool check_Prime(int x) // 5
{
    for(int i = 2 ; i < x; i++) // i : 2~4
    {
        if(x%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    cout << (check_Prime(n) == true ? "YES" : "NO");
    /*
    if(check_Prime(n) == true)
    {
        cout << "It's prime";
    }
    else
    {
        cout << "It's not prime";
    }
    */

    return 0;
}