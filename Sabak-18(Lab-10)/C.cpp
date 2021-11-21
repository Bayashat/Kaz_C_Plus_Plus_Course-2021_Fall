#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

bool Square(int x) // 16
{
    int ans = sqrt(x); // 
    if(ans * ans == x)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
        if(st.size() >= 2)
        {
            int a = int(st.top()) - 48; // 5
            char aa = st.top(); // 0
            st.pop();

            int b = int(st.top()) - 48; // 2
            char bb = st.top(); // 1
            st.pop();

            int x = (b*10) + a; // 25

            if(Square(x) && x >= 10)
            {
                continue;
            }
            else
            {
                st.push(bb);
                st.push(aa);
            }
        }
    }
    if(st.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        while(!st.empty())
        {
            cout << st.top();
            st.pop();
        }
    }

    return 0;
}