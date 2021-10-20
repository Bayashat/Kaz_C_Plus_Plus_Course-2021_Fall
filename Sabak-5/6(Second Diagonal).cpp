#include <bits/stdc++.h>
using namespace std;
/*
2-nd diagonal

1 2 3
4 5 6          3     5      7  
7 8 9        [0][2] [1][1] [2][0]  :  + = 2,    i++,j--
*/
int main()
{
    int a[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int i = 0, j = 2;
    while(j != -1)
    {
        cout << a[i][j] << " ";
        i++; // 0 1 2
        j--; // 2 1 0
    }


    return 0;
}
