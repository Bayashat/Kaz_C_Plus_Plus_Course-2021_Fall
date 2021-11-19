/*          1. Unique()
дара, қайталанбайтын 

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction(int i, int j)
{
    return (i == j);
}

int main()
{
    vector<int> v = {10, 20, 20, 20, 30, 30, 20, 20, 10};

    // 1. 
    unique(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 10 20 30 20 10 30 20 20 10
    }
    cout << endl;
    
    // 2. : 
    vector<int>::iterator it;
    it = unique(v.begin(), v.end()); // 10 20 30 20 10 ?  ?  ?  ?

    // 3. 
    for (vector<int>::iterator it2 = v.begin(); it2 != it; it2++)
    {
        cout << *it2 << " "; // 10 20 30 20 10
    }
    cout << endl;

    // 4. 
    v.resize(distance(v.begin(), it)); // 10 20 30 20 10

    cout << distance(v.begin(), it) << endl; //----5

    for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *it2 << " "; // 10 20 30 20 10
    }
    */
    return 0;
}
