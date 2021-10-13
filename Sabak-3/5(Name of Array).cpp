/*
        3. Name of Array：

1. can calculate the total length of Array
2. can get the initial address of Array
*/
#include <iostream>
using namespace std;
int main() 
{

	// 
	//1、can calculate the total length of Array

	int a[5] = {1,2,3,4,5}; // 
    cout << sizeof(a) << endl; // 4 byte * 5 = 20 byte

    cout << sizeof(a[0]) << endl; // 4 byte

    cout << sizeof(a) / sizeof(a[0]); // 20 / 4 = 5;4

	cout << "--------------------------------------------------------------------" << endl;

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Жалпы жады :  " << sizeof(arr) << endl;		// 40
	cout << "Әр элементтің алатын жады :  " << sizeof(arr[0]) << endl;	// 4
	cout << "Массивтағы элементтер саны :  " << sizeof(arr) / sizeof(arr[0]) << endl;	// 10

	// 2. can get the initial address of Array

	int x = 10;
    cout << &x << endl;  // 0x61ff0c - 16 лық сан

    int a[5] = {1,2,3,4,5};
    cout << int(&a) << endl; // 0x61fef8
    cout << int(&(a[0])) << endl; // 0x61fef8 - 6422264

    cout << int(&(a[1])) << endl; //  - 6422268

    cout << int(&(a[2])) << endl;   //  - 6422272
	

	cout << "Head address of Array : " << (int)arr << endl;	//  1992416
	cout << "Address of first element : " << (int)&arr[0] << endl;	// 1992416
	cout << "Address of second element :  " << (int)&arr[1] << endl;

	//arr = 100; wrong, Name of Array is Constant variable, can't give value.

	return 0;
}