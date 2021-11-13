/*      3. vector мән беру


 1. assign(beg, end);       // [beg, end)аралығындағы элементтерді береді
 2. assign(n, elem);        // n элементты береды
*/

#include <iostream>
#include <vector>
using namespace std;

// экранга шыгару функциясы 
void printVector(vector<int>&v)
{
    for(vector<int> :: iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    vector<int> v1;       
    int n,x;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    // 1,
    vector<int>v2;
    v2 = v1;
    printVector(v2);

    // 2 
    vector<int>v3;
    v3.assign(v1.begin(),v1.end());
    printVector(v3);

    // 3 
    vector<int>v4;
    v4.assign(10,100);  // 10 штук 100；
    printVector(v4);

}
int main()
{
    test01();
}

