#include <iostream>
using namespace std;

int main()
{
    int lukumaara = 0;
    float arvosana, kokomaara, keskiarvo;
    cout << "Ohjelma laskee koearvosanojen keskiarvon.\nLukujen syöttämisen lopetus negatiivisella luvulla.";

    do
    {
        cout << "Anna arvosana (4-10)";
        cin >> arvosana;

        if (arvosana >= 4 && arvosana <= 10)
        {
            kokomaara = kokomaara + arvosana;
            lukumaara++;
        }

    } while (arvosana >= 0);

    keskiarvo = kokomaara / lukumaara;
    
    cout << "Ohjelmaan syötetty " << lukumaara << " arvosanaa." << endl;
    cout << "Arvosanojen keskiarvo:" << keskiarvo << endl;
}