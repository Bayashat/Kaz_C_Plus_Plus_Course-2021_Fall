#include <bits/stdc++.h>
using namespace std;

int AA[10000], BB[10000];

void Read_Array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void Print_Array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }   
}
int Para(int *a, int *b, int n)
{
    int cnt = 0;
    for(int i = 0; i < n; i++) // 4 3 1 2 4 1
    {
        int x = a[i];
        AA[x]++;

        int y = b[i];
        BB[y]++;
    }    
    for(int i = 0; i < 10000; i++)
    {
        if(AA[i]!=0 && BB[i] != 0)
        {
            cnt += min(AA[i], BB[i]);
        }
    }    
    return cnt;
}
int main()
{
    for(int i = 0; i < 10000; i++)
    {
        AA[i] = 0;
        BB[i] = 0;
    }  

    int n; cin >> n;
    int a[n], b[n];
    Read_Array(a,n);
    Read_Array(b,n);
    cout << Para(a,b,n);



    return 0;
}