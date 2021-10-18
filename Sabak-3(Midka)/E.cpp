#include <iostream>
using namespace std;

int main()
{
    string s; // 1234567890
    cin >> s;
    int nums[10];
    for(int i = 0; i < 10; i++)
    {
        nums[i] = 0;
    }
    for(int i = 0; i < s.size();i++)
    {
        int x = int(s[i] - 48); // '1' -> 1
        nums[x]++;
    }
    for(int i = 0; i < 10; i++)
    {
        if(nums[i] != 0)
        {
            cout << i << ": " << nums[i] << endl;
        }
    }
    return 0;
}