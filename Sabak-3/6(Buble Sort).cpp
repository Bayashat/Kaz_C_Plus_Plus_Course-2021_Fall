/*
        4.1 
        
*/
#include <iostream>
using namespace std;

int main()
{
    // осыны сорттау керек
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    
    // Before print
    cout << "Before " << endl;
    for(int i=0;i<9;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    //Start buble sort: 
    for(int i =0;i<9-1;i++) // сыртқы цикл : элемент саны - 1
    {
        //ішкі цикл :  
        for(int j=0;j<9-i-1;j++)
        {
            // егер біріншісі екіншісінен үлкен болса, ауыстырамыз
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //  After
    cout << " After " << endl;
    for(int i=0;i<9;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}