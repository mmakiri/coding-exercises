#include <stdio.h>

int main(void)
{
    int paivat;
    float keskiarvo, summa;

    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\ntehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\nKuinka monta päivää:");
    scanf("%d", &paivat);

    float lista[paivat];
    paivat++;
    int pituus = sizeof lista / sizeof *lista;

    int n = 0;
    for (int i = 1; i < paivat; i++)
    {
        printf("Anna %d. päivän työtunnit:", i);
        scanf("%f", &lista[n]);
        n++;
    }

    n = 0;
    for (int i = 0; i < pituus; i++)
    {
        summa = summa + lista[n];
        n++;
    }

    keskiarvo = summa / pituus;

    printf("\nTehdyt työtunnit yhteensä: %.1f\n", summa);
    printf("Keskimääräinen työpäivän pituus: %.1f\n", keskiarvo);
    printf("Syötetyt tunnit: ");
    int l;
    for (l = 0; l < pituus; l++)
    {
        printf("%.1f ", lista[l]);
    }

    return 0;
}