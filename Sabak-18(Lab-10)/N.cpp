#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Palindrome(vector<int> v)
{
	for(int i = 0; i < (v.size() / 2); i++)
	{
		if(v[i] != v[v.size() - i -1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end()); // 1 1 2 3 3
	do
	{
		if(Palindrome(v))
		{
			
			for(int i = 0; i < v.size(); i++)
			{
				cout << v[i] << " ";
			}
			return 0;
		}
	} while(next_permutation(v.begin(), v.end()));
	cout << "Impossible";
	

	return 0;
}