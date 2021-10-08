#include <bits/stdc++.h>  
using namespace std;

    /*
    Және - and - && -  (a>b && a > c): егер && сол жағындағы және оң жағындагы шарттардың екеуі де қанағаттанса ғана орындалады
    // Esep-2: 3 адамнын жасын енгызеды,  экранга шыгару керек ең жасын және ең үлкенін шыгару керек
    */
int main()
{
    int a,b,c;
    cin >> a >> b >> c; // 12 15 9

    if(a > b && a > c)
    {
        cout << "The oldest guy is " << a << endl;
    }    
    else if(b > a && b > c)
    {
        cout << "The oldest gus is " << b << endl;
    }
    else if(c > a && c > b)
    {
        cout << "The oldest gus is " << c << endl;
    }

    if(a < b && a < c)
    {
        cout << "The yongest guy is " << a << endl;
    }    
    else if(b < a && b < c)
    {
        cout << "The yongest gus is " << b << endl;
    }
    else if(c < a && c < b)
    {
        cout << "The yongest gus is " << c << endl;
    }
    

    return 0;
}