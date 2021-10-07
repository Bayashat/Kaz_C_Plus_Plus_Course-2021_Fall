//      4.char

//  1 byte
//  Ascci

#include <iostream>
using namespace std;

int main()
{
    // 1. Formula
    // char Атауы = 'бастапқы мәні'
    
    char ch = 'a'; 
    cout << int(ch) << endl; // 97

    // 2.sizeof
    cout << "charch's size is " << sizeof(ch) <<endl; // 1

    // 3. қателіктер
    char ch2 = 'b';  //
    char ch3 = 'f'; //
 
    // 4.ASCII кодын карау
    // a --- 97
    // A --- 65

        /*
    // char типіндегі санды Int типінеи айналдыру үшін int(A - 48) 
    char e = '8';
    int w = int(e - 48);
    cout << w << endl;

    char c = '2';
    int d = int(c - 48);
    cout << d;
    */

    // Int -> char  char(A + 48);
    int a = 1;
    char h = char(a + 48);
    cout << h; 
    
    return 0;
}