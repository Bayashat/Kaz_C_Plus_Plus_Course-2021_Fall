/*
    Practice problem for WHILE loop

* Ойын шарты : 1 -100 дейінгі сандарб табамыз
*/

#include <iostream>
#include <stdlib.h>     ///random сан алу үшін керек библиотека
#include <ctime>
using namespace std;

int main()
{
    // кездейсоқ санды шығаратын код， дәл қазіргі уақыттағы ноуттың уақытымен істейді, чтобы әртүрлі болу үшін
    srand((unsigned int) time(NULL));

    // 1.Generate Random number
    int num = rand() % 100 + 1;  //rand() % 100  it means 0~99   we need 1~100  so need +1
   
    // 2.қолданушы табады
    int val = 0;      // қолданушының енгізетін саны
    while(val!=num)
    {
        cin >> val;
        
        //3.Determine the number: 

        //қате тапса : не кіші, не үлкен болып қалды, қайттан циклға
        if(val>num)
        {
            cout << "it's bigger" << endl;
        }
        else if(val<num)
        {
            cout << "it's smaller" << endl;
        }
        else 
        {
            cout << "YES" << endl;
            // дұрыс тапты, аяқтаймыз
            break;
        }
    
    }
    return 0;
}