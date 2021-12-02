#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 30;
    // int *p = &a;

    // 1. const алдында : бағытын өзгертуге болады, бірақ мәнін өзгерте алмаймыз
    const int *p = &a;
    p = &b;
    *p = 40;

    
    // 2. Const ортасында : бағытын өзгертуге болмайды, бірақ мәнін өзгерте аламыз
    int * const p2 = &a;
    p2 = &b;
    *p2 = 50;

    // 3. Const екы жерде де :  бағытын да ,  мәнін де өзгерте алмаймыз
    const int * const p3 = &a;
    p3 = &b;
    *p3 = 70;


    return 0;
}