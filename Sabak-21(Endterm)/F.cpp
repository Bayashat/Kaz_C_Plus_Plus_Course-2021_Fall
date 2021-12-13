#include <bits/stdc++.h>
using namespace std;

int main()
{
    char top;
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] == '(') || (s[i] == '[') || (s[i] = '{'))
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                top = st.top();
                if(s[i] == ')')
                {
                    if(top == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        cout << "NO";
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}
