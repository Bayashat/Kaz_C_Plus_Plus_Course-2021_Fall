#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v_string;
    vector<int> v_integer;

    for(int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v_string.push_back(s);
        v_integer.push_back(x);
    }
    sort(v_string.begin(), v_string.end());
    sort(v_integer.begin(), v_integer.end());

    for(int i = 0; i < v_string.size(); i++) // 1 2 3 4 5      5 
    {
        cout << v_string[i] << " " << v_integer[i] << endl;
    }



    return 0;
}