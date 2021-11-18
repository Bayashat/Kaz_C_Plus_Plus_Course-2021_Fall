#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) // 0111
    {
        if(st.empty()) // 0 
        {
            st.push(s[i]);
        }
        else
        {
            if(st.top()=='1' && s[i] == '1')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    string answer = "";
    while(!st.empty())
    {
        answer += st.top();
        st.pop();
    }
    reverse(answer.begin(), answer.end());
    cout << answer;

    return 0;
}