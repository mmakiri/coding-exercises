#include <iostream>
using namespace std;

class Laskin
{
public:
    int Summa(int eka, int toka);
};

int Laskin::Summa(int eka, int toka)
{
    int summa = eka + toka;
    return summa;
}

class Tulostaja
{
public:
    void Tulosta();
};

void Tulostaja::Tulosta()
{
    Laskin laskin;
    int eka, toka;

    cout << "Syötä ensimmäinen kokonaisluku:";
    cin >> eka;

    cout << "Syötä toinen kokonaisluku:";
    cin >> toka;

    int summa = laskin.Summa(eka, toka);

    cout << "Lukujen summa: " << summa << endl;
}

int main()
{
    Tulostaja olio;
    olio.Tulosta();
}
