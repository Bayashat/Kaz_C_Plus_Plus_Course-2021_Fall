/*       3. generate 
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

// есеп : векторынызды толықтырыңыз 1~9

int x = 0; // 0
int f()
{
    x++; 
    return x*x*x; 
}


int main()
{

    vector<int> v(9);

    generate(v.begin(),v.end(),f); // 0 1

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}