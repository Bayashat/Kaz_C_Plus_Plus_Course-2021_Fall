#include <iostream>
using namespace std;
void add(int n)
{
    int sum = 0; // 
    while (n != 0)
    {
        int a = n % 10;
        sum += a;
        n /= 10;
    }
    cout << sum;
}

int Add2(string s)
{
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        sum += int(s[i] - 48);
    }
    return sum;
}
int main()
{
    /*
    int s; // 
    cin >> s;
    add(s);
    */
   string s;
   cin >> s;
   cout << Add2(s);
}