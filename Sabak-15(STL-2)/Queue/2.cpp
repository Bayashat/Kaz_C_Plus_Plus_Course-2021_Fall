/*     1.queue




 create functions:

- queue<T> que;             //
- queue(const queue &que);  //

:

- queue& operator=(const queue &que);   //

:

- push(elem);   //
- pop();        //
- back();       //
- front();      //

:

- empty();      //
- size();
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    cout << qu.size() << endl; // 5 
    cout << qu.back() << endl; // 5
    
    while(!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;

    
    // cout << qu.size();

    // queue<int> qu2 = qu;

    return 0;
}
