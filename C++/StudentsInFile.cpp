#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Opiskelija
{
public:
    string etu_nimi;
    string suku_nimi;
    char luokka;
};

int main()
{
    Opiskelija opiskelijat[100];
    int opiskelijamaara = 0;

    ifstream tiedosto("opiskelijat.txt");
    if (!tiedosto)
    {
        cout << "Tiedoston avaaminen ei onnistunut!" << endl;
        exit(-1);
    }

    string rivi;
    while (getline(tiedosto, rivi))
    {
        stringstream ss(rivi);
        string luokka_kirjain, etu_nimi, keski_nimi, suku_nimi;
        ss >> luokka_kirjain >> etu_nimi >> keski_nimi >> suku_nimi;

        Opiskelija opiskelija;
        opiskelija.etu_nimi = etu_nimi + " " + keski_nimi;
        opiskelija.suku_nimi = suku_nimi;
        opiskelija.luokka = luokka_kirjain[0];

        opiskelijat[opiskelijamaara] = opiskelija;
        opiskelijamaara++;
    }

    for (int i = 0; i < opiskelijamaara; i++)
    {
        cout << opiskelijat[i].etu_nimi << " " << opiskelijat[i].suku_nimi << ": luokka " << opiskelijat[i].luokka << "\n";
    }
}
