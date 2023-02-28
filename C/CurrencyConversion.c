#include <stdio.h>

int main()
{

    float euro_kerroin = 5.94573;
    float markka_maara;
    float euro;

    printf("Syötä jokin markkamäärä:");
    scanf("%f", &markka_maara);

    euro = markka_maara / euro_kerroin;

    printf("Markat euroina: %.2f\n", euro);

    return 0;
}