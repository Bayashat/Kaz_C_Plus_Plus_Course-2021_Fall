/*    		1 sort

** : sort(iterator beg, iterator end, _Pred);  

  //

  //  beg   

  //  end   

  // _Pred Comparator
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>  // 
using namespace std;

bool f(int a, int b)	// (Компаратор) bool 
{
	return a < b;
}

bool f2(int a,int b)
{
	return a > b;
}

void test01() 
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	// 1. өспелі:

	// 1.1 sort по умолчанию өспелі
	sort(v.begin(), v.end());

	// 1.2 ішкі функция:
	sort(v.begin(), v.end(), less<int>()); // comparator

	// 1.3 компаратормен
	sort(v.begin(), v.end(), f);	// 10 20 30 40 50
}

int main() 
{
    test01();
	return 0;
}