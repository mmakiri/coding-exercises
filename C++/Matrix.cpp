#include <iostream>
#include <fstream>

using namespace std;

void tulosta_matriisi(int matriisi[5][5]);
int laske_summa(int matriisi[5][5]);

int main(void)
{
    int matriisi[5][5];
    int summa;
    ifstream luku("matriisi.txt");
    if (!luku)
    {
        cout << "Tiedoston avaaminen epäonnistui...";
    }
    else
    {
        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                luku >> matriisi[y][x];
            }
        }
        luku.close();
        cout << "Matriisi:" << endl;
        tulosta_matriisi(matriisi);
        summa = laske_summa(matriisi);
        cout << "Alkioiden summa: " << summa << endl;
    }
}

void tulosta_matriisi(int matriisi[5][5])
{
    int x, y;
    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 5; x++)
        {
            cout << matriisi[y][x] << " ";
        }
        cout << "\n";
    }
}

int laske_summa(int matriisi[5][5])
{
    int summa = 0, x, y;
    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 5; x++)
        {
            summa = summa + matriisi[y][x];
        }
    }
    return summa;
}