/*
        2. Print elements of 1D Array

*/
#include <iostream>
using namespace std;

int main()
{
    // терминалдан мән қабылдау
    int N = 5;
    int nums[N];
    for(int i = 0; i < N; i++)  // i < (sizeof(nums) / sizeof(int)) : ұзындығын аламыз
    {
        cin >> nums[i];
    }

    for(int i = 0; i < N; i++)
    {
        cout << nums[i] << endl;
    }
    
    return 0;
}