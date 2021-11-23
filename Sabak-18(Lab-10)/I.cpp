#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> v1;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v1.push_back(x);
	}
	vector<int> v2(v1);
	reverse(v2.begin(), v2.end());
	for(int i = 0; i < v1.size(); i++)
	{
		if(v1[i] != v2[i])
		{
			cout << "Instead of " << v1[i] << " here was " << v2[i] << endl;
		}
		else
		{
			cout << "OK" << endl;
		}
	}
	return 0;
}