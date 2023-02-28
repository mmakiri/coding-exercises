#include <iostream>
using namespace std;

int main()
{
    int i, luku;
    int kertoma = 1;

    cout << "Anna kokonaisluku:";
    cin >> luku;

    for(i = 1; i <= luku; i++)
    {
        kertoma = kertoma * i;
    }
    cout << "Luvun " << luku << " kertoma on " << kertoma << endl;
}