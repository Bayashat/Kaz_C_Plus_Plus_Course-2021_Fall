/*

    Front and Back functions 

*/
#include <iostream>
using namespace std;


int main()
{
    /*
    string s = "Hello";
    cout << s.front() << endl; // H
    cout << s.back() << endl; // o
    */


    // Esep-1 : Given string s, you should change the front of string as 'A' , change the back of string as 'Z'
    // Hello - AellZ
    /*
    string s1;
    cin >> s1;
    s1.front() = 'A';
    s1.back() = 'Z';
    cout << s1;
    */

    // Esep-2 : Сізге "SSSSS" стрингі енгізілгенше шексіз осылай қабылдап, өзгертіп отырыңыз
    string s2;
    while(s2 != "SSSSS")
    {
        cin >> s2;
        if(s2 == "SSSSS")
        {
            break;
        }
        s2.front() = 'A';
        s2.back() = 'Z';
        cout << s2 << endl;
    }


    return 0;
}
