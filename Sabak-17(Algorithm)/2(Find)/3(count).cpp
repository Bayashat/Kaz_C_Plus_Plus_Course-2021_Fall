/*       5.2.5 count

**  контейнердегі элемент санын есептеу

**:  count(iterator beg, iterator end, value);  

  // beg 

  // end 

  // value санын есептейтін элемент
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


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

	int num = count(v.begin(), v.end(), 4);

	cout << "has: " << num <<" four's"<< endl; // 3
}


int main() 
{
	test01();
	return 0;
}
