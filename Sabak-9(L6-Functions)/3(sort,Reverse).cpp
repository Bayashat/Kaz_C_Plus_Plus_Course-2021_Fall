#include <algorithm>
#include <iostream>
using namespace std;

// String , Array,
int main()
{
    // 1. string
    // formula : sort(s.begin(), s.end())
    string s = "Googl";
    sort(s.begin(), s.end());
    cout << s << endl; // Ggloo

    reverse(s.begin(), s.end());
    cout << s << endl; // oolgG

    // 2. Array
    // sort_formula : sort(Массивтің атауы + басталатын индекс, Массивтің атауы + аяқталатын индекс + 1)
    int a[5] = {3,5,4,1,2};
    sort(a + 1, a + 4);
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " "; // 3 1 4 5 2
    }
    cout << endl;
    
    // reverse(Массивтің атауы + басталатын индекс, Массивтің атауы + аяқталатын индекс + 1)
    reverse(a, a + 5);
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}