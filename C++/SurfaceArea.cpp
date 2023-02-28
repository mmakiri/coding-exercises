#include <iostream>
using namespace std;

int main()
{
    int r;
    double A;
    float pi = 3.142;

    cout << "Anna ympyrän säde:";
    cin >> r;

    A = pi * (r * r);
    cout << "Ympyrän ala annetulla säteellä: " << A << endl;
}