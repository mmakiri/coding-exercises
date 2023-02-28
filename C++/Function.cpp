#include <iostream>

using namespace std;

int suurin(int eka, int toka, int kolmas);
int pienin(int eka, int toka, int kolmas);

int main()
{
    int luku1, luku2, luku3, suurinLuku, pieninLuku;
    cout << "Syötä ensimmäinen kokonaisluku:";
    cin >> luku1;
    cout << "Syötä toinen kokonaisluku:";
    cin >> luku2;
    cout << "Syötä kolmas kokonaisluku:";
    cin >> luku3;
    suurinLuku = suurin(luku1, luku2, luku3);
    pieninLuku = pienin(luku1, luku2, luku3);
    cout << "Syöttämistäsi luvuista suurin oli " << suurinLuku;
    cout << " ja pienin " << pieninLuku << "." << endl;
}

int suurin(int eka, int toka, int kolmas)
{
    int suurin;

    if (eka >= toka && eka >= kolmas)
        suurin = eka;
    else if (toka >= eka && toka >= kolmas)
        suurin = toka;
    else
        suurin = kolmas;

    return suurin;
}

int pienin(int eka, int toka, int kolmas)
{
    int pienin;

    if (eka <= toka && eka <= kolmas)
        pienin = eka;
    else if (toka <= eka && toka <= kolmas)
        pienin = toka;
    else
        pienin = kolmas;

    return pienin;
}