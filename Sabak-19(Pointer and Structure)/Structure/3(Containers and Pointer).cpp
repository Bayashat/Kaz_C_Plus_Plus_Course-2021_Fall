#include <iostream>
#include <vector>
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
    cars car1 = {"BMW", "Red", 220};
    cars car2 = {"Mersedes", "Black", 350};
    cars car3 = {"Audi", "Green", 500};

    // vector<int> v
    vector<cars> c = {car1, car2};

    c.push_back(car3);
    c.pop_back();

    for(int i = 0; i < c.size(); i++)
    {
        c[i].print();
    }




    return 0;
}