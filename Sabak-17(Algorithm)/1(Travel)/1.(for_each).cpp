/*           5.1.1 for_each

** функциясы : контейнерге травел жасайды

**:   for_each(iterator beg, iterator end, _func);  

  // 

  // beg 

  // end

  // _func  жасанды функция
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 1.қарапайым жасанды фнукция
void print01(int val) 
{
	cout << val << " ";
}

// 2.жасанды функция
struct my_struct 
{
	void operator()(int val) 
	{
		cout << val << " ";
	}
} print02;

			// for_each
void test01() 
{

	vector<int> v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}

	//
	// 1.
	for_each(v.begin(), v.end(), print01); // 0 1 2 3 4 5 6 7 8 9 
	cout << endl;

	// 2.
	for_each(v.begin(), v.end(), print02); // 0 1 2 3 4 5 6 7 8 9
	cout << endl;
}

int main() 
{

	test01();

	return 0;
}
