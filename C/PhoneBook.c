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
            metodi = "w";
            luettelo = fopen(tiedostonimi, metodi);

            int index = 1;
            char uusietunimi[20], uusisukunimi[20], uusipuhelinnro[20];

            printf("Anna etunimi:");
            scanf("%s", uusietunimi);

            printf("Anna sukunimi:");
            scanf("%s", uusisukunimi);

            printf("Anna puhelinnumero:");
            scanf("%s", uusipuhelinnro);

            fprintf(luettelo, "%d\n", index);
            fprintf(luettelo, "%s %s %s", uusietunimi, uusisukunimi, uusipuhelinnro);

            fflush(luettelo);
            fclose(luettelo);

            printf("Tietojen tallennus onnistui.\n");
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

            metodi = "w";
            luettelo = fopen(tiedostonimi, metodi);

            int index = tiedosto.index + 1;
            char uusietunimi[20], uusisukunimi[20], uusipuhelinnro[20];

            printf("Anna etunimi:");
            scanf("%s", uusietunimi);

            printf("Anna sukunimi:");
            scanf("%s", uusisukunimi);

            printf("Anna puhelinnumero:");
            scanf("%s", uusipuhelinnro);

            fprintf(luettelo, "%d\n", index);

            for (int n = 0; n < i; n++)
            {
                fprintf(luettelo, "%s %s %s\n",
                        tiedosto.henkilo[n].etunimi,
                        tiedosto.henkilo[n].sukunimi,
                        tiedosto.henkilo[n].puhelinnro);
            }

            fprintf(luettelo, "%s %s %s\n", uusietunimi, uusisukunimi, uusipuhelinnro);

            fflush(luettelo);
            fclose(luettelo);

            printf("Tietojen tallennus onnistui.\n");
        }
    }

    return 0;
}