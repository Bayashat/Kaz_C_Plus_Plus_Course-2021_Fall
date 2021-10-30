#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x % 2 == 1)
    {
        cout << "Super";
    }
    else if((x % 2 == 0) && (x >= 2 && x <= 5))
    {
        cout << "Not Super";
    }
    else if((x % 2 == 0) && (x >= 6 && x <= 20))
    {
        cout << "Super";
    }
    else
    {
        cout << "Not Super";
    }


    

    return 0;
}