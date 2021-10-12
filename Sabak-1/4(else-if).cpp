#include <bits/stdc++.h>  
using namespace std;

int main()
{
    // Есеп-1 : ҰБТ балын енгызеды, тексеру керек 100 ден жогарыма , егер жогары болса , экранга шыгару керек : Құтты болсын, сіз ҚБТУ га түстіңіз!
    //  formula : if(условия - шарты) { орындайтын колдтар}
    //  100 > - KBTU,  80 > IITU,   60 > ATU   60 < OKinish
    
    int UBT_Baly;
    cin >> UBT_Baly;    // 93

    if(UBT_Baly >= 100)
    {
        cout << "Kutti bolsyn, Siz KBTU-ga tustiniz" << endl;
    }
    else if(UBT_Baly >= 80)   // If немесе else if тын условиясы канагаттанбаган кезде , озынын условиясына тексереды
    {
        cout << "IITU" << endl;
    }
    else if(UBT_Baly >= 60)
    {
        cout << "ATU" << endl;
    }
    else    //  if and else if - тың артында іле-шала жазылады,   If орындалмаган жагдайда орындалады, баска жагдайда вобще орындалмайды
    {
        cout << "Okinishke orai" << endl;
    }

    return 0;
}