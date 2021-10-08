#include <bits/stdc++.h>    // iostream cmath algorithm string
#include <cmath>    // sqrt, abs, sin, max, min, pow
using namespace std;


int main()
{
    //  1. sqrt - Түбірден шығаратын функция
    int a = 9;
    cout << sqrt(a) << " ";    // 3 * 3 = 9

    double d = sqrt(10);   
    //  cout << d;  // 3.16228
    printf("%.2f", d);  // 3.16      Printf - рационал сандардың дәлдігін шыгаратын функция
    cout << " ";
    
    // 2. abs - Обсолютті мәні - модуль
    double b = -7.8; 
    cout << abs(b) << " ";  // 7.8

    cout << abs(15.2) << " ";   //  15.2  
    cout << abs(-7 + 5) << " ";    // 2

    // 3. sin()  PI = 3.1415....   = M_PI
    cout << sin(M_PI / 2) << " "; // 1
    cout << sin(3*M_PI / 2) << " "; // -1
    double q = sin(M_PI / 3) ;   // 0.866025
    printf("%.11f", q);

    // 4. pow() - дәреже  formula : pow(a,b) = a^B; 
    cout << pow(2,3) << " ";    // 8
    cout << pow(4,-1) << " ";   // 1/4 = 0.25 

    // 5. max(2,3) = 3;  улкенын шыгарады. барлық сандардын типіне журе береды
    cout << max(-1,5) << " ";  
    cout << max(1.2, 1.4) << " ";

    // 6. min(2,3) = 2  кышысын шыгарады. барлық сандардын типіне журе береды
    cout << min(15, 17) << " "; // 15


    return 0;
}