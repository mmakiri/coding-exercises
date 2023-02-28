#include <stdio.h>

int main()
{
    int eka_luku, toka_luku, summa, vahennys, kerto;

    printf("Anna eka luku:");
    scanf("%d", &eka_luku);

    printf("Anna toka luku:");
    scanf("%d", &toka_luku);

    summa = eka_luku + toka_luku;
    vahennys = eka_luku - toka_luku;
    kerto = eka_luku * toka_luku;

    printf("\n%d+%d=%d\n%d-%d=%d\n%d*%d=%d", eka_luku, toka_luku, summa, eka_luku, toka_luku, vahennys, eka_luku, toka_luku, kerto);

    return 0;
}