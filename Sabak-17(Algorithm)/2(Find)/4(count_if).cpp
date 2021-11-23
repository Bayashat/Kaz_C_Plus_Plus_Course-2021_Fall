/*       	6 count_if

** : count_if(iterator beg, iterator end, _Pred);  

  //

  // beg 

  // end 

  // _Pred   bool типіндегі көмекші функция
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool f(int x) // predicat
{
	if(x % 2 == 0)	return true;	// or: return (x % 2);
	return false;
}

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), f);

	cout << "The number of even  is: " << num << endl; // 4
}


int main()
{

	test01();
	return 0;
}