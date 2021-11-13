#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void VV1(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        v[i] += 10;
    }
}

void VV2(vector<int>* v)
{
    for(int i = 0; i < v->size(); i++)
    {
        v->at(i) += 10;
    }
}

void VV3(vector<int>&v)
{
    for(int i = 0; i < v.size(); i++)
    {
        v[i] += 10;
    }    
}

void Print_Vector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    // 1. мәнін жіберу
    vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    VV1(v1);
    Print_Vector(v1);
    
    // 2. адрестік жіберу әдісі
    vector<int> v2 = {1,2,3,4,5,6,7,8,9};
    VV2(&v2);
    Print_Vector(v2);  
    
    // 3. reference
    vector<int> v3 = {5,6,7,8,9};
    VV3(v3);
    Print_Vector(v3);
    return 0;
}