#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x) // 17
{
	if(x < 2)	
		return false;
	else
	{
		for(int i = 2; i < x; i++) // 2 ~ 16
		{
			if(x % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}
int main()
{
	vector<int> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if(x < 0)
		{
			x = x * -1;
		}
		v.push_back(x);
	}
	int cnt = count_if(v.begin(), v.end(), f);
	cout << cnt;
	return 0;
}