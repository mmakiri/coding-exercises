#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Anna kokonaisluku:";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Luku " << number << " on parillinen." << endl;
    }
    else
    {
        cout << "Luku " << number << " on pariton." << endl;
    }
}