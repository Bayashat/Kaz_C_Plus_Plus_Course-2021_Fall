#include <bits/stdc++.h>  
using namespace std;

    // Esep-1: Қолданушы быр сан енгызеды, и онын 5-тен улкен немесе 5-тен кышы, немесе тен екеын көрсету
int main()
{
    int n;
    cin >> n;   // 5
    if(n > 5)
    {
        cout << "5-ten ulken" << endl;
    }
    else if(n < 5)
    {
        cout << "5-ten kishi" << endl;
    }
    else // else if( n == 5 )
    {
        cout << "5-ke ten" << endl;
    }


    return 0;
}