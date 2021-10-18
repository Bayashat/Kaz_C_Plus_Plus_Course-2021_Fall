#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) // 1 2 3 4 5
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i]*a[i] << " "; // 1 4 9 16 25
    }


    return 0;
}
