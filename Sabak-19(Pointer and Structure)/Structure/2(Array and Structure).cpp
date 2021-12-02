#include <iostream>
using namespace std;

struct cars
{
    string brand;
    string color;
    int Max_Speed;

    void print()
    {
        cout << brand << " " << color << " " << Max_Speed << endl;
    }
};

int main()
{
    cars carArr[3] = {
        {"BMW", "Red", 220},
        {"Mersedes", "Black", 200},
        {"Volvo", "White", 150}
    };

    carArr[1].Max_Speed = 300;
    carArr[0].color = "Yellow";
    
    for(int i = 0; i < 3; i++)
    {
        cout << carArr[i].brand << " " << carArr[i].color << " " << carArr[i].Max_Speed << endl;
    }

    return 0;
}