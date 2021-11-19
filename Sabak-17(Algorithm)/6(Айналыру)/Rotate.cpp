/*          1. Rotate()

    ：rotate(start, middle, end);
for container :  rotate(v.begin(), v.begin()+x, v.end());  
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
// 1. массивке :
void test01()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);

    rotate(a, a + 2, a + n); // алдыңғы 2 санын артына айналдырып

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; // 3 4 5 6 1 2
    }
    cout << endl;
}
*/
// 2. vector ға
void test02()
{
    vector<int> v;
    for (int i = 0; i < 10; i++) // 0 1 2 3 4 5 6 7 8 9
    {
        v.push_back(i);
    }
    rotate(v.begin(), v.begin() + 3, v.end()); // до : 1-10, после :  3 4 5 6 7 8 9 0 1 2

    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    //test01();
    test02();
}