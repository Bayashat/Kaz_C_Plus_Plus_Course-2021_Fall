#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s1,s2;
	int x,y;
	map< pair< pair<string,int> , pair<string, int> > , int> ma;
	for(int i = 0; i < n; i++)
	{
		cin >> s1 >> x >> s2 >> y;
		ma[make_pair(make_pair(s1,x), make_pair(s2,y))] = x + y;
	}
	for(map< pair< pair<string,int> , pair<string, int> > , int>::iterator it = ma.begin(); it != ma.end(); it++)
	{
		cout << (*it).first.first.first << " and " << (*it).first.second.first << " " << (*it).second << endl;
	}
	return 0;
}