#include <iostream>
using namespace std;

int main()
{
    /*
    // 1. formula : data type Name[row][column] = {{1,2,3}, {4,5,6}, {7,8,9}}
    int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    // 2. data type Name[row][column] = {1,2,3,4,5,6};
    int b[2][3] = {1,2,3,4,5,6};
    
    // 3. 
    int c[][2] = {1,2,3,4,5,6};
    */
    // 4.
    int d[4][3] = {{10,55,47}, {49,38,12},{66,78,52},{51,74,10}};
    /*
        0    1    2
    0  [10] [55] [47]
    1  [49] [38] [12]
    2  [66] [78] [52]
    3  [51] [74] [10]
    */

   for(int i = 0; i < 4; i++)
   {
       for(int j = 0; j < 3; j++)
       {
           cout << d[i][j] << " ";
       }
       cout << endl;
   }

    return 0;
}