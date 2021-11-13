    //      6. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main() 
{

    vector<int> v = {1, 3, 2, 5, 4};

    // 1. өспелі     
    sort(v.begin(),v.end());    
    printVector(v);  // 1 2 3 4 5

    // 2.1 кері
    reverse(v.begin(),v.end()); 
    printVector(v);  // 5 4 3 2 1

    // 2.2 кері:
    sort(v.rbegin(), v.rend());
    printVector(v); // 5 4 3 2 1
    
    // 2.3 кері: кері iterator арқылы
    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }

	return 0;
}