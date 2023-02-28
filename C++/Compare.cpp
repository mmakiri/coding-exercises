#include <iostream>
using namespace std;

int main()
{
    char choice;
    int sugar_amount;

    cout << "Juotko kahvia vai teetä? (k/t) ";
    cin >> choice;

    cout << "Montako palaa sokeria? ";
    cin >> sugar_amount;

    if (choice == 'k')
    {
        if (sugar_amount >= 0 && sugar_amount <= 2)
        {
            cout << "Kahvi kyllä piristää!" << endl;
        }
        else if (sugar_amount > 2)
        {
            cout << "Kahvi voi olla aika vahva maku..." << endl;
        }
        else
        {
            cout << "Ohjelmassa tapahtunut virhe!" << endl;
        }
    }
    else if (choice == 't')
    {
        if (sugar_amount >= 0 && sugar_amount <= 2)
        {
            cout << "Tee usein rauhoittaa!" << endl;
        }
        else if (sugar_amount > 2)
        {
            cout << "Taidat pitää teestäsi makeana?" << endl;
        }
        else
        {
            cout << "Ohjelmassa tapahtunut virhe!" << endl;
        }
    }
    else
    {
        cout << "Ohjelmassa tapahtunut virhe!" << endl;
    }
}