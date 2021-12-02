/*          Struture

** formula ：struct Name { member list }；

3 ways to create Structure object: 

* struct Name_struct Name_variable
* struct Name_struct Name_variable = { member1, member2 }
* under definite Structure
*/
#include <iostream>
#include <string>
using namespace std;

//		1.create structure for student(contains Name, Age, Score)
//	struct Name { member list }

//
struct student
{
	//member list
	string name;  //
	int age;      //
	int score;    //

	/* (constructor): 
	student(string name, int age, int score)
	{
		this->name = name;
		this->age = age;
		this->score = score;
	}
	*/

	// member function:
	void print()
	{
		cout << this->name << " " << this->age << " " << this->score << endl;
	}
}stu3; //3-way 


int main() 
{
//			2.object:

		// 2.1 1-way:
	student stu1; //

	// 
	stu1.name = "Jack";
	stu1.age = 18;
	stu1.score = 100;
	
	stu1.print();

	// 2.2 2-way:
	struct student stu2 = { "Jam", 19, 80 };

	stu2.print();

	// 2.3 
	stu3.name = "KKKK";
	stu3.age = 18;
	stu3.score = 60;
	
	stu3.print();

	// 2.4 constructor

	student stu4("Jack", 20, 150);
	stu4.print();
	return 0;
}