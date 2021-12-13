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
        if((s[i] == '(') || (s[i] == '[') || (s[i] == '{'))
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                top = st.top(); // [
                if(s[i] == ')')
                {
                    if(top == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        cout << "no";
                        return 0;
                    }
                }
                else if(s[i] == '}')
                {
                    if(top == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        cout << "no";
                        return 0;
                    }
                }
                else
                {
                    if(top == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        cout << "no";
                        return 0;
                    }
                }
            }
        }
    }

    if(st.empty())
    {
        cout << "yes" << endl;
    }
    
    return 0;
}
