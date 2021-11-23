#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int size = ( n*(n+1) ) / 2;

	vector<int> v(size);

	int sum = 0; // 3
	for(int i = 1; i <= n; i++)
	{
		fill(v.begin() + sum, v.begin() + sum + i, i); // 1 2 2 3 3 3 4 4 4 4  
		sum += i; 
	}
	for(auto x: v)
	{
		cout << x << " ";
	}




	return 0;
}