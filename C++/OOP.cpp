#include <iostream>
#include <string>
using namespace std;

class Tulostusluokka
{
public:
    string merkkijono;

    void Tulosta(string uusi_merkkijono);
};

void Tulostusluokka::Tulosta(string uusi_merkkijono)
{
    cout << uusi_merkkijono << endl;
}

int main()
{
    char merkkijono[50];
    cout << "Anna merkkijono, jonka tulostan:";
    cin.get(merkkijono, 50);
    Tulostusluokka tulostaja;
    tulostaja.Tulosta(merkkijono);
}