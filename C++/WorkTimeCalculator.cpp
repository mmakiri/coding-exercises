#include <iostream>
using namespace std;

int main()
{
    int days, i;
    float table[30];
    float hours, hours_total;

    cout << "Ohjelma laskee yhteen haluamasi ajanjakson aikana tehdyt\ntyötunnit sekä keskimääräisen työpäivän pituuden." << endl;

    cout << "Kuinka monta päivää:" << endl;
    cin >> days;

    for(i = 0; i < days; i++)
    {
        cout << "Anna " << i+1 << ". päivän työtunnit:";
        cin >> hours;
        table[i] = hours;
    }

    for(i = 0; i < days; i++)
    {
        hours_total = hours_total + table[i];
    }

    cout << "Tehdyt tunnit yhteensä: " << hours_total << endl;
    cout << "Keskimääräinen työpäivän pituus: " << hours_total / days << endl;

    cout << "Syötetyt tunnit: ";
    for(i = 0; i < days; i++)
    {
        cout << table[i] << " ";
    }
}