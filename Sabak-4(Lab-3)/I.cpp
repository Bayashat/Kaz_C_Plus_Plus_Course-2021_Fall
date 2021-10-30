#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n; cin >> n;
    int l,r;
    cin >> l >> r;
    l--;
    int a[n];
    for(int i = 0; i < n; i++) // 5 4 5     1 2 3 4 5
    {
        cin >> a[i];
    }

    //  a[5] = {5,4,1,2,3}
     // reverse(a + 0, a + 4 + 1)     
    reverse(a + l, a + r );  // reverse(Массивтің атауы + басталатын индекс, Массивтің атауы + аяқталатын индекс + 1)

    for(int i = 0; i < n; i++)  
    {
        cout << a[i] << " ";
    }

    return 0;
}

