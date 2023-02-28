#include <stdio.h>

int luku1, luku2, luku3, pienin_luku, suurin_luku, i, lista[0];

int suurin(int pienin_luku, int suurin_luku, int lista[]);
int pienin(int pienin_luku, int suurin_luku, int lista[]);

int main(void)
{
    printf("Anna 1. luku:");
    scanf("%d", &luku1);

    printf("Anna 2. luku:");
    scanf("%d", &luku2);

    printf("Anna 3. luku:");
    scanf("%d", &luku3);

    int lista[3] = {luku1, luku2, luku3};
    suurin_luku = pienin_luku = lista[0];

    suurin_luku = suurin(pienin_luku, suurin_luku, lista);
    pienin_luku = pienin(pienin_luku, suurin_luku, lista);

    printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", suurin_luku, pienin_luku);

    return 0;
}

int suurin(int pienin_luku, int suurin_luku, int lista[])
{
    for (i = 1; i < 3; ++i)
    {
        if (lista[i] > suurin_luku)
            suurin_luku = lista[i];
    }
    return suurin_luku;
}

int pienin(int pienin_luku, int suurin_luku, int lista[])
{
    for (i = 1; i < 3; ++i)
    {
        if (lista[i] < pienin_luku)
            pienin_luku = lista[i];
    }
    return pienin_luku;
}