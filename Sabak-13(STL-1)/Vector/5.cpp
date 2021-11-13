/*
            5. экранга шыгару

： vector
： for_each
： vector<int>::iterator

*/
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // 

void MyPrint(int val)
{
    cout << val << endl;
}

void test01()
{
    // 
    vector<int> v;

    // 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40); 

    // 
    vector<int>::iterator itBegin = v.begin(); //
    vector<int>::iterator itEnd = v.end();     // 

// 1. массив сияқты 
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; //v.at(i) 
    }

// 2. итератор арқылы:
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;

// 3. функциямен 

    for_each(v.begin(), v.end(), MyPrint);

// 4.  auto
    for(auto x : v)
    {
        cout << x << endl;
    }

// 5. кері итератормен : 

    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
}


int main()
{
    test01();

    return 0;
}