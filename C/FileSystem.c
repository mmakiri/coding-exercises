#include <stdio.h>

int main(void)
{
    int luku1, luku2, luku3, luku4, summa;

    printf("Tiedostosta luvut.s löytyneet luvut:\n");

    FILE *luvut = fopen("luvut.s", "r");

    fscanf(luvut, "%d %d %d %d", &luku1, &luku2, &luku3, &luku4);
    fclose(luvut);

    summa = luku1 + luku2 + luku3 + luku4;

    printf("%d, %d, %d ja %d\n\nLukujen summa: %d\n", luku1, luku2, luku3, luku4, summa);
    return 0;
}