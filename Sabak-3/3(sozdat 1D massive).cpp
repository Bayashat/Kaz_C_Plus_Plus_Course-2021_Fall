//         1. 1D массивті құру

//  Массив - бірдей типтегі элементтердің комютер жадындағы бірқатар жадты алып тұратын бөлігі,

#include <iostream>
using namespace std;

int main()
{
    /*
        3 түрлі әдісі бар: 

    1. data type  Name[ ұзындығы ]; 
    2. data type  Name[ ұзындығы ] = { 1, 2 ...};
    3. data type  Name[ ] = { 1, 2,  ...};
    */

// 1. data type  Name[ ұзындығы ]; 

   int arr[5];
   // Массив элементтеріне мән беру
   // индекс 0-ден басталады
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
   arr[3] = 40;
   arr[4] = 50;

    // Access
    cout << arr[0] << endl;


// 2. data type  Name[ ұзындығы ] = { 1, 2 ...};
    int arr2[5] = {10,20,30,40,50};
    
    // Егер толық толтырылмаса, 0-мен толықтырады

    // using loop to print elements of Array
    for(int i=0;i<5;i++)
    {
        cout << arr2[i] << endl;
    }

// 3.  3. data type  Name[ ] = { 1, 2,  ...};
    int arr3[] = {90,80,70,60,50,40,30,20,10};

    for(int i=0;i<9;i++)
    {
        cout << arr3[i] << endl;
    }
    return 0;
}

/*
    C++ 11 new feautures :
 1. can don't write =  : int days[] {1,15};
 2. жақшаны бос қалдырсақ, бәрі 0-мен толықтырылады: float m[100]{}
*/
