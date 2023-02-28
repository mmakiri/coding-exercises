#include <stdio.h>

int main()
{

    int kokonaisluku, nelio;

    printf("Anna kokonaisluku:");
    scanf("%d", &kokonaisluku);

    nelio = kokonaisluku * kokonaisluku;

    printf("Antamasi luvun neliö on %d\n", nelio);

    return 0;
}