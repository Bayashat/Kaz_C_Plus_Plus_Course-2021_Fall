#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    bool is_prime;
    for(int i = 2; i <= n; i++) //  2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    {
        is_prime = true;
        for(int j = 2; j < i; j++) // ішкі цикл әр санмен жеке жұмыс жасайды, оны анықтайды : 7 : 2~6
        {
            if(i % j == 0)
            {
                is_prime = false;
            }
        }
        if(is_prime == true)
        {
            cout << i << " is prime" << endl;
        }
    }
    return 0;
}