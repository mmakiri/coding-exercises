#include <iostream>
using namespace std;

int main()
{
    int choice, x, y, output;
    char calc;

    cout << "Käytössäsi on seuraavat laskutoimitukset:\n1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\n4: osamäärä\n5: jakojäännös\nValitse laskutoimitus:";
    cin >> choice;

    cout << "Anna eka luku:";
    cin >> x;

    cout << "Anna toinen luku:";
    cin >> y;

    switch (choice)
    {
    case 1:
        output = x - y;
        calc = '-';
        break;
    case 2:
        output = x + y;
        calc = '+';
        break;
    case 3:
        output = x * y;
        calc = '*';
        break;
    case 4:
        output = x / y;
        calc = '/';
        break;
    case 5:
        output = x % y;
        calc = '%';
        break;
    default:
        break;
    }

    cout << x << calc << y << " = " << output << endl;
}