#include <stdio.h>

int main()
{
    int valinta, eka_luku, toka_luku, tulos;

    printf("1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\nValitse toiminto:");
    scanf("%d", &valinta);

    printf("Anna eka luku:");
    scanf("%d", &eka_luku);

    printf("Anna toka luku:");
    scanf("%d", &toka_luku);

    switch (valinta)
    {
    case 1:
    {
        tulos = eka_luku - toka_luku;
        printf("%d-%d=%d", eka_luku, toka_luku, tulos);
        break;
    }
    case 2:
    {
        tulos = eka_luku + toka_luku;
        printf("%d+%d=%d", eka_luku, toka_luku, tulos);
        break;
    }
    case 3:
    {
        tulos = eka_luku * toka_luku;
        printf("%d*%d=%d", eka_luku, toka_luku, tulos);
        break;
    }

    default:
        printf("Et valinnut oikeaa laskutoimitusta 1-3 väliltä!");
        break;
    }

    return 0;
}