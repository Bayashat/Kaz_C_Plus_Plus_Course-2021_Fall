/*           6 Stack


**: Stack(First In Last Out,FILO)

            push ->       -> pop 
                      4  - top()
                      3
                      2
                      1

empty()
size()

*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();
    cout << st.top() << " "; // 4
    cout << st.size(); // 4

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }



    return 0;
}