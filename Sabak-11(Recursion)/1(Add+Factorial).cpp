#include <bits/stdc++.h>
using namespace std;

// Recursion - функцияның өз-өзінде қайталануы, бір функцияның ішінде басқа функцияның қайталануы
// шығатын есік болу керек
// Тікелей немесе Тікелей
// Тікелей : өз-өзін

// Esep : 1~5 
int Kosyndy(int x)
{
    long long sum = 0;
    for(int i = 0; i <= 5; i++)
    {
        sum += i; // 0 + 1 + 2 + 3 + 4 +5 = 15
    }
    return sum;
}

// Recursion: 
// 1~5 : 1 + 2 + 3 + 4 + 5 = 
int Kosyndy2(int x, int sum) // 
{
    if(x == 6)
    {
        return sum;
    }
    
    sum += x; // 0 + 1 +
    return Kosyndy2(x+1, sum); // 2 1
}

int Kosyndy3(int x)
{
    if(x == 6)
    {
        return 0;
    }
    return x + Kosyndy3(x+1);  //  1 + ( 2 + (3 + ( 4 + (5 + 0)))) = 15
}

int Factorial(int x) // 3 : 3*2*1 = 6
{
    if(x == 1)
    {
        return 1;
    }
    return x * Factorial(x-1); // 3 * 2 * 1
}

int Factorial_f(int x) // 4!
{
    int f = 1;
    for(int i = 1; i <= x; i++)
    {
        f *= i; //
    }
    return f;
}

int main()
{
    cout << Factorial_f(4);

    
    return 0;
}