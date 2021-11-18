

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    queue<string> qu;
    int n;
    cin >> n;
    string ss[n];

    for(int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x;
        if(x == 1)
        {
            cin >> s;
            qu.push(s);
        }
        else{
            qu.pop();
        }

        if(qu.empty())
        {
            ss[i] = "queue is empty";
        }
        else
        {
            ss[i] = qu.front();
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << ss[i] << endl;
    }

    return 0;
}