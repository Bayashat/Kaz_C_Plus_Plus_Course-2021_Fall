#include <iostream>
#include <vector>
using namespace std;

void Print_Vector(vector<int> v)
{
    for(int i = 0; i <v.size(); i++) // 1 2 3 4 5 
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    
    // 1. 
    vector<int> v1; 
    
    int n; cin >> n; // 5
    for(int i = 0; i < n; i++) // 1 2 3 4 5 
    {
        int x; cin >> x; // 
        v1.push_back(x);
    }
    Print_Vector(v1);
    
     
    // 2. = 
    vector<int> v2 = {6,7,8,9,10 };
    Print_Vector(v2);
    
    // 3. 
    vector<int> v3(v2.begin(), v2.end());
    Print_Vector(v3);

    // 4.
    vector<int> v4(2,7); // 5 5 5 5 5 5 5 5
    Print_Vector(v4);

    // 5.
    vector<int> v5(v1);
    Print_Vector(v5);
    return 0;
}