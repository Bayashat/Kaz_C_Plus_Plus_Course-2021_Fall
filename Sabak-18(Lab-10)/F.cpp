#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

float Grade(int a1, int a2, int f)
{
    if( (a1 + a2 < 30) || (f < 20))
        return 0.0;
        
    else if( a1 + a2 + f < 55)
        return 1.0;

    else if( a1 + a2 + f < 60)
        return 1.0 + double(1.0 / 3.0);

    else if( a1 + a2 + f < 65)
        return 1.0 + double(2.0 / 3.0);

    else if( a1 + a2 + f < 70)
        return 2.0;

    else if( a1 + a2 + f < 75)
        return 2.0 + double(1.0 / 3.0);

    else if( a1 + a2 + f < 80)
        return 2.0 + double(2.0 / 3.0);

    else if( a1 + a2 + f < 85)
        return 3.0;

    else if( a1 + a2 + f < 90)
        return 3.0 + double(1.0 / 3.0);

    else if( a1 + a2 + f < 95)
        return 3.0 + double(2.0 / 3.0);

    else if( a1 + a2 + f < 100)
        return 4.0;
}
int main()
{
    int n; cin >> n;
    double total_point = 0;
    long long total_credit = 0;
    for(int i = 0; i < n; i++)
    {
        int a1, a2, f, c;
        cin >> a1 >> a2 >> f >> c;
        total_point += Grade(a1,a2,f) * c;
        total_credit += c;
    }
    cout << total_point / total_credit * 1.0;
    return 0;
}