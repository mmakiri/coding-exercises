#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream tiedosto("luvut.txt");
    if (!tiedosto.is_open())
    {
        cout << "Tiedoston avaaminen ei onnistunut!" << endl;
        exit(-1);
    }
    int summa = 0, luku;
    while (tiedosto >> luku)
    {
        summa += luku;
    }
    tiedosto.close();
    ofstream uusi_tiedosto("luvut.txt", ios_base::app);
    uusi_tiedosto << summa << endl;
    uusi_tiedosto.close();
    cout << "Lukujen summa on " << summa << endl;
}
