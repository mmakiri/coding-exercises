#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int kat1, kat2;
    double hypo, hypo_pituus;

    cout << "Anna ensimmäinen kateetti:";
    cin >> kat1;
    cout << "Anna toinen kateetti:";
    cin >> kat2;

    hypo = pow(kat1, 2) + pow(kat2, 2);

    hypo_pituus = sqrt(hypo);

    cout << "Hypotenuusan pituus: " << hypo_pituus << endl;
}