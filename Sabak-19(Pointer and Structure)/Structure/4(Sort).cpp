#include <iostream>
#include <vector>
#include <algorithm>
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

bool f(cars car1, cars car2) // int a, int b
{
    if(car1.Max_Speed != car2.Max_Speed)
    {
        return car1.Max_Speed > car2.Max_Speed;
    }
    else
    {
        if(car1.brand != car2.brand)
        {
            return car1.brand > car2.brand;
        }
        else
        {
            return car1.color > car2.color;
        }
    }
}
int main()
{
    cars car1 = {"BMW", "Red", 500};
    cars car2 = {"Mersedes", "Black", 500};
    cars car3 = {"Audi", "Green", 500};

    // vector<int> v
    vector<cars> c = {car1, car2, car3};

    sort(c.begin(), c.end(), f);

    for(int i = 0; i < c.size(); i++)
    {
        c[i].print();
    }
    return 0;
}