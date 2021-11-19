/*       1. find

** функциясы: іздейді, тапса сол элементтің итераторын қайтарады, таппаса аяқталу итераторы end() -ті қайтарады

// find функциясының жауабын итератормен қабылдауымыз керек

**: find(iterator beg, iterator end, value);  

  // beg 

  // end 

  // value іздеп жатқан мән
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}
	// 
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << "Found" << *it << endl;
	}
}

