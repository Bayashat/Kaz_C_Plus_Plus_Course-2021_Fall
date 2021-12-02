#include <iostream>
#include <vector>
using namespace std;

// 1. мәнін жіберу : көшірмесін жібереді, оригиналына әсер етпейді
void Vec_1(vector<int> v)
{
    v[1] = 20;
    cout << v[1] << endl;
}

//  2. Адрестік жіберу әдісі : Оригиналына әсер етеді
void vec_2(vector<int> * v)
{
    v->at(1) = 20;
    cout << v->at(1) << endl;
}

// 3. Reference : Бул да оригиналына әсер етеді, бірақ қолданысы жеңілдеу
void vec_3(vector<int> &v)
{
    v[1] = 20;
    cout << v[1] << endl;    
}
int main()
{
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    
    // 1. мәнін жіберу : көшірмесін жібереді, оригиналына әсер етпейді
    Vec_1(v);
    cout << v[1];
    
    // 2. Адрестік жіберу әдісі : Оригиналына әсер етеді
    vec_2(&v);
    cout << v[1];
    
    // 3. Reference : Бул да оригиналына әсер етеді, бірақ қолданысы жеңілдеу
    vec_3(v);
    cout << v[1];
    return 0;
}