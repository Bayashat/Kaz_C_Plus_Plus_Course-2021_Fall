#include <iostream>
using namespace std;

/*  1. cin -арқылы стрипг қабылдаған кезде ол пробелді көрсе тоқтап қалады
 getline(cin, Variable_name);
 Бұл cin -нің братаны, пробел көрсе де тоқтамайды
*/
int main()
{
    // hello my friend from America
    string s;
    // cin >> s; // hello
    
    getline(cin, s); // hello my friend from America

    cout << s;

}