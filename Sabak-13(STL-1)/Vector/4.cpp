/*      4. vector сыйымдылығы және үлкендігі


* векторда, сыйымдылығын көбірек қояды，сыйымдылығы >= өлшемі


* empty();                         /

* capacity();                      // сыйымдылығы

* size();                          // өлшемі : элемент саны

* resize(int num);             // контайнер ұзындығын num деген ұзындыққа қояды, егер контацнер ұзындығы асып кетсе, 0-мен орын толтырады

  ​					 // егер қысқарып қалса, асқан ұзындық кесіп тасталынады

* resize(int num, elem);  //ұзындығын қайтадан, асса   elem арқылы толықтырады

  ​				  
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
    vector<int> v1;       

    for(int i=1;i<=10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 1.боспа? 
    //  capacity >= size
    if(v1.empty())   // 
        cout << "Is empty " << endl;
    else
        cout << "Isn't empty " << endl;
        cout << "v1's capacity is " << v1.capacity() << endl; // 13   
        cout << "v1's size is " << v1.size() << endl; // 10

    // 2. (resize)：
    v1.resize(15);
    printVector(v1);     // егер ұзын болып кетсе : 1,2,3,4,5,6,7,8,9,10,0,0,0,0,0 

    // 3. ：
    v1.resize(15,100);    //
    printVector(v1); //  1,2,3,4,5,6,7,8,9,10,100,100,100,100,100

    v1.resize(5);    
    printVector(v1);   // : 1,2,3,4,5
}
int main()
{
    test01();
}

