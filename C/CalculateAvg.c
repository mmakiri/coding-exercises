#include <stdio.h>

int main()
{

    int i = 0, arvosana;
    float keskiarvo, summa = 0;

    printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\nLopetus negatiivisella kokonaisluvulla.\n");

    do
    {
        printf("Anna arvosana (4-10):");
        scanf("%d", &arvosana);

        if (arvosana >= 4 && arvosana <= 10)
        {
            summa = summa + arvosana;
            i++;
        }

    } while (arvosana > 0);

    keskiarvo = summa / i;

    printf("Ohjelmaan syötetty %d arvosanaa.\nArvosanojen keskiarvo: %.2f", i, keskiarvo);

    return 0;
}