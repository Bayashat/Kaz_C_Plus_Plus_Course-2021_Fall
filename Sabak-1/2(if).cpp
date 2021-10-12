#include <bits/stdc++.h>  
using namespace std;

int main()
{
    // Есеп-1 : ҰБТ балын енгызеды, тексеру керек 100 ден жогарыма , егер жогары болса , экранга шыгару керек : Құтты болсын, сіз ҚБТУ га түстіңіз!
    //  formula : if(условия - шарты) { орындайтын колдтар}
    int UBT_Baly;
    cin >> UBT_Baly;    // 93

    if(UBT_Baly > 100)
    {
        cout << "Kutti bolsyn, Siz KBTU-ga tustiniz" << endl;
    }

    if(UBT_Baly <= 100)
    {
        cout << "Okinishke orai, siz KBTU-ga tuse almadiniz" << endl;
    }

    return 0;
}