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

    // Tarkista onko tiedosto tyhjä.
    if (NULL != luettelo)
    {
        fseek(luettelo, 0, SEEK_END);
        int sisalto = ftell(luettelo);

        if (0 == sisalto)
        {
            // Tiedosto on tyhjä
            printf("Tiedosto on tyhjä\n");
        }
        else
        {
            // Tiedosto ei ole tyhjä.
            // Lue tiedosto ja tallenna tiedot tietorakenteeseen.
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

            // Tiedot kopioitu tietorankenteeseen.
            // Kysytään käyttäjältä mitkä tiedot poistetaan.

            char poistaetunimi[20], poistasukunimi[20];
            char *null = "";

            printf("Anna etunimi:");
            scanf("%s", poistaetunimi);

            printf("Anna sukunimi:");
            scanf("%s", poistasukunimi);

            // printf("%s %s\n", poistaetunimi, poistasukunimi);

            int removecheck = 0;

            for (int n = 0; n < i; n++)
            {
                if (strcmp(tiedosto.henkilo[n].etunimi, poistaetunimi) == 0 && strcmp(tiedosto.henkilo[n].sukunimi, poistasukunimi) == 0)
                {
                    // printf("\nDEBUG\n");
                    // printf("\nREMOVING %s %s %s\n", tiedosto.henkilo[n].etunimi, tiedosto.henkilo[n].sukunimi, tiedosto.henkilo[n].puhelinnro);
                    strcpy(tiedosto.henkilo[n].etunimi, " ");
                    strcpy(tiedosto.henkilo[n].sukunimi, " ");
                    strcpy(tiedosto.henkilo[n].puhelinnro, " ");
                    tiedosto.index--;
                    removecheck++;
                }
            }

            // Päivitetään tiedosto
            metodi = "w";
            luettelo = fopen(tiedostonimi, metodi);

            int index = tiedosto.index;

            fprintf(luettelo, "%d\n", index);
            for (int n = 0; n < i; n++)
            {
                fprintf(luettelo, "%s %s %s\n",
                        tiedosto.henkilo[n].etunimi,
                        tiedosto.henkilo[n].sukunimi,
                        tiedosto.henkilo[n].puhelinnro);
            }
            fflush(luettelo);
            fclose(luettelo);
            if (removecheck == 0)
            {
                printf("Etsimääsi henkilöä ei löytynyt luettelosta.\n");
            }
            else if (removecheck == 1)
            {
                printf("Tiedot poistettu luettelosta.\n");
            }
        }
    }

    return 0;
}