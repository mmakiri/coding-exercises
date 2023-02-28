#include <stdio.h>

int tulos, eka_luku, toka_luku;

void summa(int eka_luku, int toka_luku);
void erotus(int eka_luku, int toka_luku);
void tulo(int eka_luku, int toka_luku);

int main(void)
{
    int valinta;
    do
    {
        printf("1: kahden luvun summa\n2: kahden luvun erotus\n3: kahden luvun tulo\n<0: ohjelman lopetus\nValitse laskutoimitus:");
        scanf("%d", &valinta);

        if (valinta < 0)
        {
            printf("Ohjelma lopetetaan...\n");
            return 0;
        }

        printf("Syötä ensimmäinen luku:");
        scanf("%d", &eka_luku);

        printf("Syötä toinen luku:");
        scanf("%d", &toka_luku);

        if (valinta == 1)
        {
            summa(eka_luku, toka_luku);
        }
        else if (valinta == 2)
        {
            erotus(eka_luku, toka_luku);
        }
        else if (valinta == 3)
        {
            tulo(eka_luku, toka_luku);
        }
    } while (valinta > 0);
}

void summa(int eka_luku, int toka_luku)
{
    tulos = eka_luku + toka_luku;
    printf("%d + %d = %d\n\n", eka_luku, toka_luku, tulos);
}

void erotus(int eka_luku, int toka_luku)
{
    tulos = eka_luku - toka_luku;
    printf("%d - %d = %d\n\n", eka_luku, toka_luku, tulos);
}

void tulo(int eka_luku, int toka_luku)
{
    tulos = eka_luku * toka_luku;
    printf("%d * %d = %d\n\n", eka_luku, toka_luku, tulos);
}