#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int c[a][b];

    for(int i = 0; i < a/2; i++)
    {
        for(int j = 0; j < b*2-1; j++)
        {
            c[i][j] = 1;
        }
        for(int j = b/2; j < b; j++)
        {
            c[i][j] = 0;
        }
    }
    for(int i = a/2; i < a; i++)
    {
        for(int j = 0; j < b*2-1; j++)
        {
            c[i][j] = 2;
        }
        for(int j = b/2; j < b; j++)
        {
            c[i][j] = 3;
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}