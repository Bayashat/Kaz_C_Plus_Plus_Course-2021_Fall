/*      5. vector ға салу және жою 

**

* 



 1. push_back(ele);                                         //
 2. pop_back();                                                //
 3. insert(const_iterator pos, ele);        // итератор көрсеткен позицияның алдына элемент салу
 4. insert(const_iterator pos, int count,ele);// итератор көрсеткен позицияның алдына count штук элемент салу
 5. erase(const_iterator pos);                     // итератор көрсеткен элементті жою
 6. erase(const_iterator start, const_iterator end);// [start,end] аралығындағы элементтерді жою
 7. clear();                                                        //
*/
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int> :: iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    vector<int> v;       
    // 1.：
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    printVector(v);     // 10,20,30,40

    // 2.：
    v.pop_back();
    printVector(v);     // 10,20,30

    // 3.1 позиция алдына:
    v.insert(v.begin(),100);  
    printVector(v);     // 100,10,20,30

    v.insert(v.begin()+2, 512); // итератор арқылы
    printVector(v);     // 100 10 512 20 30  

    v.insert(v.end(), 450); // :
    printVector(v); // 100 10 512 20 30 450  

    // 3.2 :
    v.insert(v.begin(),2,1000);
    printVector(v);     // 1000, 1000, 100, 10, 20, 30

    // 4.1.：
    v.erase(v.begin());
    printVector(v);     // 1000, 100, 10, 20, 30

    // 4.2.：
    v.erase(v.begin(),v.end()); // 
    printVector(v);     // 

    // 5.：
    v.clear();
    
}

int main()
{
    test01();
}
/*
总结：
* 尾插  --- push_back
* 尾删  --- pop_back
* 插入  --- insert    (位置迭代器)
* 删除  --- erase  （位置迭代器）
* 清空  ---  clear  
*/