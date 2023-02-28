#include <stdio.h>
#include <string.h>

int main(void)
{
    char *tiedostonimi = "luettelo.txt";
    char *metodi = "r";

    struct tiedostorakenne
    {
        int index;
        struct henkilolista
        {
            char etunimi[20];
            char sukunimi[20];
            char puhelinnro[20];
        } henkilo[50];
    } tiedosto;

    FILE *luettelo;
    luettelo = fopen(tiedostonimi, metodi);

    if (NULL != luettelo)
    {
        fseek(luettelo, 0, SEEK_END);
        int sisalto = ftell(luettelo);

        if (0 == sisalto)
        {
            printf("Tiedosto on tyhjä!.\n");
            return 1;
        }
        else
        {
            metodi = "r";
            luettelo = fopen(tiedostonimi, metodi);

            int i = 0;
            char etunimi[20], sukunimi[20], puhelinnro[20];

            fscanf(luettelo, "%d", &tiedosto.index);
            while (fscanf(luettelo, "%s %s %s", etunimi, sukunimi, puhelinnro) != EOF)
            {
                strcpy(tiedosto.henkilo[i].etunimi, etunimi);
                strcpy(tiedosto.henkilo[i].sukunimi, sukunimi);
                strcpy(tiedosto.henkilo[i].puhelinnro, puhelinnro);
                i++;
            }
            fflush(luettelo);
            fclose(luettelo);

            metodi = "r";
            luettelo = fopen(tiedostonimi, metodi);

            for (int n = 0; n < i; n++)
            {
                printf("%s %s %s\n",
                       tiedosto.henkilo[n].etunimi,
                       tiedosto.henkilo[n].sukunimi,
                       tiedosto.henkilo[n].puhelinnro);
            }
        }
    }
    return 0;
}