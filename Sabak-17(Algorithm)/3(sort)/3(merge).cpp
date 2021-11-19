/*              3. Merge

 : merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);

//
// Warning: екі контейнер де сортталған болу керек
// beg1   // end1 
// beg2  // end2 
// dest бірігетін итератордың басталатын итераторы

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void My_Print(int value)
{
    cout << value << " ";
}
void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 1);
    }
    // біріктіретін:
    vector<int> vtarget;
    // алдымен орын ашу керек
    vtarget.resize(v1.size() + v2.size()); 

    // біріктіру
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

    for_each(vtarget.begin(), vtarget.end(), My_Print); // 0 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10
    cout << endl;
}
int main()
{
    test01();

    return 0;
}
//  