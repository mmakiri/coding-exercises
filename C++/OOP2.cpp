#include <iostream>
#include <string>
using namespace std;

class KysyJaTulosta
{
public:
    void TeeHommasi(const char *merkkijono);
};

void KysyJaTulosta::TeeHommasi(const char *merkkijono)
{
    cout << merkkijono << endl;
    string syote;
    getline(cin, syote);
    cout << syote << endl;
}

int main()
{
    char merkkijono[] = "Anna merkkijono, jonka tulostan:";
    KysyJaTulosta olio;
    olio.TeeHommasi(merkkijono);
}