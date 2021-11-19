/*       5.5.2 fill

** : контейнерге сәйкес элемент салады


** : fill(iterator beg, iterator end, value); 

  // beg 
  // end 
  // value салатын элемент

  */
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

// 1. массивке 
void test01()
{
	int a[6];
	int n = sizeof(a) / sizeof(int);

	fill(a, a + 6, 10);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";	// 10 10 10 10 10 10
    }
}
// 2. контейнерге
void test02()
{

	vector<int> v(10); // 10 орыны бар вектор ашып
	// Толтыру:

	fill(v.begin(), v.end(), 4); // 10ның бәрін 4-пен ауыстыру


	fill(v.begin(), v.begin() + 4, 5); // тек алдыңғы 4-еуін 5-ке

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";	// 5 5 5 5 4 4 4 4 4 4 
	}
	cout << endl;
}

int main()
{
	test01();

	test02();

	return 0;
}
