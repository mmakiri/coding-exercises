#include <iostream>
using namespace std;

int main()
{
    double euro, markka;
    double kerroin = 5.94573;

    cout << "Syötä jokin markkamäärä:";
    cin >> markka;

    euro = markka / kerroin;
    cout << "Markat euroina: " << euro << endl;
}