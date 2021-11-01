#include <iostream>
using namespace std;

bool Lucky_Ticket(int x)
{
    int origin = x;
    int sum = 0;
    while(x != 0)
    {
        sum += x%10;
        x /= 10;
    }
    int k = origin%10;
    if(sum % k == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int x;
    cin >> x;
    if(Lucky_Ticket(x))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}