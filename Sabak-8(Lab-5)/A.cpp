
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int Capital = 0;
    int Small = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            Capital++;
        }
        else
        {
            Small++;
        }
    }
    cout << Small << " " << Capital << endl;


    return 0;
}