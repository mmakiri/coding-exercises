#include <stdio.h>

int main()
{

    int i, luku, kertoma = 1;

    printf("Anna kokonaisluku:");
    scanf("%d", &luku);

    for (i = 1; i <= luku; i++)
    {
        kertoma = kertoma * i;
    }

    printf("Luvun %d kertoma on %d", luku, kertoma);

    return 0;
}