#include <iostream>
#include <string>
using namespace std;

// Luokka Ajoneuvo sisältää saantimetodit
// AnnaPaino(), AnnaHuippunopeus(), AnnaAjetutKilometrit(), joiden avulla
// luokan Ajoneuvo muuttujien arvot voidaan lukea periytetyssä luokassa.
// Lisäksi Ajoneuvo sisältää metodin Aja(matka kilometreinä),
// joka kasvattaa ajoneuvolla ajettuja kilometrejä.

class Ajoneuvo
{
public:
    int paino;
    int huippu_nopeus;
    long ajetut_kilometrit;
    Ajoneuvo(int paino, int huippu_nopeus, long ajetut_kilometrit);
    void Aja(int ajettava_matka);
    int AnnaPaino();
    int AnnaHuippunopeus();
    long AnnaAjetutKilometrit();
};

// Luokassa on vain yksi alustusmetodi, jossa Ajoneuvon ominaisuudet
// viedään parametrina heti olion muodostamisen yhteydessä.

Ajoneuvo::Ajoneuvo(int Ap, int Ahn, long Akm)
{
    paino = Ap;
    huippu_nopeus = Ahn;
    ajetut_kilometrit = Akm;
}

void Ajoneuvo::Aja(int ajettava_matka)
{
    ajetut_kilometrit += ajettava_matka;
}

int Ajoneuvo::AnnaPaino()
{
    return paino;
}

int Ajoneuvo::AnnaHuippunopeus()
{
    return huippu_nopeus;
}

long Ajoneuvo::AnnaAjetutKilometrit()
{
    return ajetut_kilometrit;
}

// Auto-luokka ja sen metodit (sinun ratkaisusi)
//
//
// Luokan ominaisuudet: (suluissa tietotyyppi)
// - merkki (string)
// - malli (string)
// - rekisteri_nro (string)
// - kaynnissa (bool)
// Luokan metodit
// - kaynnista(), muuttaa kaynnissa-muuttujan arvoksi 1
// - sammuta(), muuttaa kaynnissa-muuttujan arvoksi 0
// - katsasta(), tulostaa auton tiedot esimerkkitulosteen mukaisesti
// Muita huomioita
// - Muuttujien arvoihin pääset käsiksi käyttämällä Ajoneuvo-luokan saantimetodeja
// - Mikäli auto on käynnissä, kun se katsastetaan tulostetaan: "Auto käynnissä"
// - Vastaavasti auton ollessa sammutettuna, tulostetaan: "Auto ei ole käynnissä"

// Auto-Luokka
class Auto : public Ajoneuvo
{
public:
    string merkki;
    string malli;
    string rekisteri_nro;
    bool kaynnissa;

    Auto(int paino, int huippu_nopeus, long ajetut_kilometrit, string merkki, string malli, string rekisteri_nro, bool kaynnissa);
    void kaynnista();
    void sammuta();
    void katsasta();
};

Auto::Auto(int paino, int huippu_nopeus, long ajetut_kilometrit, string merkki, string malli, string rekisteri_nro, bool kaynnissa)
    : Ajoneuvo(paino, huippu_nopeus, ajetut_kilometrit), merkki(merkki), malli(malli), rekisteri_nro(rekisteri_nro), kaynnissa(kaynnissa) {}

void Auto::kaynnista()
{
    kaynnissa = true;
}

void Auto::sammuta()
{
    kaynnissa = false;
}

void Auto::katsasta()
{
    cout << "Auton tiedot:\n"
         << "Merkki:" << merkki << endl
         << "Malli:" << malli << endl
         << "Ajokilometrit:" << AnnaAjetutKilometrit() << endl
         << "Paino:" << paino << endl
         << "Huippunopeus:" << huippu_nopeus << endl
         << "Rekisterinumero:" << rekisteri_nro << endl;

    if (kaynnissa)
    {
        cout << "Auto on käynnissä." << endl;
    }
    else
    {
        cout << "Auto ei ole käynnissä." << endl;
    }
}

// pääohjelma
int main()
{
    int paino, nopeus;
    long km;
    string merkki, malli, rekkari;

    // kysellään tietoja autosta
    cout << "Anna auton merkki: ";
    cin >> merkki;

    cout << "Anna auton malli: ";
    cin >> malli;

    cout << "Anna auton rekisterinumero: ";
    cin >> rekkari;

    cout << "Anna auton paino: ";
    cin >> paino;

    cout << "Anna auton huippunopeus: ";
    cin >> nopeus;

    cout << "Anna autolla ajetut kilometrit: ";
    cin >> km;
    cout << endl;
    Auto autoX(paino, nopeus, km, merkki, malli, rekkari, 0);

    autoX.katsasta();
    autoX.kaynnista();
    autoX.Aja(95);
    cout << endl;
    autoX.katsasta();
}
