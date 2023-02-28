#include <iostream>
#include <string>

using namespace std;

class Koira
{
public:
    int ika;
    string nimi, rotu, aani;

    Koira(int uusi_ika, string uusi_nimi, string uusi_rotu, string uusi_aani)
    {
        ika = uusi_ika;
        nimi = uusi_nimi;
        rotu = uusi_rotu;
        aani = uusi_aani;
    }

    void TulostaTiedot()
    {
        cout << "Nimi: " << nimi << endl;
        cout << "Ikä: " << ika << endl;
        cout << "Rotu: " << rotu << endl;
    }

    string Hauku()
    {
        return aani;
    }
};

int main()
{
    Koira rekku(2, "Rekku", "Dalmatialainen", "Hau!!!");
    cout << "Koiran tiedot:" << endl;
    cout << "Koira sanoo: " << rekku.Hauku() << endl;
}