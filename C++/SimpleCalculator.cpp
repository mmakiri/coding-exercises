#include <iostream>
using namespace std;

int main()
{
    int num1, num2, summa, erotus, kerto, jakoj;

    cout << "Syötä ensimmäinen kokonaisluku:";
    cin >> num1;
    cout << "Syötä toinen kokonaisluku:";
    cin >> num2;

    summa = num1 + num2;
    erotus = num1 - num2;
    kerto = num1 * num2;
    jakoj = num1 % num2;
    
    cout << num1 << "+" << num2 << " = " << summa << "\n"
    << num1 << "-" << num2 << " = " << erotus << "\n"
    << num1 << "*" << num2 << " = " << kerto << "\n"
    << "Jakojäännös: " << jakoj << endl;
}