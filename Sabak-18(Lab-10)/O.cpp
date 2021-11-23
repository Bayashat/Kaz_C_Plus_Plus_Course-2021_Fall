#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void convert(int x)
{
	string s = "";
	if(x == 0)
	{
		s = "0";
	}
	while(x != 0)
	{
		int q = x % 2; // 1
		x /= 2;
		s = char(q + 48) + s;
	}
	cout << s << endl;
}
int main()
{
	vector<int> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	for_each(v.begin(), v.end(), convert);

	return 0;
}